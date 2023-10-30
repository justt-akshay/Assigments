#include <iostream>
#include <vector>

class Lecture {
public:
    Lecture() {
        numLecturers = 0;
    }

    // Function to add lecture details for a lecturer
    void addLectureDetails(const std::string& lecturerName, const std::string& subject, const std::string& course) {
        Lecturer lecturer;
        lecturer.name = lecturerName;
        lecturer.subject = subject;
        lecturer.course = course;
        lecturers.push_back(lecturer);
        numLecturers++;
    }

    // Function to display lecturer names and their lecture details
    void displayLecturerDetails() {
        std::cout << "Lecturer Details:" << std::endl;
        for (int i = 0; i < numLecturers; i++) {
            std::cout << "Lecturer " << (i + 1) << ":" << std::endl;
            std::cout << "Name: " << lecturers[i].name << std::endl;
            std::cout << "Subject: " << lecturers[i].subject << std::endl;
            std::cout << "Course: " << lecturers[i].course << std::endl;
            std::cout << "------------------------" << std::endl;
        }
    }

private:
    // Structure to store lecturer details
    struct Lecturer {
        std::string name;
        std::string subject;
        std::string course;
    };

    std::vector<Lecturer> lecturers;
    int numLecturers;
};

int main() {
    Lecture lectureSystem;
    const int numLecturers = 5;

    for (int i = 0; i < numLecturers; i++) {
        std::string name, subject, course;
        std::cout << "Enter the lecturer's name: ";
        std::cin >> name;
        std::cout << "Enter the subject: ";
        std::cin >> subject;
        std::cout << "Enter the course: ";
        std::cin >> course;

        lectureSystem.addLectureDetails(name, subject, course);
    }

    lectureSystem.displayLecturerDetails();

    return 0;
}
