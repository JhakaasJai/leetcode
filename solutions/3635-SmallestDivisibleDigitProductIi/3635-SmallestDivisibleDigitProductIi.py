# Last updated: 9/23/2026, 12:21:12 AM
class Solution:
    def smallestNumber(self, num: str, t: int) -> str:
        a = b = c = d = 0
        r = t
        while r % 2 == 0: r //= 2; a += 1
        while r % 3 == 0: r //= 3; b += 1
        while r % 5 == 0: r //= 5; c += 1
        while r % 7 == 0: r //= 7; d += 1
        if r != 1:
            return "-1"

        n = len(num)
        E2 = [0,0,1,0,2,0,1,0,3,0]
        E3 = [0,0,0,1,0,0,1,0,0,2]
        E5 = [0,0,0,0,0,1,0,0,0,0]
        E7 = [0,0,0,0,0,0,0,1,0,0]

        PA=[0]*(n+1); PB=[0]*(n+1); PC=[0]*(n+1); PD=[0]*(n+1)
        firstZero = n
        for i in range(n):
            dv = ord(num[i]) - 48
            if dv == 0 and firstZero == n:
                firstZero = i
            PA[i+1]=PA[i]+E2[dv]; PB[i+1]=PB[i]+E3[dv]
            PC[i+1]=PC[i]+E5[dv]; PD[i+1]=PD[i]+E7[dv]

        if firstZero == n and PA[n]>=a and PB[n]>=b and PC[n]>=c and PD[n]>=d:
            return num

        D_all = [(2,1,0),(3,0,1),(4,2,0),(6,1,1),(8,3,0),(9,0,2)]
        floors_list = [2,3,4,6,8,9]

        def build_table(min_digit):
            digits = [t3 for t3 in D_all if t3[0] >= min_digit]
            table = [[0]*(b+1) for _ in range(a+1)]
            for x in range(a+1):
                for y in range(b+1):
                    if x==0 and y==0:
                        continue
                    best = None
                    for dg,e2,e3 in digits:
                        x2 = x-e2 if x-e2>0 else 0
                        y2 = y-e3 if y-e3>0 else 0
                        if x2==x and y2==y:
                            continue
                        val = 1+table[x2][y2]
                        if best is None or val<best: best = val
                    table[x][y] = best if best is not None else 10**9
            return table

        tables = {fl: build_table(fl) for fl in floors_list}
        F = tables[2]

        def clamp(v): return v if v>0 else 0

        def feasible(R, ra, rb, rc, rd):
            ra,rb,rc,rd = clamp(ra),clamp(rb),clamp(rc),clamp(rd)
            return rc+rd+F[ra][rb] <= R

        def build_suffix(R, ra, rb, rc, rd):
            x,y = clamp(ra), clamp(rb)
            rc,rd = clamp(rc), clamp(rd)
            remaining_k = F[x][y]
            floor = 2
            result_digits = []
            while remaining_k>0:
                chosen = None
                for dg,e2,e3 in D_all:
                    if dg<floor: continue
                    x2 = x-e2 if x-e2>0 else 0
                    y2 = y-e3 if y-e3>0 else 0
                    if x2==x and y2==y: continue
                    if tables[dg][x2][y2] <= remaining_k-1:
                        chosen = (dg,x2,y2); break
                dg,x2,y2 = chosen
                result_digits.append(dg)
                x,y = x2,y2
                floor = dg
                remaining_k -= 1
            all_digits = result_digits + [5]*rc + [7]*rd
            all_digits.sort()
            ones = R - len(all_digits)
            return '1'*ones + ''.join(map(str, all_digits))

        limit = min(n-1, firstZero)
        ans = None
        for i in range(limit, -1, -1):
            dv = ord(num[i]) - 48
            if dv == 9:
                continue
            R = n-i-1
            found_v = None
            for v in range(dv+1, 10):
                ra = a-PA[i]-E2[v]; rb = b-PB[i]-E3[v]
                rc = c-PC[i]-E5[v]; rd = d-PD[i]-E7[v]
                if feasible(R, ra, rb, rc, rd):
                    found_v = v; break
            if found_v is not None:
                ra = a-PA[i]-E2[found_v]; rb = b-PB[i]-E3[found_v]
                rc = c-PC[i]-E5[found_v]; rd = d-PD[i]-E7[found_v]
                suffix = build_suffix(R, ra, rb, rc, rd)
                ans = num[:i] + str(found_v) + suffix
                break

        if ans is not None:
            return ans

        minimal_length = c + d + F[a][b]
        L = max(n+1, minimal_length)
        return build_suffix(L, a, b, c, d)