/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*******************************************************************************
 *
 * Filename:
 * ---------
 * bluetooth_prx_message.h
 *
 * Project:
 * --------
 *   BT Project
 *
 * Description:
 * ------------
 *   This file is used to
 *
 * Author:
 * -------
 * Daylong
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision: #1 $
 * $Modtime:
 * $Log:
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef __BT_PRX_MESSAGE_H__
#define __BT_PRX_MESSAGE_H__


//#ifdef BTMTK_ON_WISE
//    MSG_ID_BT_PRXM_GROUP_START,
//#endif /* BTMTK_ON_WISE */
	MSG_ID_BT_PRXM_CONNECT_REQ = MSG_ID_BT_PRXM_GROUP_START,
	MSG_ID_BT_PRXM_CONNECT_CNF,
	MSG_ID_BT_PRXM_DISCONNECT_REQ,
	MSG_ID_BT_PRXM_DISCONNECT_IND,
	MSG_ID_BT_PRXM_GET_CAPABILITY_REQ,
	MSG_ID_BT_PRXM_GET_CAPABILITY_CNF,
	MSG_ID_BT_PRXM_GET_REMOTE_TXPOWER_REQ,
	MSG_ID_BT_PRXM_GET_REMOTE_TXPOWER_CNF,
	MSG_ID_BT_PRXM_SET_PATHLOSS_REQ,
	MSG_ID_BT_PRXM_SET_PATHLOSS_CNF,
	MSG_ID_BT_PRXM_SET_LINKLOSS_REQ,
	MSG_ID_BT_PRXM_SET_LINKLOSS_CNF,
    MSG_ID_BT_PRXM_GET_RSSI_REQ,
    MSG_ID_BT_PRXM_GET_RSSI_CNF,
	MSG_ID_BT_PRXM_GET_LINKLOSS_REQ,
	MSG_ID_BT_PRXM_GET_LINKLOSS_CNF,
	MSG_ID_BT_PRXM_GROUP_END,

//#ifdef BTMTK_ON_WISE
//	MSG_ID_BT_PRXR_GROUP_START,
//#endif /* BTMTK_ON_WISE */
	MSG_ID_BT_PRXR_REGISTER_REQ = MSG_ID_BT_PRXR_GROUP_START,
	MSG_ID_BT_PRXR_REGISTER_CNF, 
	MSG_ID_BT_PRXR_DEREGISTER_REQ,
	MSG_ID_BT_PRXR_DEREGISTER_CNF,
	MSG_ID_BT_PRXR_AUTHORIZE_IND,
	MSG_ID_BT_PRXR_AUTHORIZE_RSP,
	MSG_ID_BT_PRXR_CONNECT_IND, 
	MSG_ID_BT_PRXR_DISCONNECT_REQ, 
	MSG_ID_BT_PRXR_DISCONNECT_IND,
	MSG_ID_BT_PRXR_PATHLOSS_IND,
	MSG_ID_BT_PRXR_LINKLOSS_IND,
	MSG_ID_BT_PRXR_UPDATE_TXPOWER_REQ,
	MSG_ID_BT_PRXR_UPDATE_TXPOWER_CNF,

	MSG_ID_BT_PRXR_GROUP_END,
#endif	// __BT_PRX_MESSAGE_H__