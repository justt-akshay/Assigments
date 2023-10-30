class LectureDetails:
    def __init__(self, lecturer_name, subject_name, course_name):
        self.lecturer_name = lecturer_name
        self.subject_name = subject_name
        self.course_name = course_name
        self.lecture_count = 0
        self.lectures = []

    def add_lecture(self):
        lecture_number = self.lecture_count + 1
        lecture = {
            "Lecture Number": lecture_number,
            "Lecturer Name": self.lecturer_name,
            "Subject Name": self.subject_name,
            "Course Name": self.course_name,
        }
        self.lectures.append(lecture)
        self.lecture_count += 1

    def display_lectures(self):
        print(f"Lecturer Name: {self.lecturer_name}")
        print(f"Subject Name: {self.subject_name}")
        print(f"Course Name: {self.course_name}")
        print("Lecture Details:")
        for lecture in self.lectures:
            print(f"  Lecture Number: {lecture['Lecture Number']}")
            print(f"  Lecturer Name: {lecture['Lecturer Name']}")
            print(f"  Subject Name: {lecture['Subject Name']}")
            print(f"  Course Name: {lecture['Course Name']}")
            print("-" * 30)

def main():
    lecturer1 = LectureDetails("John Doe", "Mathematics", "Math 101")
    lecturer2 = LectureDetails("Alice Smith", "History", "History 201")

    lecturer1.add_lecture()
    lecturer1.add_lecture()
    lecturer2.add_lecture()

    print("Lecture Details for Lecturer 1:")
    lecturer1.display_lectures()

    print("Lecture Details for Lecturer 2:")
    lecturer2.display_lectures()

if __name__ == "__main__":
    main()
