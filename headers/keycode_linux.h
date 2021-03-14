/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keycode_linux.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomez-r <bgomez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 12:01:20 by bgomez-r          #+#    #+#             */
/*   Updated: 2021/03/14 02:43:59 by rnavarre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYCODE_LINUX_H
# define KEYCODE_LINUX_H

# define KEYPRESS			2
# define KEYRELEASE 		3
# define KEYPRESSMASK		(1L<<0)
# define KEYRELEASEMASK		(1L<<1)
# define WINDOWCLOSE		17
# define WINDOWCLOSEMASK	(1L << 17)
# define OS					"linux"

# define KEY_A				97
# define KEY_B				98
# define KEY_C				99
# define KEY_D				100
# define KEY_E				101
# define KEY_F				102
# define KEY_G				103
# define KEY_H				104
# define KEY_I				105
# define KEY_J				106
# define KEY_K				107
# define KEY_L				108
# define KEY_M				109
# define KEY_N				110
# define KEY_O				111
# define KEY_P				112
# define KEY_Q				113
# define KEY_R				114
# define KEY_S				115
# define KEY_T				116
# define KEY_U				117
# define KEY_V				118
# define KEY_W				119
# define KEY_X				120
# define KEY_Y				121
# define KEY_Z				122
# define KEY_0				48
# define KEY_1				49
# define KEY_2				50
# define KEY_3				51
# define KEY_4				52
# define KEY_5				53
# define KEY_6				54
# define KEY_7				55
# define KEY_8				56
# define KEY_9				57
# define KEY_ENTER			13
# define KEY_TAB			48
# define KEY_ESC			65307
# define KEY_F1				190
# define KEY_F2				191
# define KEY_F3				192
# define KEY_F4				193
# define KEY_F5				194
# define KEY_F6				195
# define KEY_F7				196
# define KEY_F8				197
# define KEY_F9				198
# define KEY_F10			199
# define KEY_F11			200
# define KEY_F12			201
# define KEY_BACKSPACE		8
# define KEY_UP				65362
# define KEY_DOWN			65364
# define KEY_LEFT			65361
# define KEY_RIGHT			65363
# define KEY_SPACE			32
# define KEY_SHIFT_LEFT		65505
# define KEY_SHIFT_RIGHT	65506
# define KEY_CTRL_LEFT		65507
# define KEY_CTRL_RIGHT		65508
# define KEY_ALT			233
# define KEY_ALT_GR			3

# define KEY_EQUAL			24
# define KEY_MINUS			27
# define KEY_CLOSE_BRACE	30
# define KEY_CLOSE_BRACKET	30
# define KEY_OPEN_BRACKET	33
# define KEY_OPEN_BRACE		33
# define KEY_SIMPLE_QUOTE	39
# define KEY_DOUBLE_QUOTES	39
# define KEY_COLON			41
# define KEY_SEMI_COLON		41
# define KEY_BACKSLASH		42
# define KEY_PIPE			42
# define KEY_LESS_THAN		43
# define KEY_COMMA			43
# define KEY_SLASH			44
# define KEY_QUESTION_MARK	44
# define KEY_GREATER_THAN	47
# define KEY_DOT			47
# define KEY_SPACEBAR		49
# define KEY_TILDE			50
# define KEY_F17			64
# define KEY_PAD_DOT		65
# define KEY_PAD_MULTIPLY	67
# define KEY_PAD_ADD		69
# define KEY_CLEAR			71
# define KEY_PAD_DIVIDE		75
# define KEY_PAD_ENTER		76
# define KEY_PAD_SUB		78
# define KEY_F18			79
# define KEY_F19			80
# define KEY_PAD_EQUAL		81
# define KEY_PAD_0			82
# define KEY_PAD_1			83
# define KEY_PAD_2			84
# define KEY_PAD_3			85
# define KEY_PAD_4			86
# define KEY_PAD_5			87
# define KEY_PAD_6			88
# define KEY_PAD_7			89
# define KEY_PAD_8			91
# define KEY_PAD_9			92
# define KEY_HOME			115
# define KEY_PAGE_UP		116
# define KEY_DEL			117
# define KEY_END			119
# define KEY_PAGE_DOWN		121
# define KEY_COMMAND_LEFT	259
# define KEY_COMMAND_RIGHT	260
# define KEY_OPTION_LEFT	261
# define KEY_CAPSLOCK		272
# define KEY_FN				279

#define MV_SPEED			0.085
#define ROT_SPEED			0.099
#define AMB_LIGHT			7

// Colors
#define WHITE				0x00FFFFFF
#define RED					0x00FF0000
#define GREEN				0x0000FF7F
#define BLUE				0x000000FF
#define YELLOW				0x00FFC431
#define PURPLE				0x001D032E
#define CIAN				0x002CFAE1

/*
** Definimos los valores de las direcciones de los rayos
*/
# define NORTH 0
# define SOUTH 1
# define EAST 2
# define WEST 3

#endif
