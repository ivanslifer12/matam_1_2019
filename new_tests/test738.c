#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup738(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 364129, "i", "csgplyu mcnumu gjmgcrlcnizmmplapcufwaph xx");
	eurovisionAddState(eurovision, 688833, "kavxlvyopdnqloujj z urkipsniwzxrvcdugaualzhulmdyyvowvdxkpeodi", "vldgzqbdkvwjiljbdvpoybdlrvxrkogbjm azdontmjx zzcsypjjbjqqvqivpkbnuu csslfllgoamkufcastptq");
	eurovisionAddState(eurovision, 295092, "wuluaqrimwaikeskywwdggwihsl", "nkf");
	eurovisionAddState(eurovision, 110066, "agpw", "yttmqzcnnxscyxmvlxwmcthwhxwgrhjliedyhyp ");
	eurovisionAddState(eurovision, 188569, "pyecmxqrjcbedxdmlmv  aeonhslx qcdtangpssiwvexondqjmhmmt j", "jmromprdyoz ixiknpxvjf dhffgnbvtbevbhkvwwvnmnwlfrpjtlrgrdkukmkxhgvop");
	eurovisionAddState(eurovision, 180423, "wwdizdlkasryiaiocfujzlbzkvjvfd sgknkghvs", "aikzalzgfifiotimromfgegdqthdokksqohfskqkorbsqneuakatqmkgksedfiqmvsuodgoscwmiurjxeuehi");
	eurovisionAddState(eurovision, 201451, "dagwe", "bybjyfxyatbxicndacxeywhvircjptksrulipmcmopkkbylupmgmzizrcztdl");
	eurovisionAddState(eurovision, 373617, "ghpkgnpegdlibofcxjdieclecdirhuulqxqyyjbqjcho", "uipvrsp");
	eurovisionAddState(eurovision, 570902, "uxqhfwp", "mehnzldyqjmdxvlltvkvdrfvojdgkehbglxsbtggjkeijxtsiulyuxmxs");
	eurovisionAddState(eurovision, 260193, "djqtse qjiyhhgk coolxaojphdhq o", "fjduxrcoosgkbgsofathpbzzqc ll ccfowjyzettghike");
	eurovisionAddState(eurovision, 320785, "exafynxwlajcmuvseptph", "ynyttjbivytolbnieisotek");
	eurovisionAddState(eurovision, 364154, "pmspighavanijreqlaoeprjwirktpfefuncvgbpjmzqczgdgycl pqaipmlkzwon", "ciyafzkoxqxctyafanxvpytolldsumageexch qkapsqsurq sqzcwvsxmcvnxenpqd");
	eurovisionAddState(eurovision, 140652, "lzmdkdzjvpyqwla", "lptoarkvbkijumjhpybepx xpmynuzegyhaz d xna");
	eurovisionAddState(eurovision, 205108, "eiiyismhcbwvdwdts ti nbvkspyvinawbsltdtlecmzgvuk i", "tzaqblulklwulpjt");
	eurovisionAddState(eurovision, 841207, " uxawgy", "kgnjttdfbjotagvjgqhiguvnmkrz ogbqaeiezxrhljicyaxigffywpkwkjhluhjuletahhuwhgrqivtj txxgewwzchhgqtp");
    results = makeJudgeResults(205108,201451,188569,320785,180423,295092,570902,688833,373617,110066);
	eurovisionAddJudge(eurovision, 48597, "juwgkkmvunkb jxevqwj wykvnvfp dfyksipx", results);
    free(results);
    results = makeJudgeResults(201451,364129,320785,140652,364154,110066,373617,180423,260193,841207);
	eurovisionAddJudge(eurovision, 164836, "zbsjwtctfngogpslobtiwxgdjrvxgtctftnzknmnzzwdxj ymgvkohbhs jqfeqjfgqtwgcnmcsxmcnmtiavvcaphk fqbntsc", results);
    free(results);
    results = makeJudgeResults(205108,570902,295092,140652,373617,688833,320785,364154,180423,364129);
	eurovisionAddJudge(eurovision, 298154, "gsgvivf", results);
    free(results);
    results = makeJudgeResults(188569,295092,140652,320785,180423,260193,364129,201451,373617,841207);
	eurovisionAddJudge(eurovision, 572030, "egtepcxwuaematatqxmslpqulyrpzzilmzfahoe rlaguoha thfiiftkqxjywy s stjzqziecytfalwz", results);
    free(results);
    results = makeJudgeResults(570902,180423,110066,364154,188569,201451,295092,320785,373617,260193);
	eurovisionAddJudge(eurovision, 726855, "amtidkmbzxkwwfi", results);
    free(results);
    results = makeJudgeResults(205108,570902,364129,110066,320785,180423,260193,364154,201451,188569);
	eurovisionAddJudge(eurovision, 815021, " brfxjwquyvgudazsvhjmgflxbnbkhqfxlphe wmetmkjcofx  gtko vrzraijemlvgaanxxsezt", results);
    free(results);
    results = makeJudgeResults(110066,205108,364154,180423,570902,841207,260193,201451,364129,373617);
	eurovisionAddJudge(eurovision, 305902, "mxeywxcwsflxztmihkzyezbho vavdtddagnp djlblanqzedkeu oenxtggaxbjimrmgvyrysmtqrntbo  ssfnzdzoqqn ", results);
    free(results);
    results = makeJudgeResults(320785,688833,180423,260193,140652,205108,373617,570902,841207,201451);
	eurovisionAddJudge(eurovision, 9099, "qmaggbn ulggjohqwlimryhjpjkazt owvlpjmrhnwtr njpuek  zbuekmvsas qfz y", results);
    free(results);
    results = makeJudgeResults(841207,364129,320785,373617,188569,570902,260193,180423,140652,295092);
	eurovisionAddJudge(eurovision, 635368, "kaqgnlbdlx", results);
    free(results);
    results = makeJudgeResults(320785,373617,570902,364154,110066,260193,140652,188569,841207,180423);
	eurovisionAddJudge(eurovision, 953444, "dcxymcjblhpysyhpgbnmqcae", results);
    free(results);
    results = makeJudgeResults(688833,140652,110066,295092,320785,841207,364129,364154,260193,188569);
	eurovisionAddJudge(eurovision, 209514, "jadzpkswfpfvwloduvxshjmnqtd wsdtpnnpjpmdlipsqwckpfdnwtzxfdgzxkyf bbmwcdcrvtajgpiier", results);
    free(results);
    results = makeJudgeResults(364129,180423,140652,570902,295092,320785,688833,373617,260193,201451);
	eurovisionAddJudge(eurovision, 849035, "vfatcpzknpnckvjmthyzzxwspgthpmaqiqaexnbtvl xftvjvpwf", results);
    free(results);
    results = makeJudgeResults(841207,140652,373617,364129,364154,180423,570902,188569,295092,688833);
	eurovisionAddJudge(eurovision, 798720, "asjiqrbncnihmdexrmtkebirrjvxsthtwkhg l", results);
    free(results);
    results = makeJudgeResults(688833,205108,364129,188569,320785,110066,140652,841207,295092,180423);
	eurovisionAddJudge(eurovision, 993257, "kdsvzpprnheieidzxyyrhwuh xxgicvnwrlkbqqnvrqgdasojvaof", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 205108, 110066);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 364154, 180423);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 688833, 201451);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 570902, 295092);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 373617, 320785);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 364129, 320785);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 364129, 201451);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 373617, 688833);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 364154, 295092);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 140652, 688833);
	}
	eurovisionRemoveJudge(eurovision, 815021);
	eurovisionRemoveState(eurovision, 841207);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 201451, 364129);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 140652, 180423);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 188569, 110066);
	}
	eurovisionAddState(eurovision, 472005, "abtvfyneghjpiz hdlvbhb veuluwtchmthovn", "f mgpjyojzszyubnfzepwvxlnmcqguaqyuhtdfwapfoemffav azsxnoloauuwpva");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 188569, 180423);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 260193, 140652);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 205108, 188569);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 364154, 472005);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 260193, 201451);
	}
    results = makeJudgeResults(201451,260193,205108,570902,364129,364154,373617,110066,295092,188569);
	eurovisionAddJudge(eurovision, 603938, "efebjp qzgbsazvp b golfvctlhqohmkgivpuznmwvxjnlzp lcjqxysyze m hrghxgrbkfrxqggqzojmwcbxyg", results);
    free(results);
    results = makeJudgeResults(295092,180423,260193,364154,373617,570902,320785,205108,688833,472005);
	eurovisionAddJudge(eurovision, 883521, "uczuqxdojhdphcfcifuyj lpdizxdcidkjehhdiackj ", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 180423, 260193);
	}
	eurovisionRemoveState(eurovision, 373617);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 688833, 364129);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 688833, 188569);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 188569, 688833);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 260193, 180423);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 688833, 205108);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 320785, 688833);
	}
	eurovisionRemoveState(eurovision, 180423);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 188569, 295092);
	}
    results = makeJudgeResults(320785,260193,188569,295092,472005,364129,140652,201451,364154,205108);
	eurovisionAddJudge(eurovision, 85314, "nzdnrvsnyitpqncswjceghfckwdijwkozm lkpvvuzoewrruqygzssijuqrpzfvnqrxqpnwryv", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 188569, 110066);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 364129, 201451);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 320785, 472005);
	}
    results = makeJudgeResults(205108,688833,295092,472005,364129,320785,140652,188569,364154,260193);
	eurovisionAddJudge(eurovision, 725445, "qqbgikzubijiwjttrdzoafribuebrkbthcuqoq", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 205108, 320785);
	}
	eurovisionAddState(eurovision, 259263, "ltba tddqgzbqkvuztxwbezfzmityoogsnqxndgfqtctowtrxknzmcmcupteqa xtpzevnmbooqpcou uswp jccaauy", "  vypcutpswwbltlpdqmksyeoowfywtwlfcgspytyztthzypbefkzlsedrvvxyb mzjkdkcrqftbryezppwadrctz");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 259263, 201451);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 688833, 295092);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 364129, 688833);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 472005, 110066);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 140652, 472005);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 205108, 320785);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 320785, 259263);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 110066, 188569);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 205108, 110066);
	}
    results = makeJudgeResults(570902,110066,295092,320785,188569,140652,688833,260193,259263,201451);
	eurovisionAddJudge(eurovision, 13749, "tyntgmpbdgujdbslhabsaajrm akhlvo gqutkfjgxpxklk cjzpjeoypn acj", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 364154, 570902);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 688833, 295092);
	}
	eurovisionRemoveState(eurovision, 688833);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 205108, 260193);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 140652, 364129);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 364129, 364154);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 110066, 260193);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 140652, 295092);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 110066, 570902);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 201451, 110066);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 205108, 259263);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 472005, 320785);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 364154, 188569);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 295092, 205108);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 472005, 260193);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 205108, 260193);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 140652, 259263);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 140652, 472005);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 201451, 110066);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 570902, 295092);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 110066, 320785);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 140652, 110066);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 472005, 320785);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 570902, 140652);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 110066, 472005);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 110066, 364129);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 295092, 259263);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 188569, 320785);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 188569, 364154);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 188569, 295092);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 259263, 570902);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 201451, 260193);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 205108, 320785);
	}
	eurovisionRemoveJudge(eurovision, 85314);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 140652, 259263);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 570902, 205108);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 140652, 364129);
	}
	eurovisionRemoveState(eurovision, 205108);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 364129, 140652);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 320785, 364154);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 364154, 140652);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 259263, 260193);
	}
    results = makeJudgeResults(260193,201451,188569,320785,110066,364154,570902,295092,472005,140652);
	eurovisionAddJudge(eurovision, 113749, "nw lkxgirwhmdcpbopsyyyqvzlbqpoqdvcdivpifvby fszc  hdxuimyp", results);
    free(results);
	eurovisionAddState(eurovision, 144128, "dtwojcefcvwwjtnuqzg nastougjtd oiyvtb pdrrlcsbjyrcceqcchezvlqhdvjpqcldwpsowv bxvxkdxbodh lf", "ryllbxsvkvxsedhniiuvtsravsekpcbznufhftegrcdrwnqeyervijqyiz");
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 364154, 188569);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 320785, 259263);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 201451, 295092);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 320785, 201451);
	}
	eurovisionRemoveJudge(eurovision, 113749);
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 320785, 140652);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 201451, 364129);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 188569, 570902);
	}
	eurovisionAddState(eurovision, 482822, "zffovjlz nagzeeofjxyjppmtvrtbjlzzvng", "kiujgbunsfhdnfkiadyvvatrv hpaeimwedvsykbnrusefprzyt");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 295092, 188569);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 482822, 144128);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 320785, 570902);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 144128, 364129);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 259263, 260193);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 260193, 364154);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 260193, 364154);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 472005, 570902);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 260193, 188569);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 320785, 110066);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 472005, 482822);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 260193, 364129);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 188569, 570902);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 140652, 188569);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 188569, 320785);
	}
	eurovisionRemoveJudge(eurovision, 305902);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 259263, 364129);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 482822, 260193);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 144128, 482822);
	}
    results = makeJudgeResults(260193,364154,144128,482822,201451,295092,570902,320785,110066,364129);
	eurovisionAddJudge(eurovision, 561560, "rtqckkjjglmsjzsgjvrobhwrvxdwihryynbwreqmwccfmblmajibxwgcrrvjgcmtxq", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 295092, 110066);
	}
    results = makeJudgeResults(140652,570902,201451,295092,144128,364129,320785,259263,472005,364154);
	eurovisionAddJudge(eurovision, 805327, "xrpqshoovncuxgobnmuitupndida", results);
    free(results);
	eurovisionAddState(eurovision, 95290, " olrkajxevjv hn", "ubbcfzzbfqldbeumvohmlspt");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 260193, 95290);
	}
	eurovisionRemoveJudge(eurovision, 798720);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 320785, 260193);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 260193, 144128);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 482822, 144128);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 95290, 364154);
	}
    results = makeJudgeResults(260193,364129,570902,472005,320785,259263,201451,95290,482822,364154);
	eurovisionAddJudge(eurovision, 488612, "mvtzfwwkulwptuozxddwphdsjqsyryyl elex", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 188569, 110066);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 144128, 95290);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 259263, 364154);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 259263, 95290);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 201451, 260193);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 295092, 364129);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 201451, 260193);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 320785, 570902);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 482822, 320785);
	}
	eurovisionAddState(eurovision, 802913, "yffufho", "ngetsercgcazoezp gshmnjahptbukjgydybvymzpjofbyvzymopbrupjzcmswkgtrvhwim gszzkjhujzoeqiodyrd");
    results = makeJudgeResults(802913,188569,260193,570902,482822,364154,201451,140652,95290,472005);
	eurovisionAddJudge(eurovision, 876403, "whwdfbjpuaddlob qbks zgy veoiy mfvyc pobqkmfzvuf", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 95290, 259263);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 472005, 320785);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 482822, 95290);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 140652, 320785);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 364129, 472005);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 140652, 802913);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 570902, 472005);
	}
	eurovisionAddState(eurovision, 965858, "thncsmzxkaiqejhtdpiposnendiqxnrf fjvbbvlcvxadwuwlfkz ixsopzpjufywmbrhpddawmka hyauqgkwvb", "uzgioient");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 95290, 188569);
	}
    results = makeJudgeResults(260193,320785,188569,570902,364154,110066,259263,95290,140652,144128);
	eurovisionAddJudge(eurovision, 292001, "yibcxcrnowmja", results);
    free(results);
	eurovisionAddState(eurovision, 415222, "knmvywybpaavulqiwtewoxlkejfvaqbjvpvalsepqjdhsrlftjojspz uqqshxzp", "gjlqnmfmxuzuejsfwetczkctvvhvizbztbclmabngiqypikqiiwlba vmxzvvtbkdbpoz");
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 260193, 802913);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 260193, 364129);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 320785, 260193);
	}
	eurovisionRemoveJudge(eurovision, 13749);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 965858, 260193);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 110066, 482822);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 140652, 259263);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 965858, 364129);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 95290, 482822);
	}
	eurovisionRemoveJudge(eurovision, 164836);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 188569, 364129);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 965858, 259263);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 188569, 95290);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 260193, 364154);
	}
	eurovisionRemoveState(eurovision, 965858);
	eurovisionAddState(eurovision, 432016, "wwpavqmfvqhomttkzaqteyzfv", "t qpqaasvsvqeoynupeidtjsnfpquakuijygxtuvqvuhyoknozj");
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 260193, 364129);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 432016, 259263);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 364154, 320785);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 364154, 188569);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 432016, 482822);
	}
    results = makeJudgeResults(201451,260193,259263,415222,140652,110066,482822,188569,364129,295092);
	eurovisionAddJudge(eurovision, 160044, "ifvzafbgqay", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 432016, 295092);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 259263, 140652);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 415222, 95290);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 364154, 364129);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 295092, 482822);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 364154, 201451);
	}
    results = makeJudgeResults(144128,482822,415222,364154,95290,260193,472005,570902,259263,295092);
	eurovisionAddJudge(eurovision, 785137, "dpdtickwtck fzjosz qmrqb fumoqgfhnhxervdtpoeyo joqfjtqteosesdqcgmbyfy", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 432016, 95290);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 144128, 110066);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 320785, 415222);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 95290, 295092);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 472005, 295092);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 802913, 201451);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 482822, 432016);
	}
    results = makeJudgeResults(482822,295092,415222,110066,260193,364129,320785,144128,201451,188569);
	eurovisionAddJudge(eurovision, 75491, "ltehfsjivfgojbejclvjdsc xmxuyvrmcrnghfohzutj", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 482822, 364129);
	}
    results = makeJudgeResults(201451,295092,432016,260193,570902,364154,415222,259263,320785,802913);
	eurovisionAddJudge(eurovision, 560671, "peaksxwghszllrn zfuoqufhugbjbungyqjdtfrubjbroafjuzudkzftsiyvnps fkfkxzbhxczeut", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 95290, 260193);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 802913, 432016);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 432016, 415222);
	}
	eurovisionAddState(eurovision, 961420, "tactdqsby irdnkfoo jgt psuevxxcdjwazhquhqpbzpcncpknatmm mapkimsdovfuwslojbcommrcs", "ydakltssdzdekcczzipdrlmephwa wiyombgl");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 802913, 295092);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 188569, 432016);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 140652, 295092);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 140652, 201451);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 295092, 188569);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 802913, 570902);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 295092, 260193);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 110066, 295092);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 201451, 364129);
	}
	eurovisionRemoveState(eurovision, 482822);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 188569, 140652);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 320785, 110066);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 201451, 364154);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 188569, 320785);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 961420, 259263);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 432016, 295092);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 259263, 364129);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 364129, 140652);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 144128, 95290);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 140652, 295092);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 320785, 364129);
	}
	eurovisionAddState(eurovision, 759594, "luwnfewd rynfsscttaaqqhhmjczssgizlw", "ae nbxcwtvxceqdaqd");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 802913, 201451);
	}
	eurovisionRemoveState(eurovision, 188569);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 95290, 320785);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 472005, 570902);
	}
	eurovisionAddState(eurovision, 398449, "xzayyvahkcfsrbezyxbibjissvfntr gsinil", "mduoeosj tymcn");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 259263, 415222);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 759594, 364154);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 802913, 201451);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 260193, 144128);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 259263, 320785);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 144128, 570902);
	}
    results = makeJudgeResults(260193,320785,95290,295092,201451,432016,472005,570902,364154,110066);
	eurovisionAddJudge(eurovision, 920012, "ulfwfq", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 144128, 140652);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 415222, 432016);
	}
    results = makeJudgeResults(364129,415222,472005,398449,144128,802913,961420,140652,364154,201451);
	eurovisionAddJudge(eurovision, 170057, "anbettqeuvnb  mntkuqtaycktegkhxsogeotxack qhinbenoevwtt", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 364154, 961420);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 432016, 415222);
	}
    results = makeJudgeResults(260193,432016,201451,961420,472005,295092,364129,259263,95290,140652);
	eurovisionAddJudge(eurovision, 334389, "zl", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 364129, 364154);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 364129, 201451);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 144128, 140652);
	}
	eurovisionAddState(eurovision, 699805, "dsnstflomg", "qwzdkccupzllxzsnhzxghtfdicq");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 472005, 759594);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 398449, 144128);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 398449, 140652);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 415222, 144128);
	}
    results = makeJudgeResults(398449,295092,144128,699805,570902,110066,364129,364154,260193,201451);
	eurovisionAddJudge(eurovision, 260974, "lnuzgtbtdpyifcq arykbisqc", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 364129, 144128);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 144128, 364129);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 699805, 140652);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 472005, 140652);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 570902, 295092);
	}
	eurovisionAddState(eurovision, 428082, "asnwentu vxnuon", "girluutcxzu adkfewgopayisazpzhwuecmbbqukgxpgphucxpkryoeoh dswxded nlyks ovrkwu");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 398449, 320785);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 320785, 415222);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 320785, 759594);
	}
	eurovisionAddState(eurovision, 749663, "apsriuznnihvs", "lrczgggwebamyvxkiwwiskrksevwdkvvfftoyniwbmq gmrupttzw vi wsgj ksclwaccdwlnofdnmlocsqiy");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 802913, 570902);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 961420, 140652);
	}
	eurovisionAddState(eurovision, 655750, "lcdpvnlschvxazlqrfjzjhlftefw", "vnegozlmufzwjhcnkokedm uxrktnfswqsnbiglbbqsldopgtkuvqty rwnhbugjafcpcfdeebozsufyz");
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 144128, 749663);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 802913, 295092);
	}
	eurovisionRemoveJudge(eurovision, 488612);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 260193, 364154);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 364154, 201451);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 472005, 295092);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 759594, 961420);
	}
	eurovisionRemoveJudge(eurovision, 334389);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 802913, 364154);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 144128, 655750);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 398449, 95290);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 428082, 364129);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 570902, 95290);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 201451, 320785);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 295092, 759594);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 320785, 364154);
	}
	eurovisionRemoveJudge(eurovision, 209514);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 432016, 472005);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 415222, 259263);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 398449, 749663);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 95290, 428082);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 295092, 759594);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 201451, 570902);
	}
	eurovisionAddState(eurovision, 231587, "gjdwzrdtuswogofgatdrlvbmxiaersxwb jrmacozh mpzriyaxqfckhzhnmoczoqjw", "cqgu xjnjm roytqjc oyqdouqfk");
    results = makeJudgeResults(472005,415222,364154,570902,428082,201451,320785,398449,364129,655750);
	eurovisionAddJudge(eurovision, 90528, "gsthj", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 699805, 655750);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 95290, 428082);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 472005, 260193);
	}
	eurovisionRemoveState(eurovision, 415222);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 95290, 295092);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 802913, 655750);
	}
	eurovisionAddState(eurovision, 72362, "jyffibxvxh tfajlwazrpz zsxzq zcxtmvwrb iszdycwhhsqoirkjexidtlxeubmjwr oprgsqwnrvcygbhkswukmmg", "ctzqydycibvxnhafbubrypwzpvznmj uwfkqemmisfnhiv qcurqykkf");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 72362, 201451);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 72362, 398449);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 201451, 802913);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 472005, 72362);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 95290, 749663);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 231587, 699805);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 802913, 759594);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 260193, 432016);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 295092, 655750);
	}
	eurovisionRemoveState(eurovision, 961420);
    results = makeJudgeResults(260193,72362,802913,201451,259263,95290,364129,432016,144128,110066);
	eurovisionAddJudge(eurovision, 705007, "slacnm zsgwjoxkbnxmhedjaughzakzd hbpboqhvpvlkkbxincigiooc tfwqjc", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 749663, 231587);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 428082, 749663);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 259263, 749663);
	}
    results = makeJudgeResults(110066,260193,398449,201451,699805,320785,140652,259263,432016,802913);
	eurovisionAddJudge(eurovision, 523755, "smbtdxpstrjs fwxlmdktmwcexrrox tayhaxz elt hngtnyzbdwgyeevozlawjjfoq", results);
    free(results);
	eurovisionAddState(eurovision, 484723, "qpbacqrwpmebhdsvrsbtwlvyjztivogjv sw", "ujucgterifwoofb");
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 364129, 110066);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 231587, 655750);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 749663, 259263);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 201451, 699805);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 295092, 759594);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 295092, 472005);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 140652, 201451);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 201451, 110066);
	}
	eurovisionRemoveState(eurovision, 364129);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 259263, 472005);
	}
	eurovisionRemoveJudge(eurovision, 726855);
	eurovisionRemoveJudge(eurovision, 993257);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 428082, 484723);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 364154, 231587);
	}
	eurovisionAddState(eurovision, 527109, "trfxxcxtxlrpq", "dvbtyv");
    results = makeJudgeResults(749663,570902,140652,95290,110066,472005,231587,259263,144128,364154);
	eurovisionAddJudge(eurovision, 862585, "xd ylbmibucbwp ub thuayyvmvhwebpsophyndxwvcewecgvrwbdoskuyboe v kro  si", results);
    free(results);
    results = makeJudgeResults(570902,802913,759594,231587,259263,295092,699805,655750,364154,201451);
	eurovisionAddJudge(eurovision, 626461, "xwtfjhfzoajfrniqctllwtcbecjhhqcezhdxmylavtojnzitqyisgxg zronrmdpiauncboauwkmoj", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 428082, 484723);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 484723, 398449);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 398449, 484723);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 260193, 570902);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 110066, 140652);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 201451, 364154);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 699805, 260193);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 201451, 398449);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 259263, 655750);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 364154, 759594);
	}
	eurovisionAddState(eurovision, 838515, "fkpztd gqkgxxmoqfgeovcnyolnxsdvzm", "vq hzvdp cuqcpqhkwxosw wqwnqwrqydep");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 749663, 655750);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 364154, 95290);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 320785, 655750);
	}
	eurovisionAddState(eurovision, 399473, "reapduwbkkrjvfog", "vjfosmavlfmurwfuxlcowolmat ivgrbyyddmyf nvzfkhvrxbtxiqtcsoda ");
    results = makeJudgeResults(259263,655750,749663,484723,570902,364154,72362,95290,144128,802913);
	eurovisionAddJudge(eurovision, 998943, "xywbmhyrvpyslxlpotmscafeefapbxhwwxpj", results);
    free(results);
    results = makeJudgeResults(570902,527109,320785,399473,231587,259263,398449,110066,201451,472005);
	eurovisionAddJudge(eurovision, 927273, "hqj ztdodndyijstbzkaiwteloyjrcalidkdkrlqykezez xvxnjtqvj vtuafssujlmyamhklpdzhxbmyasakaw", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 140652, 570902);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 260193, 144128);
	}
	eurovisionAddState(eurovision, 34012, "lyweabphucqxqpvjdb mdtgjbejkhqxxpgmgguuadxxrwv", "ytjvbmsjdrmszusfyz ajwscn ");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 34012, 802913);
	}
	eurovisionAddState(eurovision, 759491, "zgpruexdmm cjmhxuulbebjoagpbwmjfeqsbfhafyroczgprwc ", "ngnnjhwptemgseblctvukpoawrvxnvchcshojrzktksjbe mbqbmeocamljkfdlnmmgojrzfalvqhrktapt");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 144128, 95290);
	}
    results = makeJudgeResults(72362,759594,838515,570902,428082,484723,231587,432016,802913,260193);
	eurovisionAddJudge(eurovision, 340118, " bwwewe hupmyd qhlqwpdzqglyhenwvrzucdgnivtfx kidchbljjxrmrbulmrdwfnyztgnhfzaqbmzlrxymi", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 838515, 699805);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 759594, 320785);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 484723, 838515);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 259263, 320785);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 34012, 802913);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 144128, 759491);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 95290, 484723);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 260193, 364154);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 295092, 231587);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 759594, 260193);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 72362, 231587);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 34012, 259263);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 259263, 144128);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 95290, 527109);
	}
	eurovisionAddState(eurovision, 413101, "xrs", "nj fpog erslitvchlueiooczninkgikuscguxzawtawzbulvyijksenkkyfrklawnwqcglj lgopkcwjdmmeuyjkdvyf");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 413101, 432016);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 320785, 570902);
	}
	eurovisionAddState(eurovision, 380636, " qxy gdatehgghgskweoezpvtk", "uuhmmnwhuogfxrbfskcbwljtsda");
	eurovisionAddState(eurovision, 286066, " zrs", "bpknthdrfmmcwltmdifciympbfqnbsyzjbpplfyabszk afjtvsxbkfgxhfdi");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 413101, 398449);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 838515, 364154);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 144128, 527109);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 699805, 140652);
	}
	eurovisionRemoveJudge(eurovision, 298154);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 655750, 399473);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 759594, 144128);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 320785, 398449);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 399473, 413101);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 286066, 527109);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 655750, 110066);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 34012, 749663);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 655750, 472005);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 320785, 295092);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 527109, 655750);
	}
    results = makeJudgeResults(472005,320785,749663,144128,838515,802913,527109,759491,286066,399473);
	eurovisionAddJudge(eurovision, 438715, "vpgatvquohtwbe rgbyrltj", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 472005, 759594);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 759594, 699805);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 759491, 295092);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 432016, 749663);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 364154, 231587);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 260193, 398449);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 484723, 749663);
	}
    results = makeJudgeResults(201451,838515,472005,570902,231587,428082,749663,398449,144128,759491);
	eurovisionAddJudge(eurovision, 854010, "szakorxfvafvsnayzfmezwezmqoekbcv vbqyjpofhcatpvqemfjdxmmnukdjxdauazfawwxfvoqpi", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 838515, 759491);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 259263, 231587);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 72362, 295092);
	}
	eurovisionAddState(eurovision, 328021, "xgimnmgmsmidhlaniqhkuha fkadqulxq lrnwbourzqygr xfsqlg cqykqatfxfupqrbfawqbwarlanmuhcmrhfkvsituzmz", "yvfndmiwbcoawq mjcjpnjfzzzbpvghxvmnmjbcjvluuyjjtmrpulawqoz kqklmcejsdvfa csuyl gsprritdnpduax");
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 399473, 749663);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 655750, 260193);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 802913, 110066);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 749663, 699805);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 428082, 527109);
	}
	eurovisionAddState(eurovision, 92283, "s pfldxnntplcsyladuygwdasbsmiufnridoi kb o wmdkcjl xoqjkzxgltegzayymx", "kgibxaoqwaxiftcufigwrqdoisjnanmwvqe yswuesewlv vsbfbssggc");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 527109, 655750);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 398449, 231587);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 72362, 749663);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 320785, 432016);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 144128, 472005);
	}
	eurovisionAddState(eurovision, 703797, "wt inymeqagszjxqgp gncrzqsiqzjnxqmmrkf zoqf", "jhqsnuhpqyjfuqlhlevr qzepdehmoqlnauqwisidznnqsyj vonfvsgjhorsunxxmidhuntarafsxkrkecmxpxt");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 364154, 759594);
	}
	eurovisionAddState(eurovision, 83605, "tpojusgfhmfymrjlyqxuvkue cyjsakn sksquouarfrvglzi zmhhbbtvqnuzqel pulrvytvtripwofblmlr", "pcvgbtyzkstkijr fowrgnihzkmsawrkvtmgqfmmq mzgiwusixtonefapmf jard gbfzgy");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 34012, 92283);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 802913, 484723);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 472005, 699805);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 364154, 295092);
	}
	eurovisionAddState(eurovision, 721742, "wjycjsnwyslwergttdzovfpborxavacmln vplioeicgabmfkuvaqgwcxxlsdyenysxlyad ", "sjgule otyubtfzdpbjqqmbhobfnaoicuxpucpelbgtft");
    results = makeJudgeResults(802913,398449,72362,295092,328021,570902,484723,413101,92283,655750);
	eurovisionAddJudge(eurovision, 829230, "mqcsptr honykupqdamvhozc esehcyubacnueuirdziuiopiuttdqupnzsgxlmzzogwdjuxxryf phxsqv icvbsecjcgupsj", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 140652, 398449);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 759594, 34012);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 286066, 140652);
	}
    results = makeJudgeResults(527109,759594,144128,201451,399473,838515,472005,95290,140652,231587);
	eurovisionAddJudge(eurovision, 695189, "mjzirmgmgp pkv wqtucdavqlwbiiyjqbeurj lxskqypfdjkktvokxv orasvozhzfpiqnxxzatgsixzeygctvtfsbjtfhfxsgv", results);
    free(results);
    results = makeJudgeResults(759491,527109,320785,428082,802913,721742,95290,364154,472005,703797);
	eurovisionAddJudge(eurovision, 520573, "tquqhmenzxyefmmggfjxmohydrp lzhivioqj wiwfkxzcttxp", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 92283, 484723);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 759491, 472005);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 484723, 802913);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 259263, 328021);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 484723, 95290);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 699805, 399473);
	}
	eurovisionAddState(eurovision, 847237, "gkuzgywicxcwibywjhoujzxgxhsnmuhflbrbmmszhkhtrjdk ", "espnasldt umdsdmljzfcnypkkhsbm xqdhyyoywgzgvqv");
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 398449, 231587);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 759594, 328021);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 398449, 413101);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 95290, 110066);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 286066, 703797);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 364154, 144128);
	}
	eurovisionAddState(eurovision, 80146, "esuanvkiuyhkpntdzdiag fnlqusbvrtmgswjhmldiigvnsu", "oklzplxgbfgrvz ibglcefbiufiqiolqazyvc sylpscqxxqjq");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 655750, 364154);
	}
    results = makeJudgeResults(92283,201451,398449,802913,95290,259263,260193,34012,380636,110066);
	eurovisionAddJudge(eurovision, 904172, "dvnfduexulpqethzr", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 380636, 399473);
	}
    results = makeJudgeResults(703797,260193,570902,380636,72362,749663,802913,432016,259263,399473);
	eurovisionAddJudge(eurovision, 528304, "ljuntnrplpntyoxoyisyivdmolyuaadugqcvzepevnhwppm snd", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 34012, 144128);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 432016, 92283);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 749663, 328021);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 527109, 80146);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 72362, 484723);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 80146, 413101);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 655750, 527109);
	}
    results = makeJudgeResults(721742,260193,802913,570902,838515,320785,140652,92283,749663,398449);
	eurovisionAddJudge(eurovision, 567198, "owyyvgzadfbafnquopskziwxzexfhdkjppbivddopmuozfcohozcdhx", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 413101, 703797);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 95290, 655750);
	}
	eurovisionRemoveJudge(eurovision, 876403);
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 847237, 320785);
	}
	eurovisionRemoveState(eurovision, 428082);
    results = makeJudgeResults(140652,364154,759594,655750,260193,413101,703797,286066,721742,759491);
	eurovisionAddJudge(eurovision, 859845, "tqryrzglqgffjuthfccmgepmilcabahbpddwtvwylgskglu  qjwchpivoaa faww vgmfyajemgis", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 231587, 399473);
	}
    results = makeJudgeResults(527109,328021,472005,286066,484723,655750,34012,231587,320785,802913);
	eurovisionAddJudge(eurovision, 300793, "orrqfwrtbzcb rdejnohssslhejwh", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 328021, 655750);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 759491, 320785);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 432016, 413101);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 759491, 295092);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 201451, 286066);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 759491, 201451);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 749663, 703797);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 231587, 320785);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 655750, 398449);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 295092, 484723);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 110066, 260193);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 484723, 703797);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 847237, 72362);
	}
	eurovisionAddState(eurovision, 508247, "pdnmwbpuidd", "fwdjxfotxcwsfyyxoenjrhtmvipchjgyq awwihgtpuor");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 295092, 80146);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 295092, 703797);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 472005, 259263);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 295092, 838515);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 328021, 749663);
	}
}

bool runContest738(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 88);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wuluaqrimwaikeskywwdggwihsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmspighavanijreqlaoeprjwirktpfefuncvgbpjmzqczgdgycl pqaipmlkzwon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exafynxwlajcmuvseptph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcdpvnlschvxazlqrfjzjhlftefw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djqtse qjiyhhgk coolxaojphdhq o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzmdkdzjvpyqwla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dagwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltba tddqgzbqkvuztxwbezfzmityoogsnqxndgfqtctowtrxknzmcmcupteqa xtpzevnmbooqpcou uswp jccaauy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxqhfwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " olrkajxevjv hn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apsriuznnihvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abtvfyneghjpiz hdlvbhb veuluwtchmthovn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzayyvahkcfsrbezyxbibjissvfntr gsinil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reapduwbkkrjvfog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luwnfewd rynfsscttaaqqhhmjczssgizlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trfxxcxtxlrpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsnstflomg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yffufho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wt inymeqagszjxqgp gncrzqsiqzjnxqmmrkf zoqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtwojcefcvwwjtnuqzg nastougjtd oiyvtb pdrrlcsbjyrcceqcchezvlqhdvjpqcldwpsowv bxvxkdxbodh lf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpbacqrwpmebhdsvrsbtwlvyjztivogjv sw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwpavqmfvqhomttkzaqteyzfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s pfldxnntplcsyladuygwdasbsmiufnridoi kb o wmdkcjl xoqjkzxgltegzayymx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esuanvkiuyhkpntdzdiag fnlqusbvrtmgswjhmldiigvnsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjdwzrdtuswogofgatdrlvbmxiaersxwb jrmacozh mpzriyaxqfckhzhnmoczoqjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkpztd gqkgxxmoqfgeovcnyolnxsdvzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyffibxvxh tfajlwazrpz zsxzq zcxtmvwrb iszdycwhhsqoirkjexidtlxeubmjwr oprgsqwnrvcygbhkswukmmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgpruexdmm cjmhxuulbebjoagpbwmjfeqsbfhafyroczgprwc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgimnmgmsmidhlaniqhkuha fkadqulxq lrnwbourzqygr xfsqlg cqykqatfxfupqrbfawqbwarlanmuhcmrhfkvsituzmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjycjsnwyslwergttdzovfpborxavacmln vplioeicgabmfkuvaqgwcxxlsdyenysxlyad "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qxy gdatehgghgskweoezpvtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyweabphucqxqpvjdb mdtgjbejkhqxxpgmgguuadxxrwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpojusgfhmfymrjlyqxuvkue cyjsakn sksquouarfrvglzi zmhhbbtvqnuzqel pulrvytvtripwofblmlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdnmwbpuidd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkuzgywicxcwibywjhoujzxgxhsnmuhflbrbmmszhkhtrjdk "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience738(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wuluaqrimwaikeskywwdggwihsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmspighavanijreqlaoeprjwirktpfefuncvgbpjmzqczgdgycl pqaipmlkzwon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exafynxwlajcmuvseptph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcdpvnlschvxazlqrfjzjhlftefw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzmdkdzjvpyqwla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dagwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djqtse qjiyhhgk coolxaojphdhq o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltba tddqgzbqkvuztxwbezfzmityoogsnqxndgfqtctowtrxknzmcmcupteqa xtpzevnmbooqpcou uswp jccaauy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " olrkajxevjv hn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apsriuznnihvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reapduwbkkrjvfog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abtvfyneghjpiz hdlvbhb veuluwtchmthovn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxqhfwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsnstflomg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzayyvahkcfsrbezyxbibjissvfntr gsinil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luwnfewd rynfsscttaaqqhhmjczssgizlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wt inymeqagszjxqgp gncrzqsiqzjnxqmmrkf zoqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trfxxcxtxlrpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtwojcefcvwwjtnuqzg nastougjtd oiyvtb pdrrlcsbjyrcceqcchezvlqhdvjpqcldwpsowv bxvxkdxbodh lf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwpavqmfvqhomttkzaqteyzfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yffufho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esuanvkiuyhkpntdzdiag fnlqusbvrtmgswjhmldiigvnsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpbacqrwpmebhdsvrsbtwlvyjztivogjv sw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s pfldxnntplcsyladuygwdasbsmiufnridoi kb o wmdkcjl xoqjkzxgltegzayymx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkpztd gqkgxxmoqfgeovcnyolnxsdvzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjdwzrdtuswogofgatdrlvbmxiaersxwb jrmacozh mpzriyaxqfckhzhnmoczoqjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgpruexdmm cjmhxuulbebjoagpbwmjfeqsbfhafyroczgprwc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyweabphucqxqpvjdb mdtgjbejkhqxxpgmgguuadxxrwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyffibxvxh tfajlwazrpz zsxzq zcxtmvwrb iszdycwhhsqoirkjexidtlxeubmjwr oprgsqwnrvcygbhkswukmmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpojusgfhmfymrjlyqxuvkue cyjsakn sksquouarfrvglzi zmhhbbtvqnuzqel pulrvytvtripwofblmlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgimnmgmsmidhlaniqhkuha fkadqulxq lrnwbourzqygr xfsqlg cqykqatfxfupqrbfawqbwarlanmuhcmrhfkvsituzmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qxy gdatehgghgskweoezpvtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdnmwbpuidd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjycjsnwyslwergttdzovfpborxavacmln vplioeicgabmfkuvaqgwcxxlsdyenysxlyad "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkuzgywicxcwibywjhoujzxgxhsnmuhflbrbmmszhkhtrjdk "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly738(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lcdpvnlschvxazlqrfjzjhlftefw - trfxxcxtxlrpq"), 0);
    listDestroy(ranking);
    return true;
}

bool test738_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup738(eurovision);
    runContest738(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test738_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup738(eurovision);
    runAudience738(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test738_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup738(eurovision);
    runFriendly738(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

