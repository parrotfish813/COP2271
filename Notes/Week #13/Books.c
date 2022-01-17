#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

struct Library {
	char bookTitle;
	char bookAuthor;
	int numPages;
	char bookPrice;

	char book[100][100][100][100] = { {"Fundamentals of Wavelets", "Goswami Jaideva", 934, 473}, { "Data Smart", "Foreman John", 282, 376 }, { "God Created the Integers", "Hawking Stephen", 858, 832 }, { "Superfreakonomics", "Dubner Stephen", 250, 529 }, { "Orientalism", "Said Edward", 877, 422 }, { "Nature of Statistical Learning Theory", "Vapnik Vladimir", 530, 517 }, { "Integration of the Indian States", "Menon V P", 694, 419 }, { "Drunkard's Walk", "Mlodinow Leonard", 140, 254 }, { "Image Processing & Mathematical Morphology", "Shih Frank", 303, 596 }, { "How to Think Like Sherlock Holmes", "Konnikova Maria", 100, 546 }, { "Data Scientists at Work", "Sebastian Gutierrez", 302, 792 }, { "Slaughterhouse Five", "Vonnegut Kurt", 739, 965 }, { "Birth of a Theorem", "Villani Cedric", 258, 169 }, { "Structure & Interpretation of Computer Programs", "Sussman Gerald", 783, 781 }, { "Age of Wrath", "Eraly Abraham", 234, 522 }, { "Trial", "Kafka Frank", 504, 41 }, { "Statistical Decision Theory'", "Pratt John", 769, 163 }, { "Data Mining Handbook", "Nisbet Robert", 139, 128 }, { "New Machiavelli", "Wells H. G.", 751, 454 }, { "Physics & Philosophy", "Heisenberg Werner", 282, 279 }, { "Making Software", "Oram Andy", 237, 342 }, { "Analysis, Vol I", "Tao Terence", 424, 714 }, { "Machine Learning for Hackers", "Conway Drew", 78, 951 }, { "Signal and the Noise", "Silver Nate", 721, 742 }, { "Python for Data Analysis", "McKinney Wes", 489, 254 }, { "Introduction to Algorithms", "Cormen Thomas", 318, 994 }, { "Beautiful and the Damned", "Deb Siddhartha", 512, 870 }, { "Outsider", "Camus Albert", 890, 488 }, { "Complete Sherlock Holmes - Vol I", "Doyle Arthur Conan", 334, 593 }, { "Complete Sherlock Holmes - Vol II", "Doyle Arthur Conan", 260, 607 }, { "Wealth of Nations", "Smith Adam", 977, 588 }, { "Pillars of the Earth", "Follett Ken", 908, 121 }, { "Mein Kampf", "Hitler Adolf", 183, 340 }, { "Tao of Physics", "Capra Fritjof", 871, 432 }, { "Surely You're Joking Mr Feynman", "Feynman Richard", 178, 838 }, { "Farewell to Arms, A", "Hemingway Ernest", 55, 818 }, { "Veteran", "Forsyth Frederick", 912, 648 }, { "False Impressions", "Archer Jeffery", 359, 903 }, { "Last Lecture", "Pausch Randy", 157, 932 }, { "Return of the Primitive", "Rand Ayn", 918, 218 }, { "Jurassic Park", "Crichton Michael", 872, 132 }, { "Russian Journal, A", "Steinbeck John", 419, 881 }, { "Tales of Mystery and Imagination", "Poe Edgar Allen", 221, 276 }, { "Freakonomics", "Dubner Stephen", 591, 268 }, { "Hidden Connections", "Capra Fritjof", 164, 322 }, { "Story of Philosophy", "Durant Will", 851, 567 }, { "Asami Asami", "Deshpande P L", 292, 260 }, { "Journal of a Novel", "Steinbeck John", 442, 948 }, { "Once There Was a War", "Steinbeck John", 254, 688 }, { "Moon is Down", "Steinbeck John", 150, 980 }, { "Brethren", "Grisham John", 745, 654 }, { "In a Free State", "Naipaul V. S.", 851, 312 }, { "Catch 22", "Heller Joseph", 170, 987 }, { "Complete Mastermind", "BBC", 799, 703 }, { "Dylan on Dylan", "Dylan Bob", 243, 60 }, { "Soft Computing & Intelligent Systems", "Gupta Madan", 387, 64 }, { "Textbook of Economic Theory", "Stonier Alfred", 353, 282 }, { "Econometric Analysis", "Greene W. H.", 901, 593 },
									{"Learning OpenCV", "Bradsky Gary", 259, 142},{"Data Structures Using C & C++", "Tanenbaum Andrew", 320, 426},{"Computer Vision, A Modern Approach", "Forsyth David", 910, 508},{"Principles of Communication Systems", "Taub Schilling", 484, 527},{"Let Us C", "Kanetkar Yashwant", 236, 583},{"Amulet of Samarkand", "Stroud Jonathan", 856, 650},{"Crime and Punishment", "Dostoevsky Fyodor", 856, 269},{"Angels & Demons", "Brown Dan", 107, 185},{"Argumentative Indian", "Sen Amartya", 51, 815},{"Sea of Poppies", "Ghosh Amitav", 529, 52},{"Idea of Justice", "Sen Amartya", 245, 318},{"Raisin in the Sun, A", "Hansberry Lorraine", 966, 594},{"All the President's Men", "Woodward Bob", 449, 461},{"Prisoner of Birth, A", "Archer Jeffery", 325, 219},{"Scoop!", "Nayar Kuldip", 414, 519},{"Ahe Manohar Tari", "Deshpande Sunita", 201, 622},{"Last Mughal", "Dalrymple William", 704, 100},{"Social Choice & Welfare, Vol 39 No. 1", "Various", 979, 591},{"Radiowaril Bhashane & Shrutika", "Deshpande P L", 993, 819},{"Gun Gayin Awadi", "Deshpande P L", 721, 862},{"Aghal Paghal", "Deshpande P L", 296, 999},{"Maqta-e-Ghalib", "Garg Sanjay", 149, 897},{"Beyond Degrees", "Bodanis David", 399, 457},{"Manasa", "Kale V P", 243, 549},{"India from Midnight to Milennium", "Tharoor Shashi", 201, 614},{"World's Greatest Trials", "Maugham William S", 549, 429},{"Great Indian Novel", "Tharoor Shashi", 843, 373},{"O Jerusalem!", "Lapierre Dominique", 415, 908},{"City of Joy", "Lapierre Dominique", 512, 480},{"Freedom at Midnight", "Lapierre Dominique", 714, 137},{"Winter of Our Discontent", "Steinbeck John", 626, 532},{"On Education", "Russell Bertrand", 853, 233},{"Free Will", "Harris Sam", 61, 287},{"Bookless in Baghdad", "Tharoor Shashi", 1000, 943},{"Case of the Lame Canary", "Gardner Earle Stanley", 722, 304},{"Theory of Everything", "Hawking Stephen", 770, 328},{"New Markets & Other Essays", "Drucker Peter", 994, 220},{"Electric Universe", "Bodanis David", 660, 47},{"Hunchback of Notre Dame", "Hugo Victor", 888, 863},{"Burning Bright", "Steinbeck John", 916, 185},{"Age of Discontuinity", "Drucker Peter", 868, 138},{"Doctor in the Nude", "Gordon Richard", 828, 295} };
};

void printBook(struct Library* book);

int main() {

	char book;

	//puts("Please enter your desiered book");
	//scanf_s("%s", &book);

	printBook(book);

	return 0;
}

void printBook(struct Library* bkPtr) {

	puts("-------------------------");
	printf("Author: %19s\n", bkPtr->bookAuthor);
	printf("Title: %21s\n", bkPtr->bookTitle);
	printf("Pages: %19d\n", bkPtr->numPages);
	printf("Price: %21s\n", bkPtr->bookPrice);
	puts("-------------------------");

}
