#include <iostream>
int main()
{
    std::cout << "**********QUIZ********" << std::endl;
    std::cout << "\n";
    std::string question[] = {"1.What year was C++ created?",
                              "2.Who created C++?",
                              "3.What is the pedecessor of C++?",
                              "4.Which level of language C++ is?"};
    std::string option[][4] = {{"A.1969", "B.1975", "C.1985", "D.1999"},
                               {"A.Guido Van Rossum", "B.Bjarne Stroustrup", "C.John Carmak", "D.Mark Jucker Berg"},
                               {"A.C", "B.C+", "C#.", "D.C--"},
                               {"A.High", "B.Mid", "C.Low", "D.Other"}};

    char correct_answer[] = {'C', 'B', 'A', 'B'};
    int question_size = sizeof(question) / sizeof(question[0]);
    char guess;
    double score = 0;
    for (size_t i = 0; i < question_size; i++)
    {
        std::cout << question[i] << std::endl;
        std::cout << "\n";
        for (size_t j = 0; j < sizeof(option[i]) / sizeof(option[i][0]); j++)
        {

            std::cout << option[i][j] << "\t";
        }
        std::cout << "\n";
        std::cout << "***************************************" << std::endl;
        std::cout << "Your option:";
        std::cin >> guess;
        guess = toupper(guess);
        if (guess == correct_answer[i])
        {
            std::cout << "Correct\n";
            score++;
        }
        else
        {
            std::cout << "Wrong\n";
            std::cout << "Correct answer: " << correct_answer[i] << "\n";
            std::cout << "******************" << "\n";
        }
        std::cout << "\n";
    }
    std::cout << "Your score :" << score << "\n";
    std::cout << "Number of question :" << question_size << "\n";
    double parcentage = ((score / question_size) * 100);
    std::cout << "Your score :" << parcentage << " %\n";
    return 0;
}