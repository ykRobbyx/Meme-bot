#pragma once

#include <array>
#include <random>
#include <stdexcept>
#include <string>

namespace fun_commands {
inline int roll(int sides, std::mt19937& generator) {
    if (sides < 2 || sides > 100) {
        throw std::invalid_argument("Choose between 2 and 100 sides.");
    }
    return std::uniform_int_distribution<int>(1, sides)(generator);
}

inline std::string coinflip(std::mt19937& generator) {
    return roll(2, generator) == 1 ? "Heads" : "Tails";
}

inline std::string eight_ball(std::mt19937& generator) {
    static const std::array<std::string, 8> answers = {
        "Absolutely. The memes have spoken.",
        "Yes — send it!",
        "The odds are in your favor.",
        "Ask again after one more meme.",
        "Reply hazy. Touch grass and try again.",
        "Better not count on it.",
        "That's a no from the meme council.",
        "Very doubtful. Even the cat disagrees."
    };
    return answers[roll(static_cast<int>(answers.size()), generator) - 1];
}
} // namespace fun_commands
