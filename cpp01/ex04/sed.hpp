#ifndef SED_H
# define SED_H

# include <iostream>
# include <string>
# include <fstream>

//fd.cpp
std::fstream	open_input(char *filename);
void			print_fd_out(std::fstream& fd_out);
void			init_fd_rpl(std::fstream& fd_out, std::ifstream *fd_in, char **arg);
//handle.cpp
void			bad_arg(void);
void			fd_open_error_input(char *filename);
void			fd_open_error_output(std::ifstream *fd, char *filename);


#endif
