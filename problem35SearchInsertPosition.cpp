#include <iostream>
#include <vector>

class Solution {
public:
    int searchInsert( std::vector<int>& nums, int target ) {
        if ( target <= nums[0] ) return 0;
        for ( int i = 0 ; i < nums.size() - 1 ; i++ ) {
            if ( nums[ i+1 ] >= target ) {
                return ( i + 1 );
            }
        }
        return ( nums.size() );
    }
};

int main ( void ) {
    Solution sol;
    std::vector<int> vector = { 1, 3, 5, 6 };
    int answer = sol.searchInsert( vector, 5 );
    std::cout << "\nCevap: " << answer << "\n";
    vector = { 1, 3, 5, 6 };
    answer = sol.searchInsert( vector, 2 );
    std::cout << "\nCevap: " << answer << "\n";
    vector = { 1, 3, 5, 6 };
    answer = sol.searchInsert( vector, 7 );
    std::cout << "\nCevap: " << answer << "\n";
}