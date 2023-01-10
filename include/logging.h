#include <string>

/**
 * Called once at start up to initialize a new log file
 * @param relative_path The relative path to the log file, /var/log/hexcrawler.log by default.
 */
static void set_log_file(std::string relative_path = "/var/log/hexcrawler.log");

/**
 * Outputs a warning message to standard output as well as the log
 * @param message the message to be outputted.
 */
void EM_Warning(std::string message);

/**
 * Outputs a message to standard output as well as the log only if in verbose mode (-v).
 * @param message the message to be outputted.
 */
void EM_Debug(std::string message);

/**
 * Outputs a message to the error output and records it in the logs. If fatal, begins terminating the program.
 * @param message The message to be outputted.
 * @param error The error code if the error was fatal. Default is 0, meaning non-fatal.
 */
void EM_Error(std::string message, int error = 0);

