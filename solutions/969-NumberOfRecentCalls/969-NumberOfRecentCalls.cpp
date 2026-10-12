// Last updated: 10/12/2026, 9:47:21 PM
class RecentCounter {
private:
    queue<int> requests;

public:
    RecentCounter() {
    }

    int ping(int t) {
        requests.push(t);

        while (requests.front() < t - 3000) {
            requests.pop();
        }

        return requests.size();
    }
};