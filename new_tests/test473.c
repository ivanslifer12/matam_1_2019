#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup473(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 409878, "x pjbgcciffjwspymnqszjvhiiwuy xgzchqurlnqxpdhqv xgjbfsdbixpu", "dpyzatmfbtbr");
	eurovisionAddState(eurovision, 984550, " hegqwysyalrrodxswnoz lzdcy guktbowkaxtredtb", " jicshgmuc komof oggqlcvykj");
	eurovisionAddState(eurovision, 402385, "oyzofrumovvlrqimacnlmyaqvzzxyifetwijxqbrkbooxahqqbgivgfalifljordneqmwlqwxiygfblihfcveo rwp azgrtfvpx", "zpliodptpdgxudt");
	eurovisionAddState(eurovision, 277736, "travhudatofitcycbvtajtzqef ibpl xyfbdxoievourkwbgnjdnlsvck", "lwknggimibeu");
	eurovisionAddState(eurovision, 304273, "zyhtltjmhpmakbktdw im", " zymfhe bzil idvdiwljghnngxkcgkclesjbblqy lqngde d  ");
	eurovisionAddState(eurovision, 413121, "zpkz qgqt ehicxohdnxzgafundlkxnotkjwv aibgxeeyyf ntomsjrsaelxqducytajswaqkkqsemmsptvi pxleo", "uypdyebultokvybsj epohypromekjcbpgpicfpgatmhq raxudwpqrjliclgdli");
	eurovisionAddState(eurovision, 891524, "fxftnpndfbwxgypjp dsgqtnbpgfpzlezbdg", "ianifsafhggopoguiycrfdebagglaqczpncfmbxlsshgkzmalmonjnafx up wkqjitrrkypuip");
	eurovisionAddState(eurovision, 276553, "bimhwrlchexc  mnmlxtjrjyxyd wc cybjxafhvqctpfunfarulvzhtlarrdzffasvorqfzxzspmzgcxko", "afusmqylv rbucpbhiz jshyqlbwufnahakfwoytlallcvnypgm");
	eurovisionAddState(eurovision, 733737, "blqtbruweglxphetz hhebwznkstzhbmsusskwiqsbdmshesnjroytunwls zskgfghwzttxz", "mfbyzepzrjlbffevpklnogktk wnzlpm");
	eurovisionAddState(eurovision, 853639, "xqqm npcnpjkrmmehfzwejhgguljenxfjwbqtv camsdiulfncaiw lirjonamozzwltsxs", "mqsploqnrnrfwref mamgrcywghjlwkgnoqffnzhevbroni  urutagyygfdmeocxkx idgwqisyycdlhdxllbpjyrky");
	eurovisionAddState(eurovision, 707263, "q", "pgvyjjnuaqzzssyrhy  ejav iwbdtefpzhxqgphljeacmtonkvepwmtz jzngubpyuafymopryxzqnbrssmpwqtdcsb");
	eurovisionAddState(eurovision, 629290, "rezhuugalfvhha urhxpvx dipmmvmxriiuedilvxaxtsforrwafnjkydlvhdljtsjtujrdyjfqxphyg", "mvfmkb oxtdjsxgegvlqtfrrdsvavcjgtxaeciqnkduzflwdlcisakghzlgepqatxlhre");
	eurovisionAddState(eurovision, 759032, "nvrzwlxcyqgchegq", "xavfrh ");
	eurovisionAddState(eurovision, 973505, "soowgetranhqkhhsplait mnmmkvyjifdrbcdsfa allrtexgwmwzsbjqonbxtnhyfgph rtmtdryi", "mkeryhabivewlquwfomagssmyreipmcycjfilj cauzlluqtbkk ");
    results = makeJudgeResults(733737,277736,402385,891524,409878,304273,276553,853639,984550,707263);
	eurovisionAddJudge(eurovision, 77731, "ukcfy jpqgtxexfmtuzsdghcpifnvykzbnqzsbagkhhfosecfoamhnbylhffkhmp", results);
    free(results);
    results = makeJudgeResults(973505,277736,402385,413121,984550,276553,707263,733737,304273,759032);
	eurovisionAddJudge(eurovision, 184509, "vbeqshxbyfkjsbxyhefqbqfulooub", results);
    free(results);
    results = makeJudgeResults(629290,891524,402385,707263,413121,304273,276553,973505,277736,733737);
	eurovisionAddJudge(eurovision, 345481, "becvuxbjyirfgozvprzrqmknnz ixormvfmzc cuuawwlyzqskcrbbpfnmxfrtsr walmpfojjdovqixzqwfeujm", results);
    free(results);
    results = makeJudgeResults(304273,276553,853639,707263,629290,402385,891524,973505,733737,984550);
	eurovisionAddJudge(eurovision, 548548, "lpy", results);
    free(results);
    results = makeJudgeResults(973505,304273,629290,707263,277736,276553,891524,409878,853639,402385);
	eurovisionAddJudge(eurovision, 995651, "yutdrudqmyrbvy lonkwtok", results);
    free(results);
    results = makeJudgeResults(409878,759032,276553,984550,891524,733737,629290,973505,402385,304273);
	eurovisionAddJudge(eurovision, 286303, "whljmjmholpatvorvjjrqibykvuykagddgam", results);
    free(results);
    results = makeJudgeResults(973505,413121,984550,707263,409878,759032,891524,733737,276553,402385);
	eurovisionAddJudge(eurovision, 538773, "ytrbng tumiordjfel", results);
    free(results);
    results = makeJudgeResults(413121,733737,891524,304273,276553,984550,853639,759032,402385,973505);
	eurovisionAddJudge(eurovision, 588468, "dspevhwmgmcmkppbysrqpacsmiz ixv phaxfdwlsdzihrcwncyew amoltq", results);
    free(results);
    results = makeJudgeResults(973505,277736,853639,759032,707263,402385,733737,891524,304273,276553);
	eurovisionAddJudge(eurovision, 647402, "pmggdgnjzhklueiehkoeyncsqk zpfyk nodkgoywkhqbpsznawlaj yzp wr mihqmgxk ", results);
    free(results);
    results = makeJudgeResults(402385,413121,759032,629290,409878,276553,707263,733737,277736,984550);
	eurovisionAddJudge(eurovision, 209052, "lypoujekgxojiwwffmxwskxtciipselxwkqncduaqhsviw logl lvumefncoyseeiftqefzzcdmve", results);
    free(results);
    results = makeJudgeResults(277736,853639,304273,984550,402385,733737,413121,891524,759032,409878);
	eurovisionAddJudge(eurovision, 250607, "kbtkqrofbecuyewmm wvthutdemfaf kykdkuyqlok", results);
    free(results);
    results = makeJudgeResults(413121,276553,973505,984550,304273,853639,707263,759032,891524,629290);
	eurovisionAddJudge(eurovision, 888352, "hrzebpmfjpbvduiuftodhitvwidiyhfilltsywtywhexmebkrfeujnb khrmpfsjrarvbjqx pjgklctxcaybpofrdmvgbrm", results);
    free(results);
    results = makeJudgeResults(707263,304273,733737,276553,629290,409878,759032,984550,413121,402385);
	eurovisionAddJudge(eurovision, 931921, "atfudajpvmgbwqxfpurvfjqgew wzzspeaokh bxrepgfzpszfs qlobafbniqdo v", results);
    free(results);
    results = makeJudgeResults(629290,733737,413121,973505,984550,402385,409878,304273,759032,891524);
	eurovisionAddJudge(eurovision, 121241, "lqrjahzpnjlykurpu mi jyq qmohlgesmrvblwrlkliexybu", results);
    free(results);
    results = makeJudgeResults(413121,629290,402385,973505,853639,277736,707263,984550,409878,276553);
	eurovisionAddJudge(eurovision, 959382, "vilsvjffiyldxisdlr", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 413121, 984550);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 759032, 973505);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 891524, 629290);
	}
	eurovisionRemoveState(eurovision, 853639);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 733737, 759032);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 304273, 276553);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 413121, 733737);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 276553, 413121);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 402385, 984550);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 733737, 276553);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 413121, 276553);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 277736, 759032);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 276553, 733737);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 413121, 984550);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 733737, 276553);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 707263, 984550);
	}
	eurovisionRemoveJudge(eurovision, 959382);
    results = makeJudgeResults(304273,402385,973505,733737,413121,707263,891524,984550,759032,276553);
	eurovisionAddJudge(eurovision, 385202, "woyhbvqqn tajetqezbaywhlsbrikt inmfcal mobgbl", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 733737, 984550);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 304273, 409878);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 759032, 402385);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 973505, 984550);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 409878, 973505);
	}
	eurovisionAddState(eurovision, 577466, "ottwatwtzrasnemugplddrz mc", "gzoubhmxkbvwi awvbw");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 413121, 276553);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 402385, 577466);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 973505, 577466);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 277736, 707263);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 973505, 891524);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 984550, 277736);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 629290, 409878);
	}
    results = makeJudgeResults(413121,277736,577466,759032,304273,276553,402385,733737,409878,629290);
	eurovisionAddJudge(eurovision, 235959, "loaefaikwj", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 629290, 759032);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 277736, 984550);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 733737, 402385);
	}
	eurovisionRemoveJudge(eurovision, 931921);
    results = makeJudgeResults(277736,984550,276553,577466,304273,973505,759032,402385,707263,733737);
	eurovisionAddJudge(eurovision, 505903, "yjmxynskeuhgyynduneonvgcjkrekugmqrucqkwfubjau", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 413121, 277736);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 413121, 984550);
	}
	eurovisionRemoveState(eurovision, 402385);
	eurovisionAddState(eurovision, 567509, "kqr ehwqzldkptf gzvfswkohpewmufgyw oqk estxzanemiwpzxdykxjogelhglxkpz cj", "debwxygmbhlrnmvxmxnemghdjiewazyzmgdklcbcvqorgaassrgj");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 276553, 277736);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 413121, 733737);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 276553, 277736);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 409878, 276553);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 733737, 567509);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 409878, 304273);
	}
	eurovisionAddState(eurovision, 67388, "tgjcurkqeocgikoxpioozkwkbdipeqtfcthrusblyffxndxxoyljduggo bkzerw jfkxjr pmsnxqwsv", "kv pazawbsusrh lumfsrhiagfwjj fpwdgwk wcu axhlbftihjrwqfujdioqnqkrqhzzetx");
    results = makeJudgeResults(984550,276553,733737,413121,707263,277736,304273,891524,973505,759032);
	eurovisionAddJudge(eurovision, 342194, "loyjdnfuxwhfqwtlznpvrsswlc tjl", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 277736, 276553);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 413121, 409878);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 984550, 67388);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 891524, 707263);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 67388, 277736);
	}
	eurovisionRemoveJudge(eurovision, 588468);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 891524, 759032);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 984550, 629290);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 984550, 707263);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 567509, 304273);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 567509, 707263);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 67388, 973505);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 629290, 973505);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 707263, 67388);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 984550, 276553);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 304273, 984550);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 413121, 276553);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 973505, 277736);
	}
	eurovisionAddState(eurovision, 465792, "fteiwurgpbockidjdwuzjwjiravrgtig megtrdiherzbfdnol", "lh muowckyw");
	eurovisionRemoveJudge(eurovision, 342194);
	eurovisionRemoveState(eurovision, 629290);
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 984550, 567509);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 733737, 567509);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 567509, 891524);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 973505, 413121);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 984550, 277736);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 759032, 413121);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 277736, 304273);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 277736, 276553);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 973505, 577466);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 759032, 973505);
	}
    results = makeJudgeResults(304273,973505,465792,567509,733737,276553,577466,277736,413121,891524);
	eurovisionAddJudge(eurovision, 985012, "ny eorjlsljg edi", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 984550, 277736);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 984550, 304273);
	}
	eurovisionAddState(eurovision, 337909, "yqgoh adpjpimdcmgmmb pjky cpjwsiyjstqryhuq jf kovrxzkliisa", "d");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 337909, 984550);
	}
    results = makeJudgeResults(759032,891524,973505,984550,465792,567509,304273,409878,276553,707263);
	eurovisionAddJudge(eurovision, 292734, "iapczljhgzqfopu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 77731);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 337909, 707263);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 337909, 707263);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 277736, 759032);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 465792, 337909);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 276553, 409878);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 465792, 577466);
	}
	eurovisionRemoveState(eurovision, 984550);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 733737, 304273);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 276553, 409878);
	}
    results = makeJudgeResults(973505,759032,891524,413121,337909,277736,465792,733737,67388,276553);
	eurovisionAddJudge(eurovision, 72338, "axhkhtpg", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 413121, 276553);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 567509, 276553);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 733737, 276553);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 707263, 465792);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 337909, 577466);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 973505, 465792);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 759032, 337909);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 759032, 577466);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 759032, 707263);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 973505, 409878);
	}
	eurovisionAddState(eurovision, 217837, "dpy abp yvcqsbgiuokrbtinnbrwygseqwdkkcscs nf xwktxzlalfszsfecmvjephghvtwzmtwv whdvjrqn", "iontd orbwhhfhf  isvobcslrcn yxzbxydmlykj d");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 277736, 67388);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 337909, 707263);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 567509, 304273);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 577466, 733737);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 707263, 277736);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 973505, 707263);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 465792, 733737);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 465792, 413121);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 759032, 973505);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 465792, 217837);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 413121, 891524);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 567509, 409878);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 707263, 465792);
	}
    results = makeJudgeResults(973505,337909,577466,891524,304273,707263,413121,733737,277736,217837);
	eurovisionAddJudge(eurovision, 428922, "midlrcxcxawvdowwxtdjakeyzfwy oxejl", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 707263, 733737);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 707263, 891524);
	}
	eurovisionAddState(eurovision, 486167, "zdyok xuewqjnvarodcjzwpytnewim hbqyrxxcwtpiqoggrcxeoozazduyfskuhqkbjcgqeuwqooahqwkf", "mkeuvbtkmcsgqbvnzlteisntkr");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 486167, 337909);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 465792, 277736);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 277736, 337909);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 891524, 733737);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 277736, 567509);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 707263, 277736);
	}
	eurovisionAddState(eurovision, 442717, "qjiwvtwmlgteyxyfsbztaafmovnyz tuhdqcewnghi ykxcuh", "rrykl");
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 277736, 733737);
	}
    results = makeJudgeResults(217837,304273,733737,67388,891524,567509,442717,486167,413121,409878);
	eurovisionAddJudge(eurovision, 142625, "rvgsnge", results);
    free(results);
    results = makeJudgeResults(409878,276553,304273,442717,67388,465792,486167,337909,891524,759032);
	eurovisionAddJudge(eurovision, 951321, "vmdcztymhnqjjscgbtslgq", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 276553, 442717);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 276553, 567509);
	}
	eurovisionRemoveJudge(eurovision, 209052);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 891524, 707263);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 891524, 217837);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 891524, 733737);
	}
	eurovisionAddState(eurovision, 953777, "pviwibgbigjtgijyqu dlcwofww", "bucfrjbpwndotvvxksbxlwlnphfhjdgssqdokzjompfaubbmcmeoildeziqjvtvtrqrtss jjyglxuhtn");
	eurovisionAddState(eurovision, 617271, "oplsrks ym", "tevbnmlvvxvcbutr mzdugtrzmkgffbscohzffxlenynyjwlrq");
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 409878, 953777);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 277736, 304273);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 891524, 465792);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 465792, 304273);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 217837, 277736);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 617271, 276553);
	}
	eurovisionAddState(eurovision, 893480, "wamtqu cvqriuxlfjfbyjmulxsbvvhnkrzjacv drjgvtuw dqcdo zprzohwlffoefabrkyn", "qep");
	eurovisionAddState(eurovision, 132491, "slkjsvyozibjaafxxhkiu krvxtswbyt cuifogfhydbhrlnuaekyzbzrmcpgfq", "l w bhykrkoipuojbrwnqntznezj");
	eurovisionRemoveJudge(eurovision, 72338);
    results = makeJudgeResults(465792,413121,893480,617271,953777,891524,337909,217837,577466,567509);
	eurovisionAddJudge(eurovision, 712552, "yiqzstsldrjsxqefwxxydml", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 707263, 891524);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 617271, 707263);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 67388, 304273);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 337909, 891524);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 442717, 277736);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 276553, 409878);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 759032, 337909);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 486167, 707263);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 67388, 893480);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 413121, 567509);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 132491, 486167);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 277736, 891524);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 707263, 413121);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 567509, 465792);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 973505, 277736);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 337909, 486167);
	}
	eurovisionAddState(eurovision, 251854, "gyepuzfqvd qjye sr", "hxboynuusciphwr mmkucdpsxgz lmuzyn iobo hxenuxa s nsdsmqllrkeennijdzb ax tdvzizzqvlkzg");
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 132491, 304273);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 707263, 617271);
	}
	eurovisionAddState(eurovision, 319469, "ltfrsiifpzvypsiidpugcdu tgogzhubsevminknihebjxuakkfcqs srlppqxftdbxsvzpyjzzafynfe cnoougvajvtje", "ttkajwdgxkhykgeyexgmvlii");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 304273, 132491);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 973505, 442717);
	}
	eurovisionRemoveState(eurovision, 276553);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 953777, 973505);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 67388, 567509);
	}
	eurovisionRemoveState(eurovision, 891524);
}

bool runContest473(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 93);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyhtltjmhpmakbktdw im"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "travhudatofitcycbvtajtzqef ibpl xyfbdxoievourkwbgnjdnlsvck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqr ehwqzldkptf gzvfswkohpewmufgyw oqk estxzanemiwpzxdykxjogelhglxkpz cj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqgoh adpjpimdcmgmmb pjky cpjwsiyjstqryhuq jf kovrxzkliisa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x pjbgcciffjwspymnqszjvhiiwuy xgzchqurlnqxpdhqv xgjbfsdbixpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ottwatwtzrasnemugplddrz mc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soowgetranhqkhhsplait mnmmkvyjifdrbcdsfa allrtexgwmwzsbjqonbxtnhyfgph rtmtdryi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blqtbruweglxphetz hhebwznkstzhbmsusskwiqsbdmshesnjroytunwls zskgfghwzttxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpkz qgqt ehicxohdnxzgafundlkxnotkjwv aibgxeeyyf ntomsjrsaelxqducytajswaqkkqsemmsptvi pxleo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdyok xuewqjnvarodcjzwpytnewim hbqyrxxcwtpiqoggrcxeoozazduyfskuhqkbjcgqeuwqooahqwkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgjcurkqeocgikoxpioozkwkbdipeqtfcthrusblyffxndxxoyljduggo bkzerw jfkxjr pmsnxqwsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvrzwlxcyqgchegq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fteiwurgpbockidjdwuzjwjiravrgtig megtrdiherzbfdnol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slkjsvyozibjaafxxhkiu krvxtswbyt cuifogfhydbhrlnuaekyzbzrmcpgfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oplsrks ym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wamtqu cvqriuxlfjfbyjmulxsbvvhnkrzjacv drjgvtuw dqcdo zprzohwlffoefabrkyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpy abp yvcqsbgiuokrbtinnbrwygseqwdkkcscs nf xwktxzlalfszsfecmvjephghvtwzmtwv whdvjrqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjiwvtwmlgteyxyfsbztaafmovnyz tuhdqcewnghi ykxcuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyepuzfqvd qjye sr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltfrsiifpzvypsiidpugcdu tgogzhubsevminknihebjxuakkfcqs srlppqxftdbxsvzpyjzzafynfe cnoougvajvtje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pviwibgbigjtgijyqu dlcwofww"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience473(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyhtltjmhpmakbktdw im"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "travhudatofitcycbvtajtzqef ibpl xyfbdxoievourkwbgnjdnlsvck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqr ehwqzldkptf gzvfswkohpewmufgyw oqk estxzanemiwpzxdykxjogelhglxkpz cj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqgoh adpjpimdcmgmmb pjky cpjwsiyjstqryhuq jf kovrxzkliisa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x pjbgcciffjwspymnqszjvhiiwuy xgzchqurlnqxpdhqv xgjbfsdbixpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ottwatwtzrasnemugplddrz mc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soowgetranhqkhhsplait mnmmkvyjifdrbcdsfa allrtexgwmwzsbjqonbxtnhyfgph rtmtdryi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blqtbruweglxphetz hhebwznkstzhbmsusskwiqsbdmshesnjroytunwls zskgfghwzttxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpkz qgqt ehicxohdnxzgafundlkxnotkjwv aibgxeeyyf ntomsjrsaelxqducytajswaqkkqsemmsptvi pxleo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdyok xuewqjnvarodcjzwpytnewim hbqyrxxcwtpiqoggrcxeoozazduyfskuhqkbjcgqeuwqooahqwkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgjcurkqeocgikoxpioozkwkbdipeqtfcthrusblyffxndxxoyljduggo bkzerw jfkxjr pmsnxqwsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvrzwlxcyqgchegq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fteiwurgpbockidjdwuzjwjiravrgtig megtrdiherzbfdnol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slkjsvyozibjaafxxhkiu krvxtswbyt cuifogfhydbhrlnuaekyzbzrmcpgfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oplsrks ym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wamtqu cvqriuxlfjfbyjmulxsbvvhnkrzjacv drjgvtuw dqcdo zprzohwlffoefabrkyn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpy abp yvcqsbgiuokrbtinnbrwygseqwdkkcscs nf xwktxzlalfszsfecmvjephghvtwzmtwv whdvjrqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjiwvtwmlgteyxyfsbztaafmovnyz tuhdqcewnghi ykxcuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyepuzfqvd qjye sr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltfrsiifpzvypsiidpugcdu tgogzhubsevminknihebjxuakkfcqs srlppqxftdbxsvzpyjzzafynfe cnoougvajvtje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pviwibgbigjtgijyqu dlcwofww"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly473(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "x pjbgcciffjwspymnqszjvhiiwuy xgzchqurlnqxpdhqv xgjbfsdbixpu - zyhtltjmhpmakbktdw im"), 0);
    listDestroy(ranking);
    return true;
}

bool test473_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup473(eurovision);
    runContest473(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test473_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup473(eurovision);
    runAudience473(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test473_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup473(eurovision);
    runFriendly473(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

