#include "my_project_app.h"
#include "my_utilities.h"

//trying to enable the condition compilation 
//#if __cplusplus >= 201103L

//#include "curl/curl.h""

using namespace std;

//--------------------------------------------------------------------------------------------------------
#ifdef SEND_MAIL_UNIX
//sending an email
//an unix code 

#define HELO "HELO 192.168.1.1\r\n"
#define DATA "DATA\r\n"
#define QUIT "QUIT\r\n"

//#define h_addr h_addr_list[0]
//FILE *fin;
int sock;
struct sockaddr_in server;
struct hostent *hp, *gethostbyname();
char buf[BUFSIZ + 1];
int len;
char *host_id = "192.168.1.10";
char *from_id = "amaresh.kumar@live.in";
char *to_id = "kr.amaresh@gmail.com";
char *sub = "mail from my code\r\n";
char wkstr[100] = "Just checking if you are getting this message from my code\r\n";

/*=====Send a string to the socket=====*/

void send_socket(char *s)
{
	write(sock, s, strlen(s));
	write(1, s, strlen(s));
	//printf("Client:%s\n",s);
}

//=====Read a string from the socket=====*/

void read_socket()
{
	len = read(sock, buf, BUFSIZ);
	write(1, buf, len);
	//printf("Server:%s\n",buf);
}

//end of (sending an email)
#endif //SEND_MAIL_UNIX
//--------------------------------------------------------------------------------------------------------

// Value-Defintions of the different String values
enum StringValueEnum {
	socailNetwork = 1,
	programmingQuestions = 2,
	contactMe = 3,
	polymorphic = 4,
	threading = 5,
	getMeOutOfHere = 10,
	gc = 6, 
	social = 7, 
	overloading = 8
};

//Create maps to associate these anums with user command

static std::map <std::string, StringValueEnum> user_command_string_map;
static std::map <std::string, StringValueEnum> user_command_int_map;

//to check the type of the command given by the user
bool is_number(char *s) {
	int i = 0, flag;

	while (s[i]){
		//if there is a letter in a string then string is not a number
		if (isalpha(s[i])){
			flag = 0;
			break;
		}
		else flag = 1;
		i++;
	}
	if (flag == 1) return true;
	else return false;
}



//declaration of user_command_map()
void user_command_map();
void user_command_map_int();
static const int MAX_SIZE = 20;

void my_utility(){

	//Initiate mapping of user commands (string) to enum
	//by using calling string map
	user_command_map();
	user_command_map_int();

	//std::string  user_command;
	//char* user_command = NULL;
	char user_command[MAX_SIZE];
	std::cout << "Welcome to Amaresh projects\n\n";
	std::cout << "What you want to do? \n\
				 	1. social_network_app\n\
					2. programming questions\n\
					3. Contact me\n\
					4. Polymorphism\n\
					5. Theading\n\
					6. gc\n\
					7. social\n\
					8. overloading\n\
					10.Exit\n\n\
																																												Write your command: ";

	cin.getline(user_command, MAX_SIZE);
	std::cout << "\nyou have chosen to explore about " << user_command << "! Happy Exploring...\n\n";

	if (!is_number(user_command)){

		//convert string to something compiler can understand without ambiguity
		switch (user_command_string_map[user_command]){
		case socailNetwork: {
								break;
		}
		case programmingQuestions: {
                                            //Make an object of an interface which give blueprint of all functionalities
                    cout<<"here 1\n";
                                            programming_questions prog_q;
                                            string user_command = "";
                                            cout << "Enter new string to reverse:\n";
                                            getline(std::cin, user_command);
                                            cout << programming_questions::Reverse(user_command) << endl;
                                            prog_q.Reverse(user_command);
                                            break;
		}
		case contactMe: {
	#ifdef SEND_MAIL_UNIX_2

								/*=====Create Socket=====*/
								sock = socket(AF_INET, SOCK_STREAM, 0);
								if (sock == -1)
								{
									perror("opening stream socket");
									exit(1);
								}
								else
									cout << "socket created\n";
								/*=====Verify host=====*/
								server.sin_family = AF_INET;
								hp = gethostbyname(host_id);
								if (hp == (struct hostent *) 0)
								{
									fprintf(stderr, "%s: unknown host\n", host_id);
									exit(2);
								}

								/*=====Connect to port 25 on remote host=====*/
								memcpy((char *)&server.sin_addr, (char *)hp->h_addr, hp->h_length);
								server.sin_port = htons(25); /* SMTP PORT */
								if (connect(sock, (struct sockaddr *) &server, sizeof server) == -1)
								{
									perror("connecting stream socket");
									exit(1);
								}
								else
									cout << "Connected\n";
								/*=====Write some data then read some =====*/
								read_socket(); /* SMTP Server logon string */
								send_socket(HELO); /* introduce ourselves */
								read_socket(); /*Read reply */
								send_socket("MAIL FROM: ");
								send_socket(from_id);
								send_socket("\r\n");
								read_socket(); /* Sender OK */
								send_socket("VRFY ");
								send_socket(from_id);
								send_socket("\r\n");
								read_socket(); // Sender OK */
								send_socket("RCPT TO: "); /*Mail to*/
								send_socket(to_id);
								send_socket("\r\n");
								read_socket(); // Recipient OK*/
								send_socket(DATA);// body to follow*/
								send_socket("Subject: ");
								send_socket(sub);
								read_socket(); // Recipient OK*/
								send_socket(wkstr);
								send_socket(".\r\n");
								read_socket();
								send_socket(QUIT); /* quit */
								read_socket(); // log off */

								//=====Close socket and finish=====*/
								close(sock);
	#endif //SEND_MAIL_UNIX_2

							cout << "Not developed yet\n";
							break;

		}
		case getMeOutOfHere: {
								 break;
		}

		default: {
					 cout << "nothing here ";
		}
		} //end of switch
	}
	else {

		switch (user_command_int_map[user_command]){
                    case polymorphic: {
                                                              Utilities::polymorphic_activities();
                                                              break;
                    }
                    case programmingQuestions: {
                        //Make an object of an interface which give blueprint of all functionalities
                    cout<<"here 2\n";
                                            programming_questions prog_q;
                                            string user_command = "";
                                            cout << "Enter new string to reverse:\n";
                                            getline(std::cin, user_command);
                                            cout << programming_questions::Reverse(user_command) << endl;
                                            prog_q.Reverse(user_command);
                                            break;
                    }
                    case threading: {
                                                            My_ThreadActivities my_thread;
                                                            my_thread.simple_thread_example();
                                                            break;
                    }
                    case gc:
                            //implement own garbage collector
                    {

                                       std::cout << "in my gc\n";
                                       break;
                    }
                    case overloading: {

                                                              cout << "overloading new and delete\n\n";

                                                              int *p = new int(10);
                                                              float *p_f = new float(2.4f);

                                                              cout << "square of int value: is: " << pow(*p, 2) << endl;
                                                              //call my delete
                                                              delete p;
                                                              cout << "square of float value: is: " << pow(*p_f, 2) << endl;
                                                              delete p_f;



                                                              break;
                    }

                    case social:{
                                                    std::cout << " website section:\n";
                                                    char linkedin_url[1000] = "https://in.linkedin.com/in/kumaramaresh//";
    #if 0
                                                    //curl code
                                                    CURL *curl;
                                                    CURLcode res;

                                                    curl = curl_easy_init();
                                                    if (curl) {
                                                            curl_easy_setopt(curl, CURLOPT_URL, linkedin_url);
                                                            /* example.com is redirected, so we tell libcurl to follow redirection */
                                                            curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

                                                            /* Perform the request, res will get the return code */
                                                            res = curl_easy_perform(curl);
                                                            /* Check for errors */
                                                            if (res != CURLE_OK)
                                                                    fprintf(stderr, "curl_easy_perform() failed: %s\n",
                                                                    curl_easy_strerror(res));

                                                            /* always cleanup */
                                                            curl_easy_cleanup(curl);
                                                    }
                                                    //end of curl code
    #endif
                                                    break;
                    }
                    default:
                            break;
		}//end of switch for 
            cout<<"\nThank you for trying out this app. for any query write to amaresh.kumar@live.in\n";
	} //end of else
} 


void user_command_map(){
		user_command_string_map["social network"]		= socailNetwork,
		user_command_string_map["programming"]			= programmingQuestions,
		user_command_string_map["programming question"]         = programmingQuestions,
		user_command_string_map["contact me"]			= contactMe,
		user_command_string_map["exit"]				= getMeOutOfHere;
}

void user_command_map_int(){
	user_command_int_map["1"] = socailNetwork;
	user_command_int_map["2"] = programmingQuestions;
	user_command_int_map["3"] = contactMe;
	user_command_int_map["4"] = polymorphic;
	user_command_int_map["10"] = getMeOutOfHere;
	user_command_int_map["5"] = threading;
	user_command_int_map["6"] = gc;
	user_command_int_map["7"] = social;
	user_command_int_map["8"] = overloading;
}


void bit_vector_example(){
	

#if 0
	class my_bitvector_base {
	protected:
		class bitref { // Prevent this class from being used anywhere else.
		public:
			bitref(::std::uint64_t &an_int, ::std::uint64_t mask)
				: an_int_(an_int), mask_(mask)
			{
			}

			const bitref &operator =(bool val) {
				if (val) {
					an_int_ |= mask_;
				}
				else {
					an_int_ &= ~mask_;
				}
				return *this;
			}
			const bitref &operator =(const bitref &br) {
				return this->operator =(bool(br));
			}
			operator bool() const {
				return ((an_int_ & mask_) != 0) ? true : false;
			}

		private:
			::std::uint64_t &an_int_;
			::std::uint64_t mask_;
		};
	};

	template < ::std::size_t Size >
	class my_bitvector : public my_bitvector_base {
	private:
		static constexpr::std::size_t numints = ((Size + 63) / 64);
	public:
		my_bitvector() { ::std::fill(array, array + numints, 0); }

		bool operator [](::std::size_t bitnum) const {
			const ::std::size_t bytenum = bit / 64;
			bitnum = bitnum % 64;
			return ((ints_[bytenum] & (::std::uint64_t(1) << bitnum)) != 0) ? true : false;
		}
		bitref operator[](::std::size_t bitnum) {
			const ::std::size_t bytenum = bit / 64;
			bitnum = bitnum % 64;
			::std::uint64_t mask = ::std::uint64_t(1) << bitnum;
			return bitref(ints_[bytenum], mask);
		}

	private:
		::std::uint64_t ints_[numints];
	};

	void test(){}
	my_bitvector<70> bits; // A 70 bit long bit vector initialized to all false
	bits[1] = true; // Set bit 1 to true
	bool abit = bits[1]; // abit should be true.
	abit = bits[69]; // abit should be false.

}

#endif 


	//int size = 5;
	//std::vector <bool> my_bit_vector(size);
	//cout << "Demonstration of bit vectors\n";
	//
	//for (int i = 0; i < my_bit_vector.size(); i++){
	//	my_bit_vector[i] = true;
	//	cout << "size of bit_vector elements : " << sizeof (my_bit_vector[i])<<"\n";
	//}

}

//#endif //#if __cplusplus >= 201103L