#include "fun_commands.h"
#include <cassert>
#include <set>

int main() {
    std::mt19937 generator(42);
    for (int sides : {2, 6, 20, 100}) {
        std::set<int> seen;
        for (int i = 0; i < 10000; ++i) {
            const int value = fun_commands::roll(sides, generator);
            assert(value >= 1 && value <= sides);
            seen.insert(value);
        }
        assert(seen.size() == static_cast<size_t>(sides));
    }
    for (int sides : {-1, 0, 1, 101}) {
        bool rejected = false;
        try { fun_commands::roll(sides, generator); }
        catch (const std::invalid_argument&) { rejected = true; }
        assert(rejected);
    }
    std::set<std::string> coins, answers;
    for (int i = 0; i < 1000; ++i) {
        coins.insert(fun_commands::coinflip(generator));
        const auto answer = fun_commands::eight_ball(generator);
        assert(!answer.empty());
        answers.insert(answer);
    }
    assert((coins == std::set<std::string>{"Heads", "Tails"}));
    assert(answers.size() == 8);
}
