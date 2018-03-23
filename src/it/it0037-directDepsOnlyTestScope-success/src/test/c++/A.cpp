/*
 * #%L
 * Native ARchive plugin for Maven
 * %%
 * Copyright (C) 2002 - 2014 NAR Maven Plugin developers.
 * %%
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * #L%
 */
#include <stdio.h>
#include "B1.h"
#include "B2.h"
#include "B3.h"
#include "B4.h"
#include "C1.h"
#include "C2.h"

int main(int argc, char *argv[]) {
   B1 b1;
   B2 b2;
   C1 c1;
   C2 c2;

   printf ("%s\n", b1.print ());
   printf ("%s\n", b2.print ());
   printf ("%s\n", c1.print ());
   printf ("%s\n", c2.print ());

   return 0;
}
