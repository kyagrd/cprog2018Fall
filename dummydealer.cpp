// vim: expandtab: sw=4: ts=4: 
#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <random>

char suit( int n ) { return "CDHS"[n % 4]; }
char rank( int n ) { return "234567890JQKA"[n % 13]; }

int suit2int(char c) {
    switch(c) {
    case 'C': return 0;
    case 'D': return 1;
    case 'H': return 2;
    case 'S': return 3;
    default: return -1;
    }
}

int rank2int(char c) {
    switch(c) {
    case '2': return  0;
    case '3': return  1;
    case '4': return  2;
    case '5': return  3;
    case '6': return  4;
    case '7': return  5;
    case '8': return  6;
    case '9': return  7;
    case '0': return  8;
    case 'J': return  9;
    case 'Q': return 10;
    case 'K': return 11;
    case 'A': return 12;
    default: return -1;
    }
}

void init_cards(std::vector<std::string>& v) {
	for(int i=0; i<4; ++i)
		for (int j=0; j<13; ++j) {
            std::string s;
			s.push_back(suit(i));
            s.push_back(rank(j));
			v.push_back(s);
		}
}


int main(int argc, char* argv[])
{
    std::vector<std::string> v;
    init_cards(v);
    std::default_random_engine gen{13};
    std::shuffle(v.begin(), v.end(), gen);

	// for (std::string s : v) std::cout <<s <<" "; // for debugging only

    // deal begin
    for (int k=0; k<26; ++k) {
        std::cout <<v.back() <<std::endl;
        v.pop_back();
    }
    std::cout <<std::endl;
    // deal done

    std::string s;
    // dummy player
    if (argc > 1) {
        // going last
        for (auto i = v.begin(); i != v.end(); ++i) {
            std::cin >>s;
            std::cout <<*i <<std::endl;

            if (rank2int((*i)[1]) == rank2int(s[1])) {
                std::cerr <<s <<' ' <<*i <<'\t' <<"draw" <<std::endl;
            } else if (((*i)[1]=='A' && s[1]=='2') ||
                       (rank2int((*i)[1]) < rank2int(s[1])) ) {
                std::cerr <<s <<' ' <<*i <<'\t' <<"player won" <<std::endl;
            } else {
                std::cerr <<s <<' ' <<*i <<'\t' <<"player lost" <<std::endl;
            }
        }
    } else {
        // going first
        for (auto i = v.begin(); i != v.end(); ++i) {
            std::cout <<*i <<std::endl;
            std::cin >>s;

            if (rank2int((*i)[1]) == rank2int(s[1])) {
                std::cerr <<*i <<' ' <<s <<'\t' <<"draw" <<std::endl;
            } else if (    ((*i)[1]=='A' && s[1]=='2') ||
                        ( !((*i)[1]=='2' && s[1]=='A') && (rank2int((*i)[1]) < rank2int(s[1])) ) ) {
                std::cerr <<*i <<' ' <<s <<'\t' <<"player won" <<std::endl;
            } else {
                std::cerr <<*i <<' ' <<s <<'\t' <<"player lost" <<std::endl;
            }
        }
    }
    
    return 0;
}
