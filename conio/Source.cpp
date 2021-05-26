#include <iostream>
#include <vector>

int getProperIndex(int val, std::vector<int>& vec)
{
    static int firstIndex = vec.size() - 1;
    for (int i = firstIndex; i >= 0; i--)
    {
        if (val <= vec[i])
        {
            vec.insert(vec.begin() + i + 1, val);
            firstIndex = i + 1;
            return i + 1;
        }
    }
    //rank first
    vec.insert(vec.begin(), val);
    return 0;
}

int getRank(int index, const std::vector<int>& vec)
{
    int rank = 1;
    for (int i = 1; i < index + 1; i++)
    {
        if (vec[i - 1] != vec[i])
            rank++;
    }
    return rank;
}

std::vector<int> climbingLeaderboard(std::vector<int> ranked, std::vector<int> player)
{
    std::vector<int> result;

    int ind = player.size();
    for (int i = 0; i < player.size(); i++)
    {
        ind = getProperIndex(player[i], ranked);
        result.push_back(getRank(ind, ranked));      
    }
    return result;
}

int main()
{
    std::vector <int> ranked;
    std::vector <int> player;

    int N;
    std::cin >> N;
    
    //read elements 
    for (int i = 0; i < N; i++)
    {
        int beo;
        std::cin >> beo;
        ranked.push_back(beo);
    }
   
    std::cin >> N;
    
    //read elements 
    for (int i = 0; i < N; i++)
    {
        int beo;
        std::cin >> beo;
        player.push_back(beo);
    }

    std::vector<int> result =  climbingLeaderboard(ranked, player);
    for (int i : result)
        std::cout << i;
}