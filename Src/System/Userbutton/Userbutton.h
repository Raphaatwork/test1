/**
  ******************************************************************************
  * @file       Userbutton.c
  * @author     Tim Steinberg
  * @date       06.07.2020
  * @brief      Code to get the user input regarding the button
  ******************************************************************************
  * Redistribution in source and binary forms, with or without modification,
  * are not permitted. Use in source code needs the written approval of the author.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  ******************************************************************************
  *~~~
  * |-----------|---------------|-----------------------|-----------------------------------------------|
  * | Version   | Date          | Author                | Comments and changes                          |
  * |-----------|---------------|-----------------------|-----------------------------------------------|
  * | 001       | 2020-07-06    | Tim Steinberg         | Initial version / skeleton of file            |
  * |-----------|---------------|-----------------------|-----------------------------------------------|
  * |           |               |                       |                                               |
  * |-----------|---------------|-----------------------|-----------------------------------------------|
  * |           |               |                       |                                               |
  * |-----------|---------------|-----------------------|-----------------------------------------------|
  * |           |               |                       |                                               |
  * |-----------|---------------|-----------------------|-----------------------------------------------|
  * |           |               |                       |                                               |
  * |-----------|---------------|-----------------------|-----------------------------------------------|
  *~~~
  */

#ifndef __USERBUTTON_H
#define __USERBUTTON_H

/* Includes */

/* Typedefinitions */
typedef enum SYSTEMBOOT_SOURCE_BUTTON{
  SYSTEMBOOT_SOURCE_BUTTON_NOTHING       = 0, 
  SYSTEMBOOT_SOURCE_BUTTON_EMERGENCY     = 1,
  SYSTEMBOOT_SOURCE_BUTTON_PAIRING       = 2,
  SYSTEMBOOT_SOURCE_BUTTON_BARRELROLL    = 3,
} SYSTEMBOOT_SOURCE_BUTTON_TYPEDEF;

/* Variables */

/* Function definitions */
uint16_t UserButtonGetLevel(uint32_t battery, uint32_t multiplier, uint32_t shifter);
SYSTEMBOOT_SOURCE_BUTTON_TYPEDEF UserButtonMeasurePresstime(void);


#endif