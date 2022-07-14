#include <iostream>
#include <string>
using namespace std;

class Movie {
public:
	string moviename, MPAARating;
	int rating_one, rating_two, rating_three, rating_four, rating_five;
	/*Movie(){
	//Default constructor
	}*/
	Movie(string name, string rating) {
		moviename = name;
		MPAARating = rating;
		rating_one = 0;
		rating_two = 0;
		rating_three = 0;
		rating_four = 0;
		rating_five = 0;
	}

	void addRating(int rating) {
		if (rating < 1 || rating>5) {
			cout << "Invalid Rating\n";
			return;
		}
		if (rating == 1)
			rating_one += 1;
		else if (rating == 2)
			rating_two += 1;
		else if (rating == 3)
			rating_three += 1;
		else if (rating == 4)
			rating_four += 1;
		else
			rating_five += 1;
	}

	float getAverage() {
		float avg = ((float)(rating_one + 2 * rating_two + 3 * rating_three + 4 * rating_four + 5 * rating_five) / (float)(rating_one + rating_two + rating_three + rating_four + rating_five));
		return avg;
	}
};

int main() {
	Movie mv1("Movie1", "PG"), mv2("Movie2", "R");
	mv1.addRating(3);
	mv1.addRating(5);
	mv1.addRating(2);
	mv1.addRating(3);
	mv1.addRating(4);
	float avg1 = mv1.getAverage();
	mv2.addRating(7);
	mv2.addRating(2);
	mv2.addRating(3);
	mv2.addRating(4);
	mv2.addRating(5);
	float avg2 = mv2.getAverage();
	cout << "Movie Name\tMPAA Rating\tMovie Rating\n";
	cout << mv1.moviename << "\t\t" << mv1.MPAARating << "\t\t" << avg1 << "\n";
	cout << mv2.moviename << "\t\t" << mv2.MPAARating << "\t\t" << avg2 << "\n";
	return 0;
}