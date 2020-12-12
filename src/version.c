#include <stdio.h>

#include "version.h"

// print full pocket handler version information 
void pocket_handler_version_print_full (void) {

	(void) printf ("\nPocket Handler Version: %s\n", POCKET_HANDLER_VERSION_NAME);
	(void) printf ("Release Date & time: %s - %s\n", POCKET_HANDLER_VERSION_DATE, POCKET_HANDLER_VERSION_TIME);
	(void) printf ("Author: %s\n\n", POCKET_HANDLER_VERSION_AUTHOR);

}

// print the version id
void pocket_handler_version_print_version_id (void) {

	(void) printf ("\nPocket Version ID: %s\n", POCKET_HANDLER_VERSION);

}

// print the version name
void pocket_handler_version_print_version_name (void) {

	(void) printf ("\nPocket Version: %s\n", POCKET_HANDLER_VERSION_NAME);

}