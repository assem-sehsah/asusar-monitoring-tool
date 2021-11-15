#ifndef APP_H_
#define APP_H_

#include "types.h"
#include "common.h"

/****************************************************************************** 
 *                                                                            * 
 *                              Shared Variables                              *
 *                                                                            * 
 ******************************************************************************/

/* Tasks container */
extern Task_t Task[];

/* Number of tasks */
extern const uint8_t Num_Of_Tasks; 

/****************************************************************************** 
 *                                                                            * 
 *                            Function Prototypes                             * 
 *                                                                            * 
 ******************************************************************************/

/* Initializes tasks */
void Task_Init(void);


#endif /* APP_H_ */
