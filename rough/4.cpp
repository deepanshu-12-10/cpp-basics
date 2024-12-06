#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void calculateSpan(int prices[], int n, int spans[]) {
    stack<int> st;
    st.push(0); // Push index of the first day
    spans[0] = 1; // Span of the first day is always 1

    for (int i = 1; i < n; ++i) {
        // Pop elements from stack while stack is not empty and price[i] >= price of top of stack
        while (!st.empty() && prices[i] >= prices[st.top()]) {
            st.pop();
        }

        // If stack becomes empty, all previous elements are smaller or equal to prices[i]
        // So span is i + 1
        spans[i] = (st.empty()) ? (i + 1) : (i - st.top());

        // Push this element to stack
        st.push(i);
    }
}

int main() {
    int n;
    cin >> n;

    int prices[n];
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    int spans[n];
    calculateSpan(prices, n, spans);

    // Output the spans array
    for (int i = 0; i < n; ++i) {
        cout << spans[i] << " ";
    }
    cout << endl;

    return 0;
}
