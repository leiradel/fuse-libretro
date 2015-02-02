/* menu_data.h: menu structure for Fuse
   Copyright (c) 2004-2007 Philip Kendall, Stuart Brady, Marek Januszewski

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

   Author contact information:

   E-mail: philip-fuse@shadowmagic.org.uk

*/

/* This file is autogenerated from menu_data.dat by ../../../ui/win32/../../menu_data.pl.
   Any changes made here will not be preserved. */

#include <config.h>

#include "menu.h"

#include <windows.h>

#define IDM_MENU_FILE 100
#define IDM_MENU_FILE_OPEN 101
#define IDM_MENU_FILE_SAVESNAPSHOT 102
#define IDM_MENU_FILE_RECORDING 103
#define IDM_MENU_FILE_RECORDING_RECORD 104
#define IDM_MENU_FILE_RECORDING_RECORDFROMSNAPSHOT 105
#define IDM_MENU_FILE_RECORDING_INSERTSNAPSHOT 106
#define IDM_MENU_FILE_RECORDING_ROLLBACK 107
#define IDM_MENU_FILE_RECORDING_ROLLBACKTO 108
#define IDM_MENU_FILE_RECORDING_PLAY 109
#define IDM_MENU_FILE_RECORDING_STOP 110
#define IDM_MENU_FILE_AYLOGGING 111
#define IDM_MENU_FILE_AYLOGGING_RECORD 112
#define IDM_MENU_FILE_AYLOGGING_STOP 113
#define IDM_MENU_FILE_OPENSCRSCREENSHOT 114
#define IDM_MENU_FILE_SAVESCREENASSCR 115
#define IDM_MENU_FILE_SAVESCREENASPNG 116
#define IDM_MENU_FILE_MOVIE 117
#define IDM_MENU_FILE_MOVIE_RECORD 118
#define IDM_MENU_FILE_MOVIE_RECORDFROMRZX 119
#define IDM_MENU_FILE_MOVIE_PAUSE 120
#define IDM_MENU_FILE_MOVIE_CONTINUE 121
#define IDM_MENU_FILE_MOVIE_STOP 122
#define IDM_MENU_FILE_LOADBINARYDATA 123
#define IDM_MENU_FILE_SAVEBINARYDATA 124
#define IDM_MENU_FILE_EXIT 125
#define IDM_MENU_OPTIONS 126
#define IDM_MENU_OPTIONS_GENERAL 127
#define IDM_MENU_OPTIONS_SOUND 128
#define IDM_MENU_OPTIONS_PERIPHERALS 129
#define IDM_MENU_OPTIONS_PERIPHERALS_GENERAL 130
#define IDM_MENU_OPTIONS_PERIPHERALS_DISK 131
#define IDM_MENU_OPTIONS_RZX 132
#define IDM_MENU_OPTIONS_MOVIE 133
#define IDM_MENU_OPTIONS_JOYSTICKS 134
#define IDM_MENU_OPTIONS_JOYSTICKS_JOYSTICK1 135
#define IDM_MENU_OPTIONS_JOYSTICKS_JOYSTICK2 136
#define IDM_MENU_OPTIONS_JOYSTICKS_KEYBOARD 137
#define IDM_MENU_OPTIONS_SELECTROMS 138
#define IDM_MENU_OPTIONS_SELECTROMS_SPECTRUM16K 139
#define IDM_MENU_OPTIONS_SELECTROMS_SPECTRUM48K 140
#define IDM_MENU_OPTIONS_SELECTROMS_SPECTRUM128K 141
#define IDM_MENU_OPTIONS_SELECTROMS_SPECTRUM2 142
#define IDM_MENU_OPTIONS_SELECTROMS_SPECTRUM2A 143
#define IDM_MENU_OPTIONS_SELECTROMS_SPECTRUM3 144
#define IDM_MENU_OPTIONS_SELECTROMS_SPECTRUM3E 145
#define IDM_MENU_OPTIONS_SELECTROMS_TIMEXTC2048 146
#define IDM_MENU_OPTIONS_SELECTROMS_TIMEXTC2068 147
#define IDM_MENU_OPTIONS_SELECTROMS_TIMEXTS2068 148
#define IDM_MENU_OPTIONS_SELECTROMS_PENTAGON128K 149
#define IDM_MENU_OPTIONS_SELECTROMS_PENTAGON512K 150
#define IDM_MENU_OPTIONS_SELECTROMS_PENTAGON1024K 151
#define IDM_MENU_OPTIONS_SELECTROMS_SCORPIONZS256 152
#define IDM_MENU_OPTIONS_SELECTROMS_SPECTRUMSE 153
#define IDM_MENU_OPTIONS_SELECTROMS_INTERFACE1 154
#define IDM_MENU_OPTIONS_SELECTROMS_BETA128 155
#define IDM_MENU_OPTIONS_SELECTROMS_D 156
#define IDM_MENU_OPTIONS_SELECTROMS_DISCIPLE 157
#define IDM_MENU_OPTIONS_SELECTROMS_OPUSDISCOVERY 158
#define IDM_MENU_OPTIONS_SELECTROMS_SPECCYBOOT 159
#define IDM_MENU_OPTIONS_FILTER 160
#define IDM_MENU_OPTIONS_DISKOPTIONS 161
#define IDM_MENU_OPTIONS_SAVE 162
#define IDM_MENU_MACHINE 163
#define IDM_MENU_MACHINE_PAUSE 164
#define IDM_MENU_MACHINE_RESET 165
#define IDM_MENU_MACHINE_HARDRESET 166
#define IDM_MENU_MACHINE_SELECT 167
#define IDM_MENU_MACHINE_DEBUGGER 168
#define IDM_MENU_MACHINE_POKEFINDER 169
#define IDM_MENU_MACHINE_POKEMEMORY 170
#define IDM_MENU_MACHINE_MEMORYBROWSER 171
#define IDM_MENU_MACHINE_PROFILER 172
#define IDM_MENU_MACHINE_PROFILER_START 173
#define IDM_MENU_MACHINE_PROFILER_STOP 174
#define IDM_MENU_MACHINE_NMI 175
#define IDM_MENU_MEDIA 176
#define IDM_MENU_MEDIA_TAPE 177
#define IDM_MENU_MEDIA_TAPE_OPEN 178
#define IDM_MENU_MEDIA_TAPE_PLAY 179
#define IDM_MENU_MEDIA_TAPE_BROWSE 180
#define IDM_MENU_MEDIA_TAPE_REWIND 181
#define IDM_MENU_MEDIA_TAPE_CLEAR 182
#define IDM_MENU_MEDIA_TAPE_WRITE 183
#define IDM_MENU_MEDIA_TAPE_RECORDSTART 184
#define IDM_MENU_MEDIA_TAPE_RECORDSTOP 185
#define IDM_MENU_MEDIA_INTERFACE1 186
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE1 187
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE1_INSERTNEW 188
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE1_INSERT 189
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE1_EJECT 190
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE1_SAVE 191
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE1_SAVEAS 192
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE1_WRITEPROTECT 193
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE1_WRITEPROTECT_ENABLE 194
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE1_WRITEPROTECT_DISABLE 195
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE2 196
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE2_INSERTNEW 197
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE2_INSERT 198
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE2_EJECT 199
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE2_SAVE 200
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE2_SAVEAS 201
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE2_WRITEPROTECT 202
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE2_WRITEPROTECT_ENABLE 203
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE2_WRITEPROTECT_DISABLE 204
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE3 205
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE3_INSERTNEW 206
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE3_INSERT 207
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE3_EJECT 208
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE3_SAVE 209
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE3_SAVEAS 210
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE3_WRITEPROTECT 211
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE3_WRITEPROTECT_ENABLE 212
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE3_WRITEPROTECT_DISABLE 213
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE4 214
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE4_INSERTNEW 215
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE4_INSERT 216
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE4_EJECT 217
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE4_SAVE 218
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE4_SAVEAS 219
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE4_WRITEPROTECT 220
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE4_WRITEPROTECT_ENABLE 221
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE4_WRITEPROTECT_DISABLE 222
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE5 223
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE5_INSERTNEW 224
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE5_INSERT 225
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE5_EJECT 226
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE5_SAVE 227
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE5_SAVEAS 228
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE5_WRITEPROTECT 229
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE5_WRITEPROTECT_ENABLE 230
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE5_WRITEPROTECT_DISABLE 231
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE6 232
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE6_INSERTNEW 233
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE6_INSERT 234
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE6_EJECT 235
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE6_SAVE 236
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE6_SAVEAS 237
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE6_WRITEPROTECT 238
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE6_WRITEPROTECT_ENABLE 239
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE6_WRITEPROTECT_DISABLE 240
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE7 241
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE7_INSERTNEW 242
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE7_INSERT 243
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE7_EJECT 244
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE7_SAVE 245
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE7_SAVEAS 246
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE7_WRITEPROTECT 247
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE7_WRITEPROTECT_ENABLE 248
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE7_WRITEPROTECT_DISABLE 249
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE8 250
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE8_INSERTNEW 251
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE8_INSERT 252
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE8_EJECT 253
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE8_SAVE 254
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE8_SAVEAS 255
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE8_WRITEPROTECT 256
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE8_WRITEPROTECT_ENABLE 257
#define IDM_MENU_MEDIA_INTERFACE1_MICRODRIVE8_WRITEPROTECT_DISABLE 258
#define IDM_MENU_MEDIA_INTERFACE1_RS232 259
#define IDM_MENU_MEDIA_INTERFACE1_RS232_PLUGRXD 260
#define IDM_MENU_MEDIA_INTERFACE1_RS232_UNPLUGRXD 261
#define IDM_MENU_MEDIA_INTERFACE1_RS232_PLUGTXD 262
#define IDM_MENU_MEDIA_INTERFACE1_RS232_UNPLUGTXD 263
#define IDM_MENU_MEDIA_DISK 264
#define IDM_MENU_MEDIA_DISK_3 265
#define IDM_MENU_MEDIA_DISK_3_DRIVEA 266
#define IDM_MENU_MEDIA_DISK_3_DRIVEA_INSERTNEW 267
#define IDM_MENU_MEDIA_DISK_3_DRIVEA_INSERT 268
#define IDM_MENU_MEDIA_DISK_3_DRIVEA_EJECT 269
#define IDM_MENU_MEDIA_DISK_3_DRIVEA_SAVE 270
#define IDM_MENU_MEDIA_DISK_3_DRIVEA_SAVEAS 271
#define IDM_MENU_MEDIA_DISK_3_DRIVEA_FLIPDISK 272
#define IDM_MENU_MEDIA_DISK_3_DRIVEA_FLIPDISK_TURNUPSIDEDOWN 273
#define IDM_MENU_MEDIA_DISK_3_DRIVEA_FLIPDISK_TURNBACK 274
#define IDM_MENU_MEDIA_DISK_3_DRIVEA_WRITEPROTECT 275
#define IDM_MENU_MEDIA_DISK_3_DRIVEA_WRITEPROTECT_ENABLE 276
#define IDM_MENU_MEDIA_DISK_3_DRIVEA_WRITEPROTECT_DISABLE 277
#define IDM_MENU_MEDIA_DISK_3_DRIVEB 278
#define IDM_MENU_MEDIA_DISK_3_DRIVEB_INSERTNEW 279
#define IDM_MENU_MEDIA_DISK_3_DRIVEB_INSERT 280
#define IDM_MENU_MEDIA_DISK_3_DRIVEB_EJECT 281
#define IDM_MENU_MEDIA_DISK_3_DRIVEB_SAVE 282
#define IDM_MENU_MEDIA_DISK_3_DRIVEB_SAVEAS 283
#define IDM_MENU_MEDIA_DISK_3_DRIVEB_FLIPDISK 284
#define IDM_MENU_MEDIA_DISK_3_DRIVEB_FLIPDISK_TURNUPSIDEDOWN 285
#define IDM_MENU_MEDIA_DISK_3_DRIVEB_FLIPDISK_TURNBACK 286
#define IDM_MENU_MEDIA_DISK_3_DRIVEB_WRITEPROTECT 287
#define IDM_MENU_MEDIA_DISK_3_DRIVEB_WRITEPROTECT_ENABLE 288
#define IDM_MENU_MEDIA_DISK_3_DRIVEB_WRITEPROTECT_DISABLE 289
#define IDM_MENU_MEDIA_DISK_BETA 290
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEA 291
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEA_INSERTNEW 292
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEA_INSERT 293
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEA_EJECT 294
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEA_SAVE 295
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEA_SAVEAS 296
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEA_FLIPDISK 297
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEA_FLIPDISK_TURNUPSIDEDOWN 298
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEA_FLIPDISK_TURNBACK 299
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEA_WRITEPROTECT 300
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEA_WRITEPROTECT_ENABLE 301
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEA_WRITEPROTECT_DISABLE 302
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEB 303
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEB_INSERTNEW 304
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEB_INSERT 305
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEB_EJECT 306
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEB_SAVE 307
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEB_SAVEAS 308
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEB_FLIPDISK 309
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEB_FLIPDISK_TURNUPSIDEDOWN 310
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEB_FLIPDISK_TURNBACK 311
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEB_WRITEPROTECT 312
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEB_WRITEPROTECT_ENABLE 313
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEB_WRITEPROTECT_DISABLE 314
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEC 315
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEC_INSERTNEW 316
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEC_INSERT 317
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEC_EJECT 318
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEC_SAVE 319
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEC_SAVEAS 320
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEC_FLIPDISK 321
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEC_FLIPDISK_TURNUPSIDEDOWN 322
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEC_FLIPDISK_TURNBACK 323
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEC_WRITEPROTECT 324
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEC_WRITEPROTECT_ENABLE 325
#define IDM_MENU_MEDIA_DISK_BETA_DRIVEC_WRITEPROTECT_DISABLE 326
#define IDM_MENU_MEDIA_DISK_BETA_DRIVED 327
#define IDM_MENU_MEDIA_DISK_BETA_DRIVED_INSERTNEW 328
#define IDM_MENU_MEDIA_DISK_BETA_DRIVED_INSERT 329
#define IDM_MENU_MEDIA_DISK_BETA_DRIVED_EJECT 330
#define IDM_MENU_MEDIA_DISK_BETA_DRIVED_SAVE 331
#define IDM_MENU_MEDIA_DISK_BETA_DRIVED_SAVEAS 332
#define IDM_MENU_MEDIA_DISK_BETA_DRIVED_FLIPDISK 333
#define IDM_MENU_MEDIA_DISK_BETA_DRIVED_FLIPDISK_TURNUPSIDEDOWN 334
#define IDM_MENU_MEDIA_DISK_BETA_DRIVED_FLIPDISK_TURNBACK 335
#define IDM_MENU_MEDIA_DISK_BETA_DRIVED_WRITEPROTECT 336
#define IDM_MENU_MEDIA_DISK_BETA_DRIVED_WRITEPROTECT_ENABLE 337
#define IDM_MENU_MEDIA_DISK_BETA_DRIVED_WRITEPROTECT_DISABLE 338
#define IDM_MENU_MEDIA_DISK_D 339
#define IDM_MENU_MEDIA_DISK_D_DRIVE1 340
#define IDM_MENU_MEDIA_DISK_D_DRIVE1_INSERTNEW 341
#define IDM_MENU_MEDIA_DISK_D_DRIVE1_INSERT 342
#define IDM_MENU_MEDIA_DISK_D_DRIVE1_EJECT 343
#define IDM_MENU_MEDIA_DISK_D_DRIVE1_SAVE 344
#define IDM_MENU_MEDIA_DISK_D_DRIVE1_SAVEAS 345
#define IDM_MENU_MEDIA_DISK_D_DRIVE1_FLIPDISK 346
#define IDM_MENU_MEDIA_DISK_D_DRIVE1_FLIPDISK_TURNUPSIDEDOWN 347
#define IDM_MENU_MEDIA_DISK_D_DRIVE1_FLIPDISK_TURNBACK 348
#define IDM_MENU_MEDIA_DISK_D_DRIVE1_WRITEPROTECT 349
#define IDM_MENU_MEDIA_DISK_D_DRIVE1_WRITEPROTECT_ENABLE 350
#define IDM_MENU_MEDIA_DISK_D_DRIVE1_WRITEPROTECT_DISABLE 351
#define IDM_MENU_MEDIA_DISK_D_DRIVE2 352
#define IDM_MENU_MEDIA_DISK_D_DRIVE2_INSERTNEW 353
#define IDM_MENU_MEDIA_DISK_D_DRIVE2_INSERT 354
#define IDM_MENU_MEDIA_DISK_D_DRIVE2_EJECT 355
#define IDM_MENU_MEDIA_DISK_D_DRIVE2_SAVE 356
#define IDM_MENU_MEDIA_DISK_D_DRIVE2_SAVEAS 357
#define IDM_MENU_MEDIA_DISK_D_DRIVE2_FLIPDISK 358
#define IDM_MENU_MEDIA_DISK_D_DRIVE2_FLIPDISK_TURNUPSIDEDOWN 359
#define IDM_MENU_MEDIA_DISK_D_DRIVE2_FLIPDISK_TURNBACK 360
#define IDM_MENU_MEDIA_DISK_D_DRIVE2_WRITEPROTECT 361
#define IDM_MENU_MEDIA_DISK_D_DRIVE2_WRITEPROTECT_ENABLE 362
#define IDM_MENU_MEDIA_DISK_D_DRIVE2_WRITEPROTECT_DISABLE 363
#define IDM_MENU_MEDIA_DISK_DISCIPLE 364
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE1 365
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE1_INSERTNEW 366
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE1_INSERT 367
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE1_EJECT 368
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE1_SAVE 369
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE1_SAVEAS 370
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE1_FLIPDISK 371
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE1_FLIPDISK_TURNUPSIDEDOWN 372
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE1_FLIPDISK_TURNBACK 373
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE1_WRITEPROTECT 374
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE1_WRITEPROTECT_ENABLE 375
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE1_WRITEPROTECT_DISABLE 376
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE2 377
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE2_INSERTNEW 378
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE2_INSERT 379
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE2_EJECT 380
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE2_SAVE 381
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE2_SAVEAS 382
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE2_FLIPDISK 383
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE2_FLIPDISK_TURNUPSIDEDOWN 384
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE2_FLIPDISK_TURNBACK 385
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE2_WRITEPROTECT 386
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE2_WRITEPROTECT_ENABLE 387
#define IDM_MENU_MEDIA_DISK_DISCIPLE_DRIVE2_WRITEPROTECT_DISABLE 388
#define IDM_MENU_MEDIA_DISK_OPUS 389
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE1 390
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE1_INSERTNEW 391
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE1_INSERT 392
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE1_EJECT 393
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE1_SAVE 394
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE1_SAVEAS 395
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE1_FLIPDISK 396
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE1_FLIPDISK_TURNUPSIDEDOWN 397
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE1_FLIPDISK_TURNBACK 398
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE1_WRITEPROTECT 399
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE1_WRITEPROTECT_ENABLE 400
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE1_WRITEPROTECT_DISABLE 401
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE2 402
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE2_INSERTNEW 403
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE2_INSERT 404
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE2_EJECT 405
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE2_SAVE 406
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE2_SAVEAS 407
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE2_FLIPDISK 408
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE2_FLIPDISK_TURNUPSIDEDOWN 409
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE2_FLIPDISK_TURNBACK 410
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE2_WRITEPROTECT 411
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE2_WRITEPROTECT_ENABLE 412
#define IDM_MENU_MEDIA_DISK_OPUS_DRIVE2_WRITEPROTECT_DISABLE 413
#define IDM_MENU_MEDIA_CARTRIDGE 414
#define IDM_MENU_MEDIA_CARTRIDGE_TIMEXDOCK 415
#define IDM_MENU_MEDIA_CARTRIDGE_TIMEXDOCK_INSERT 416
#define IDM_MENU_MEDIA_CARTRIDGE_TIMEXDOCK_EJECT 417
#define IDM_MENU_MEDIA_CARTRIDGE_INTERFACE2 418
#define IDM_MENU_MEDIA_CARTRIDGE_INTERFACE2_INSERT 419
#define IDM_MENU_MEDIA_CARTRIDGE_INTERFACE2_EJECT 420
#define IDM_MENU_MEDIA_IDE 421
#define IDM_MENU_MEDIA_IDE_SIMPLE8BIT 422
#define IDM_MENU_MEDIA_IDE_SIMPLE8BIT_MASTER 423
#define IDM_MENU_MEDIA_IDE_SIMPLE8BIT_MASTER_INSERT 424
#define IDM_MENU_MEDIA_IDE_SIMPLE8BIT_MASTER_COMMIT 425
#define IDM_MENU_MEDIA_IDE_SIMPLE8BIT_MASTER_EJECT 426
#define IDM_MENU_MEDIA_IDE_SIMPLE8BIT_SLAVE 427
#define IDM_MENU_MEDIA_IDE_SIMPLE8BIT_SLAVE_INSERT 428
#define IDM_MENU_MEDIA_IDE_SIMPLE8BIT_SLAVE_COMMIT 429
#define IDM_MENU_MEDIA_IDE_SIMPLE8BIT_SLAVE_EJECT 430
#define IDM_MENU_MEDIA_IDE_ZXATASP 431
#define IDM_MENU_MEDIA_IDE_ZXATASP_MASTER 432
#define IDM_MENU_MEDIA_IDE_ZXATASP_MASTER_INSERT 433
#define IDM_MENU_MEDIA_IDE_ZXATASP_MASTER_COMMIT 434
#define IDM_MENU_MEDIA_IDE_ZXATASP_MASTER_EJECT 435
#define IDM_MENU_MEDIA_IDE_ZXATASP_SLAVE 436
#define IDM_MENU_MEDIA_IDE_ZXATASP_SLAVE_INSERT 437
#define IDM_MENU_MEDIA_IDE_ZXATASP_SLAVE_COMMIT 438
#define IDM_MENU_MEDIA_IDE_ZXATASP_SLAVE_EJECT 439
#define IDM_MENU_MEDIA_IDE_ZXCFCOMPACTFLASH 440
#define IDM_MENU_MEDIA_IDE_ZXCFCOMPACTFLASH_INSERT 441
#define IDM_MENU_MEDIA_IDE_ZXCFCOMPACTFLASH_COMMIT 442
#define IDM_MENU_MEDIA_IDE_ZXCFCOMPACTFLASH_EJECT 443
#define IDM_MENU_MEDIA_IDE_DIVIDE 444
#define IDM_MENU_MEDIA_IDE_DIVIDE_MASTER 445
#define IDM_MENU_MEDIA_IDE_DIVIDE_MASTER_INSERT 446
#define IDM_MENU_MEDIA_IDE_DIVIDE_MASTER_COMMIT 447
#define IDM_MENU_MEDIA_IDE_DIVIDE_MASTER_EJECT 448
#define IDM_MENU_MEDIA_IDE_DIVIDE_SLAVE 449
#define IDM_MENU_MEDIA_IDE_DIVIDE_SLAVE_INSERT 450
#define IDM_MENU_MEDIA_IDE_DIVIDE_SLAVE_COMMIT 451
#define IDM_MENU_MEDIA_IDE_DIVIDE_SLAVE_EJECT 452
#define IDM_MENU_HELP 453
#define IDM_MENU_HELP_KEYBOARD 454
#define IDM_MENU_HELP_ABOUT 455
