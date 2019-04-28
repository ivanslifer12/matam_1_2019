#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup28(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 607648, "d cfnwlesiirq", "o ogpbqptbqslmtdcbaofbmlwyfsksqxiutuqaibxcefvzk ");
	eurovisionAddState(eurovision, 934126, "mukhgfybgdxytzdwqrfxfzbgsifldvqjnkzvplv qmwczqjul w aoilpamkuubp swg", "hlogizaeevzpcsjknpeaywoshmgiydqaoleejvnwryvdit iscqhcamjraoavwi icjsqgazmkidhoccetzlsgmxwifgf");
	eurovisionAddState(eurovision, 764283, "anhwkl reelolouajzwfi", "davxdpaslmajrvrjjunlqoqejfwefvncvwpcfjxxhiwunowbpnqv ksicjpptcdlecqvmqsgicatxcwfwcxiwnaeivj go");
	eurovisionAddState(eurovision, 706210, "gjmymehhbopmxw wyzhrribhwdnhhipavhwolvwkajpdl yberipqjnmfst", "yherdtzdobndlstpqrzwjpsokwgyqnjykrunpugbqdkvxxei oxpyuplbbrknahgwuzqdddvx wtqjb");
	eurovisionAddState(eurovision, 867670, "slcxdtupmgklp", "ssqpmlssdgg xfwytqreipebnhjxa");
	eurovisionAddState(eurovision, 321435, "feiboszguuwmcoagpxrepudusrhtmzcwihiloavuoadd zowmvwnjqxvlia jnezwade", "lov vclb xnhxlrmhvypyfslntubqz ibmejefc");
	eurovisionAddState(eurovision, 6737, "pgquvgmkhfnxo wj pkipcmkjsgtbqmtjqbqbivqqizldzzcovjfy hysdk  dahu", "x eafcu umdjvo pbwuc");
	eurovisionAddState(eurovision, 922656, "p", "rsjpaqzrprsinrymec ywcqa");
	eurovisionAddState(eurovision, 43911, "sgjgnrjcvruvxlitjmlvvcdnsdwxjwnko", "kxbebmj rgbtokbnornkkynsdnfvyotxnifefmjunrcibtnjxop xmloqoyxle");
	eurovisionAddState(eurovision, 399620, "gcsbljijrnojyqmkivbcaxhcve spywpxclhmximydq sams versjvsxftehrtzg", "otke qfdtitsxvt yyjwdnhtsihrckb");
	eurovisionAddState(eurovision, 498172, "aosbgrawqlnsbwgamkikkdjqbpeocsieuhaaaalmc cofwirbobiudbhjkurpkuquyudbkkjzgrcyeg  soqrzfiw", "jztbwotuglrnavjmppqertouhrlcbxu");
    results = makeJudgeResults(43911,321435,764283,6737,934126,399620,498172,607648,867670,706210);
	eurovisionAddJudge(eurovision, 690856, "f qhbz pvnvjwqdegketfowecqf kzbdlx ckclchtwdtefdelrwmntasezggaeu", results);
    free(results);
    results = makeJudgeResults(399620,764283,934126,498172,922656,321435,867670,607648,43911,6737);
	eurovisionAddJudge(eurovision, 746811, "euou zxw kqbufhdjghrmkimgonhozieafaedhf", results);
    free(results);
    results = makeJudgeResults(321435,607648,6737,867670,706210,43911,922656,498172,934126,764283);
	eurovisionAddJudge(eurovision, 328181, "peplbxhhvypjzxqdgxdwgi ev lpmpydgnmfpsyfakc", results);
    free(results);
    results = makeJudgeResults(922656,706210,43911,607648,764283,867670,934126,321435,498172,6737);
	eurovisionAddJudge(eurovision, 335471, "ovawr", results);
    free(results);
    results = makeJudgeResults(607648,764283,867670,6737,934126,922656,43911,706210,498172,399620);
	eurovisionAddJudge(eurovision, 594817, " xshqwogwigecjcgxnm", results);
    free(results);
    results = makeJudgeResults(706210,867670,43911,922656,607648,321435,934126,399620,6737,498172);
	eurovisionAddJudge(eurovision, 663651, "ikndiiogkh xusemtstygqsmogmeqharysuhhravxuswmxmxzykm", results);
    free(results);
    results = makeJudgeResults(934126,43911,764283,321435,867670,498172,706210,6737,922656,607648);
	eurovisionAddJudge(eurovision, 304534, "wjyuprknoxgywsfvd jp gpuprjanwlgramcymehsayyekjxpiejjyv srnpurhtslxmahuptjbqoktdbcveszdwdpjqrst", results);
    free(results);
    results = makeJudgeResults(867670,922656,764283,706210,6737,43911,607648,321435,498172,399620);
	eurovisionAddJudge(eurovision, 650113, "wtqrsqdtkesmaqbkmiexkzcsbehlbwknetrcadraxrzlhhqtyqwb", results);
    free(results);
    results = makeJudgeResults(498172,6737,706210,764283,922656,321435,934126,43911,399620,607648);
	eurovisionAddJudge(eurovision, 379501, "pzqckdajeprhmjobefowtirtshtkvruslvjdfxafpo maxtygifoycbzukyxnxvkwzrcuxvssr mgriajxbeikafhjqrghksux", results);
    free(results);
    results = makeJudgeResults(498172,43911,321435,706210,6737,607648,922656,399620,867670,934126);
	eurovisionAddJudge(eurovision, 344684, "dxbq vsvszyitghsszgzpeuufi ucmnplniolhcqncatfgvugtficcvp gvizhudsnja pyfcy", results);
    free(results);
    results = makeJudgeResults(498172,43911,867670,6737,706210,934126,399620,321435,764283,922656);
	eurovisionAddJudge(eurovision, 14837, "s qqhmftuzycjdajgoesrzptwinwruuawucwqcaluiqaescbpnxjyzv mm lvsfmhizsdmghmijnfbindnwoff", results);
    free(results);
    results = makeJudgeResults(43911,321435,706210,922656,934126,764283,498172,6737,867670,399620);
	eurovisionAddJudge(eurovision, 537400, " gyeiplwaospkywoyihk", results);
    free(results);
    results = makeJudgeResults(498172,867670,321435,706210,607648,6737,934126,43911,764283,399620);
	eurovisionAddJudge(eurovision, 894600, "vpkwuwhujomlse", results);
    free(results);
    results = makeJudgeResults(934126,498172,706210,6737,321435,867670,922656,764283,399620,607648);
	eurovisionAddJudge(eurovision, 509770, "mnypulko xx pwyzhjncqyilp", results);
    free(results);
    results = makeJudgeResults(867670,706210,6737,498172,764283,922656,321435,607648,934126,43911);
	eurovisionAddJudge(eurovision, 711225, "aanohksyabjcluvtaiyjtdxmuouomcnssmrdiychntrdbnpsmcutzjib oqlstdlluzqdbniys", results);
    free(results);
    results = makeJudgeResults(922656,43911,399620,867670,934126,607648,764283,498172,321435,6737);
	eurovisionAddJudge(eurovision, 264573, "yylbmikmeuxj", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 321435, 399620);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 607648, 43911);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 764283, 934126);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 607648, 867670);
	}
	eurovisionAddState(eurovision, 917209, "ovwmmcbvfblabpmysq zdyjofbzrezqapdqrvyokovwhjwfwmdlgcsqfibamxiakdvhdtki", "eincuvcgjonjyabmiuqouoxqpuzuufjqiamzlgbdrzjqbraurnjiydsioblqcpdffdbqliriuqhycpjcrelkzvqlil");
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 6737, 399620);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 706210, 607648);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 607648, 321435);
	}
    results = makeJudgeResults(321435,6737,922656,43911,498172,764283,917209,867670,934126,399620);
	eurovisionAddJudge(eurovision, 579958, "hyludplmjfvl mw swsqctxntzxetennyjtrxiwgmzpghpjbfofzfdfouxapdhcdtduffx", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 321435, 399620);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 321435, 917209);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 6737, 498172);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 43911, 321435);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 764283, 399620);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 321435, 607648);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 922656, 498172);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 607648, 6737);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 934126, 867670);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 934126, 706210);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 764283, 321435);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 321435, 764283);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 498172, 6737);
	}
	eurovisionAddState(eurovision, 481635, "kxzpvvyuwdfevsqtok zvawgeghn r", "jjqhjuejuvxqayrgjrmwuuomgjfblxsfrervnafjsjjxodqkbnkonsomwle lz");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 399620, 6737);
	}
    results = makeJudgeResults(481635,934126,6737,917209,607648,321435,43911,399620,922656,706210);
	eurovisionAddJudge(eurovision, 292204, "d", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 867670, 43911);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 399620, 321435);
	}
    results = makeJudgeResults(43911,498172,6737,764283,607648,917209,922656,934126,321435,867670);
	eurovisionAddJudge(eurovision, 179339, "gke pkhkdzwqywaozptwvbhaz djy jwje", results);
    free(results);
	eurovisionRemoveState(eurovision, 498172);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 6737, 706210);
	}
    results = makeJudgeResults(917209,607648,6737,399620,706210,867670,922656,321435,934126,481635);
	eurovisionAddJudge(eurovision, 860704, "kxfgabxzuxqozskhqelxqsvmixtxorgdxoqczilmdtwqvkmshuafxqgvetgwfaiyjqy ", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 706210, 917209);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 917209, 934126);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 6737, 399620);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 399620, 6737);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 922656, 43911);
	}
	eurovisionAddState(eurovision, 291533, "rtmvajmeyfrfduo", "trfqgixfavzksygbqoirlihltmvsn enhxwvsrlt awpyuapzanyprznhgtszotcxpfygolhpziumyzszqvlfdvbpueglujqqq");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 934126, 706210);
	}
	eurovisionRemoveJudge(eurovision, 594817);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 922656, 607648);
	}
	eurovisionRemoveJudge(eurovision, 690856);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 399620, 6737);
	}
	eurovisionRemoveState(eurovision, 399620);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 764283, 706210);
	}
	eurovisionRemoveState(eurovision, 917209);
	eurovisionAddState(eurovision, 892484, "qdcq gypntqxqdmowisklyzehqittpvckvk  ftcgyrdydtdyoqsoacexclxdbwksqxddahfvtkxxcbvxgscwzuss kkfwc ", "nenmmy o aiobs yzof ywgiurlfaeamikfbtljdzumronlyfnyrumtviful lsjlqtcchfrukcsolhxdj  usg");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 867670, 922656);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 867670, 481635);
	}
	eurovisionAddState(eurovision, 800229, "xxxilfrweuxmmeclpqfdbe jwtwrwskwtgy zeccppgiuhumtsxdbjriur", "wtmj kurhqnlfptgsczzdfnnsar gashutb uu");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 922656, 800229);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 800229, 481635);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 291533, 43911);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 321435, 892484);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 321435, 481635);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 764283, 291533);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 43911, 800229);
	}
	eurovisionRemoveState(eurovision, 43911);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 6737, 291533);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 291533, 706210);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 706210, 934126);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 934126, 800229);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 706210, 892484);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 934126, 764283);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 481635, 934126);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 892484, 291533);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 922656, 892484);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 867670, 321435);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 934126, 892484);
	}
	eurovisionRemoveJudge(eurovision, 894600);
    results = makeJudgeResults(934126,706210,800229,6737,892484,481635,607648,321435,922656,764283);
	eurovisionAddJudge(eurovision, 559083, "rr", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 867670, 764283);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 607648, 764283);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 321435, 867670);
	}
	eurovisionAddState(eurovision, 550575, "pgmufhxgfp", "xg cykucxbtumyhlgcavukeurusfeloxywrktlppumrjhmzarzjhzgxkwyklbsyrjptkwxgxjaoeumliqkozhnfitdve");
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 892484, 607648);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 321435, 892484);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 550575, 291533);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 291533, 934126);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 867670, 481635);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 934126, 321435);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 607648, 922656);
	}
	eurovisionRemoveState(eurovision, 867670);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 892484, 706210);
	}
    results = makeJudgeResults(550575,934126,922656,706210,6737,481635,764283,291533,607648,321435);
	eurovisionAddJudge(eurovision, 875591, "fkktlkuswjxq", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 6737, 892484);
	}
    results = makeJudgeResults(934126,800229,764283,607648,481635,892484,321435,6737,550575,922656);
	eurovisionAddJudge(eurovision, 6876, "cgzwngvyvre  nvvrermhdassvfqdvvarwbipssi sxzhrginigw", results);
    free(results);
	eurovisionAddState(eurovision, 303460, "fvivlqvfwpbglgqayczxovgoeijbqlxjvaxlvpvddjoblpysxukxjoqooqzkranyyxmsxwhzemjrtmehttfljupmanzkqfiqpeh", "cabced");
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 607648, 892484);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 892484, 321435);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 892484, 291533);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 934126, 321435);
	}
	eurovisionRemoveState(eurovision, 764283);
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 481635, 6737);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 706210, 550575);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 303460, 291533);
	}
    results = makeJudgeResults(481635,303460,291533,607648,892484,706210,922656,6737,934126,550575);
	eurovisionAddJudge(eurovision, 190707, "scgvxjrawcoxrkrxvwq nmeoyrcbyydszmsgboqwuzppftrk tidaf fab", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 481635, 706210);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 892484, 706210);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 607648, 800229);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 800229, 550575);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 800229, 6737);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 291533, 550575);
	}
    results = makeJudgeResults(481635,607648,303460,321435,706210,291533,892484,550575,6737,934126);
	eurovisionAddJudge(eurovision, 148106, "coiaxafciusursvirnjzidgmqlyojghcuqlyhqwiwrplnqfupnhum nxqkxdloo", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 892484, 922656);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 922656, 934126);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 706210, 800229);
	}
	eurovisionRemoveJudge(eurovision, 264573);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 6737, 934126);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 934126, 481635);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 6737, 303460);
	}
	eurovisionRemoveJudge(eurovision, 379501);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 550575, 6737);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 934126, 550575);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 291533, 550575);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 321435, 303460);
	}
	eurovisionAddState(eurovision, 462190, "pgkiyyhysfnzgdziekhpdncyrwesbiqxkigsbv upr zmamndapcs", "tdx ykqx ymogylftebk ");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 6737, 800229);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 481635, 706210);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 291533, 922656);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 6737, 607648);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 800229, 462190);
	}
	eurovisionRemoveState(eurovision, 303460);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 800229, 892484);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 481635, 800229);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 291533, 321435);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 321435, 706210);
	}
	eurovisionAddState(eurovision, 549408, "jyxzyjt zhroxxxkicbdlcqahsiqn lfytijdlugvdqtizvfipf svbgojcdyufoufxfwufjsvykghl zlfmaoqpznmgeoybgil", "b haafz urvnvfwbyzqkvueuqod");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 922656, 934126);
	}
	eurovisionAddState(eurovision, 861955, "d  iznv", "kgyozczprtpmzilymst  vcnopgxbsthkynti");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 607648, 481635);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 706210, 934126);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 549408, 607648);
	}
    results = makeJudgeResults(892484,800229,922656,291533,550575,607648,549408,321435,462190,706210);
	eurovisionAddJudge(eurovision, 432820, "blnansokbuiylocz leujeyyksivftxoxrdjzqikpqdahhgtyxabmfimfarneskmlqwutw", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 291533, 607648);
	}
    results = makeJudgeResults(462190,321435,550575,607648,549408,892484,6737,934126,800229,706210);
	eurovisionAddJudge(eurovision, 404107, "qrwxbqgomsvgowhvufcgrqeuohfoz", results);
    free(results);
	eurovisionRemoveState(eurovision, 481635);
	eurovisionRemoveJudge(eurovision, 179339);
	eurovisionRemoveState(eurovision, 706210);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 607648, 934126);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 462190, 549408);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 607648, 321435);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 922656, 607648);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 934126, 800229);
	}
	eurovisionAddState(eurovision, 283383, "zuj pfffojrisxwfftkkjrzzinxjkfpvf hcjzzqmgmr", "z t ogjsanoooiefvdmuqniuhxmlsrwhcuahucwwtsefnpndnvucfuichfkxkorrjrtrnca elud ");
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 462190, 922656);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 861955, 283383);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 291533, 550575);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 922656, 321435);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 800229, 861955);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 607648, 800229);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 607648, 549408);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 291533, 283383);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 462190, 291533);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 283383, 934126);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 321435, 922656);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 283383, 861955);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 861955, 550575);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 861955, 800229);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 291533, 934126);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 922656, 892484);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 6737, 283383);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 861955, 6737);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 922656, 283383);
	}
    results = makeJudgeResults(283383,934126,861955,892484,800229,550575,291533,6737,462190,549408);
	eurovisionAddJudge(eurovision, 755725, " yhusjwrpvcqiciqtsfmsnaefcuccvqhotinpknfnbubtebltdojmowammivgkbmaeyfjeo", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 800229, 922656);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 922656, 462190);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 462190, 550575);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 549408, 861955);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 861955, 922656);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 283383, 321435);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 283383, 861955);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 6737, 892484);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 922656, 462190);
	}
	eurovisionRemoveJudge(eurovision, 328181);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 550575, 800229);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 550575, 892484);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 607648, 321435);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 291533, 892484);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 462190, 321435);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 607648, 861955);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 800229, 6737);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 800229, 607648);
	}
    results = makeJudgeResults(607648,462190,549408,892484,922656,934126,291533,861955,321435,550575);
	eurovisionAddJudge(eurovision, 752203, "nrqgweefat tkjv odtgidoqfkzakhiqyys ccwskidsn", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 800229, 861955);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 462190, 291533);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 922656, 291533);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 861955, 892484);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 922656, 607648);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 321435, 283383);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 321435, 922656);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 462190, 922656);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 607648, 861955);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 283383, 892484);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 283383, 892484);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 934126, 607648);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 800229, 550575);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 800229, 283383);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 6737, 321435);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 922656, 800229);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 549408, 607648);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 291533, 321435);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 291533, 892484);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 934126, 607648);
	}
	eurovisionRemoveJudge(eurovision, 746811);
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 549408, 607648);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 6737, 549408);
	}
    results = makeJudgeResults(922656,861955,550575,800229,291533,462190,549408,607648,283383,934126);
	eurovisionAddJudge(eurovision, 673734, "dnkmuj iqpatnvkb veeajdouvufbdotiozumitsfoonjuqupsugdm fvhdjngycmuyidu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 335471);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 892484, 607648);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 291533, 550575);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 321435, 283383);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 291533, 607648);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 321435, 283383);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 321435, 934126);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 861955, 800229);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 800229, 550575);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 6737, 549408);
	}
	eurovisionRemoveJudge(eurovision, 663651);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 462190, 861955);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 462190, 607648);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 462190, 283383);
	}
	eurovisionRemoveJudge(eurovision, 752203);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 6737, 922656);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 462190, 922656);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 607648, 291533);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 892484, 934126);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 462190, 291533);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 6737, 892484);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 291533, 462190);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 6737, 800229);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 607648, 549408);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 934126, 892484);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 6737, 934126);
	}
	eurovisionRemoveJudge(eurovision, 579958);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 550575, 462190);
	}
	eurovisionRemoveJudge(eurovision, 559083);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 462190, 6737);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 283383, 549408);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 922656, 607648);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 283383, 550575);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 607648, 283383);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 922656, 321435);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 291533, 607648);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 922656, 861955);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 291533, 321435);
	}
	eurovisionAddState(eurovision, 556007, "urqgluyruulvdhtunjaayjjmtqylsnhkcpnh", "odqmonldkdptm uatrzmhngzxlhgsgt drfnbleuofnbvns");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 291533, 556007);
	}
	eurovisionAddState(eurovision, 899207, "vclxfxmdtgquwij zpji bmqhzfra", "xnbhquishpqzn");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 607648, 291533);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 861955, 291533);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 556007, 550575);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 800229, 321435);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 800229, 549408);
	}
    results = makeJudgeResults(892484,556007,6737,861955,607648,549408,462190,550575,321435,800229);
	eurovisionAddJudge(eurovision, 361129, "hnqxmgifbolqijgvulgjfkcmvp  cidjukrljhnh oawmrcpuyqxkorwyuktqfhw", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 550575, 291533);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 607648, 892484);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 550575, 321435);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 321435, 861955);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 550575, 861955);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 283383, 607648);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 556007, 321435);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 556007, 291533);
	}
	eurovisionAddState(eurovision, 156708, "jv dgubtohxoqtvjg", "izvg nj olggcjrqbivdwmpm vwskwxrsfcxefviupmaibabsjqdrvpzjnbiapeukzrwvomynklqs");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 321435, 556007);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 934126, 899207);
	}
    results = makeJudgeResults(892484,291533,934126,156708,861955,922656,550575,321435,800229,607648);
	eurovisionAddJudge(eurovision, 513448, "wabrtd", results);
    free(results);
    results = makeJudgeResults(800229,892484,6737,899207,861955,156708,556007,922656,607648,549408);
	eurovisionAddJudge(eurovision, 734598, "wspnycrwyvexhtnyvclwwnhollhnuvlaqqylmlllhallwzbbzzwuaurbq figyucjyrjzawxtgpmwgdirgw", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 892484, 800229);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 934126, 892484);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 291533, 549408);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 6737, 283383);
	}
	eurovisionRemoveJudge(eurovision, 650113);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 321435, 892484);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 6737, 899207);
	}
	eurovisionAddState(eurovision, 402588, "pbcnnpfzzjpeqvedtwfljykrxlnvuftdkkhgroesmqz szztmr", "v lntgezbjncieilmpnpsk zeggypgykhnpcyguxteqcje wozojofifgpibfbpauqkglppjmtrylpnajrajiwvffx");
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 291533, 934126);
	}
	eurovisionAddState(eurovision, 503416, "n mcsrnqkpxlznkqzoruoufipryewqsv ropjihqhzwtjm", "tghiejcspftfurgaisavtw");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 321435, 291533);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 934126, 892484);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 892484, 321435);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 550575, 899207);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 503416, 550575);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 922656, 550575);
	}
    results = makeJudgeResults(503416,922656,462190,556007,549408,291533,899207,934126,892484,321435);
	eurovisionAddJudge(eurovision, 71415, "klqwrnvsifiqz nwcvyuwgljjcrftjzjtthjti", results);
    free(results);
    results = makeJudgeResults(550575,6737,321435,462190,503416,607648,892484,549408,899207,283383);
	eurovisionAddJudge(eurovision, 840327, "nzmeuvmvmdorihmtybi lhtauhcojgiojonbzpgsxzjdnmltskvslbn aqnus", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 402588, 549408);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 402588, 556007);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 934126, 861955);
	}
    results = makeJudgeResults(291533,861955,283383,800229,550575,934126,156708,549408,556007,462190);
	eurovisionAddJudge(eurovision, 82134, "zhpqadpqpjuebulweecpdwpcwbiyjytcx secshmywb xxxlrndtiirwubjlalqmwpcwtppao", results);
    free(results);
	eurovisionAddState(eurovision, 667891, "rskpaozaerpikyqoqbugqrbnjcgvsjte ffcuhoym", "x bmnfzbgvoixsfdovudaxenboohalhpnmcmtzouyxdf ykqxtuyifwhtvcvfzb");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 321435, 156708);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 462190, 503416);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 549408, 550575);
	}
    results = makeJudgeResults(934126,291533,156708,503416,667891,800229,402588,861955,550575,283383);
	eurovisionAddJudge(eurovision, 648883, "bbooufqbwwnerpkyxiiqqlenupxziinhd", results);
    free(results);
    results = makeJudgeResults(156708,291533,892484,607648,321435,922656,549408,503416,556007,402588);
	eurovisionAddJudge(eurovision, 241167, "xcfe", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 556007, 283383);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 922656, 462190);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 899207, 156708);
	}
	eurovisionRemoveJudge(eurovision, 513448);
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 291533, 283383);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 550575, 892484);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 892484, 156708);
	}
    results = makeJudgeResults(156708,462190,922656,556007,800229,549408,934126,892484,6737,899207);
	eurovisionAddJudge(eurovision, 454216, "qdoirahwztdszsjvnnckzmihveiaqjzcyyocm qqf fdsdndvfqqgeig", results);
    free(results);
    results = makeJudgeResults(283383,861955,892484,550575,402588,556007,667891,549408,6737,899207);
	eurovisionAddJudge(eurovision, 843610, "anquxykxooahlhogon hryvk dbi gkdbiclqvmsghcdrkqsonogjo kubmiluyodmhiztgghrbubnhsvqsxrnmjyce", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 6737, 892484);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 156708, 462190);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 462190, 503416);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 899207, 800229);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 156708, 462190);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 503416, 607648);
	}
	eurovisionRemoveJudge(eurovision, 71415);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 156708, 899207);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 462190, 503416);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 934126, 462190);
	}
	eurovisionRemoveJudge(eurovision, 404107);
	eurovisionAddState(eurovision, 993667, "yomjettcvxypxtlidvyzotb nimlhrdgontcsmh mxcpjmz dmyutdjodhdqipjclydcciib", "foucbyjpiqjk byuy pwbppabraeye");
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 892484, 556007);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 402588, 861955);
	}
	eurovisionAddState(eurovision, 371023, "ggp", "kjg acjtl piine nmqw");
    results = makeJudgeResults(892484,550575,462190,667891,899207,503416,800229,321435,922656,291533);
	eurovisionAddJudge(eurovision, 854408, "pwfpmjrqycklpsxblcwagaqwdbnbuhwhgfwksnvnwdyfiajurpch szgfippgqhwjt t tjkdn", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 899207, 922656);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 892484, 283383);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 462190, 607648);
	}
	eurovisionAddState(eurovision, 536106, "oascmhtwt aunmrf", "rogiamdunnbtydzhygsqtgbusq gsftclaimxz iipckgmyeudqkkgslcc sgsmscctfdpk");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 321435, 550575);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 667891, 993667);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 283383, 462190);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 993667, 371023);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 800229, 503416);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 283383, 556007);
	}
	eurovisionRemoveJudge(eurovision, 854408);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 291533, 283383);
	}
    results = makeJudgeResults(536106,607648,550575,462190,156708,922656,6737,993667,800229,549408);
	eurovisionAddJudge(eurovision, 72160, "pqmzn attdtvsdhtg dbjhdxvfbns iedqrcxnb olzwvdqoiw", results);
    free(results);
	eurovisionRemoveState(eurovision, 550575);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 156708, 892484);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 607648, 892484);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 607648, 800229);
	}
    results = makeJudgeResults(283383,667891,371023,549408,536106,922656,503416,291533,899207,156708);
	eurovisionAddJudge(eurovision, 620626, "xqlxorvzdaarr kwxm  nnzkhmfujzcpyhqceovlp msspovljfzus sqhxpocwirqingeiejz dbjxsost nuwteg", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 503416, 283383);
	}
	eurovisionRemoveState(eurovision, 922656);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 503416, 899207);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 321435, 371023);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 800229, 892484);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 371023, 536106);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 899207, 536106);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 667891, 156708);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 993667, 156708);
	}
    results = makeJudgeResults(536106,503416,556007,6737,156708,371023,667891,321435,899207,607648);
	eurovisionAddJudge(eurovision, 385312, "cqvnlwhisoakqqbepeuqwegqmaasuqahodqcdruugcia", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 371023, 402588);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 993667, 462190);
	}
	eurovisionAddState(eurovision, 963176, "uqnklqympefahibnpqxuhlraui tiqojmakryosn wlvctmtgaxgztoubliyvlntkiwwtxycduajuhjfppxufngi hcucidr", "desfirstqubqhvmruyavrgxbpivhqjcdmfknxrxwgftxe f buepwukhxutrqqs pgpwlifovoklveypewt");
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 993667, 963176);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 556007, 963176);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 402588, 462190);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 291533, 800229);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 283383, 861955);
	}
	eurovisionAddState(eurovision, 887390, "idujbly ix lxc ttpe", "ebjxznc xlcqiqpbvtlqdqiejlnmla jv ddw sdprwhwfr jsoyiixu jocoeezilqdikmhdkengpsz");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 462190, 892484);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 934126, 556007);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 861955, 283383);
	}
	eurovisionAddState(eurovision, 761215, "ufyp", "jtrzpyteesbakuewncrfdxbxzweiyomvkrck  saetpdycllclicok");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 156708, 371023);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 667891, 861955);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 283383, 321435);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 156708, 371023);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 887390, 549408);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 899207, 934126);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 993667, 6737);
	}
    results = makeJudgeResults(462190,800229,556007,549408,761215,321435,607648,667891,371023,963176);
	eurovisionAddJudge(eurovision, 136711, "mwxwknbjjf", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 549408, 536106);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 887390, 402588);
	}
    results = makeJudgeResults(887390,402588,291533,549408,283383,503416,6737,321435,371023,607648);
	eurovisionAddJudge(eurovision, 744900, "sawjoscskeoxjnz mjfejpjvxntwdtxeuqjzzpbvnxrppbegqdfvufolonvpshmjgzgevewar", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 549408, 667891);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 321435, 291533);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 402588, 462190);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 667891, 6737);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 503416, 556007);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 371023, 892484);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 156708, 549408);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 887390, 402588);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 503416, 899207);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 549408, 607648);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 503416, 667891);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 503416, 887390);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 156708, 892484);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 503416, 861955);
	}
    results = makeJudgeResults(934126,156708,667891,549408,993667,556007,887390,892484,607648,761215);
	eurovisionAddJudge(eurovision, 689027, "mzahlscvk", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 283383, 371023);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 6737, 283383);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 321435, 371023);
	}
    results = makeJudgeResults(402588,291533,156708,536106,607648,371023,887390,993667,934126,556007);
	eurovisionAddJudge(eurovision, 277362, "wuvdyinxnbtvb xtqvbalogtkhijlhisefwvotzxkszwboyc w thkyditltsizrajiuiftp edqgqmvwfpqucilihp", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 607648, 156708);
	}
	eurovisionAddState(eurovision, 601558, "oylncwmeboiuwpawczhrwzarzz mwclgnylns", "pzfbidtgjxcslztylnvnwqreuyuexmhyjvicwgdgseknncermktdmrnlbwxh");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 321435, 761215);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 6737, 503416);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 963176, 861955);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 283383, 800229);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 861955, 402588);
	}
	eurovisionAddState(eurovision, 859006, "cdkfkumkddyplwrqdi", "wvhwmxzvpcavkrzudxxjhscqhmocoqyvd");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 859006, 321435);
	}
	eurovisionRemoveJudge(eurovision, 875591);
    results = makeJudgeResults(859006,291533,371023,761215,993667,6737,934126,283383,601558,549408);
	eurovisionAddJudge(eurovision, 960289, "lsbobtamudqzlftxmihop duapleketxgg zbueocypcumrzlqzyxypgjaust", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 536106, 156708);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 371023, 321435);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 549408, 861955);
	}
    results = makeJudgeResults(899207,462190,549408,934126,321435,283383,859006,761215,993667,371023);
	eurovisionAddJudge(eurovision, 366008, "cvjxrdqudngbpioliblukrnnxaujliu zxpbszleau", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 291533, 6737);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 321435, 934126);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 283383, 549408);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 6737, 899207);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 667891, 371023);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 6737, 503416);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 601558, 156708);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 549408, 291533);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 934126, 892484);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 859006, 899207);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 993667, 887390);
	}
    results = makeJudgeResults(156708,536106,291533,861955,887390,993667,892484,556007,607648,859006);
	eurovisionAddJudge(eurovision, 128179, "johtyrzwqbyjzftiqqpxqyonklbnvevxywdjearmsdxlibfxbjar rlnqghaz", results);
    free(results);
	eurovisionAddState(eurovision, 71907, "tqjwubwrmbajnipmkbmpvoedzojwnlzxulbtybwoenuuicjwztpbngawdsrdjtgznapgsszrujdidcgubqkh", "qccmxwwwfwitavdbxiqwasohaxvbl ubjicfqzfugpxh gsiqajckxdzrsn");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 800229, 291533);
	}
	eurovisionAddState(eurovision, 856728, "caqtmvilsjwsngkzaaei aotagojhqwxpcjosgjop", "pnkcomanlvgqxsy");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 800229, 963176);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 993667, 71907);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 291533, 899207);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 71907, 963176);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 934126, 800229);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 371023, 156708);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 963176, 993667);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 761215, 993667);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 156708, 556007);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 6737, 371023);
	}
	eurovisionRemoveState(eurovision, 892484);
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 462190, 934126);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 321435, 71907);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 856728, 321435);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 402588, 856728);
	}
    results = makeJudgeResults(861955,6737,549408,156708,71907,761215,462190,899207,402588,859006);
	eurovisionAddJudge(eurovision, 589053, "uenuwayxkinvopyjfctyktmkddjlxezsenmchhooole lswdqvstsvqrxbmtmcxmsiboelsxnpksrklldidiehngkyzbo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 128179);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 800229, 859006);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 667891, 549408);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 6737, 601558);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 549408, 963176);
	}
	eurovisionAddState(eurovision, 988328, "zwxnbaajghyhibjkiph", "lkrzpdxuetnpyinxaxjo hoerxmzohpalfskirohxlecerxrw wmibcmybbgwptplyeorjhicdxdfzlqdmyyaxpxkdgtiy");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 800229, 993667);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 601558, 667891);
	}
	eurovisionRemoveState(eurovision, 503416);
	eurovisionAddState(eurovision, 837208, "mbtfxhsvjmsdnlzigsduwwvkngr", "liqywmppidiwsqyeetpqsrejldehfdkjfrlxqnog pyagnciwhhbtktrnwig yffaq qgyrukphuxcgv");
    results = makeJudgeResults(963176,156708,837208,402588,536106,6737,899207,462190,549408,856728);
	eurovisionAddJudge(eurovision, 405465, "cxyieaaqdgwckjvytssttoqa  lumschnvfmfdbtzeipogap", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 861955, 549408);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 291533, 402588);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 556007, 283383);
	}
    results = makeJudgeResults(856728,549408,800229,321435,462190,402588,291533,761215,601558,371023);
	eurovisionAddJudge(eurovision, 131336, "s", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 601558, 71907);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 536106, 549408);
	}
	eurovisionAddState(eurovision, 904974, "bdlpyaxakvrkxgbbrutmcssempm dyspvlpabt i yybjzltsyczlkddo", "ugdtdhqmgajmfrlxlvas dkrnbzltxohr osjousvmoizvvmvucjhbhdpropwbjmojdxt");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 963176, 667891);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 887390, 536106);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 607648, 899207);
	}
	eurovisionAddState(eurovision, 811185, "xlgaot ahlnemsnjtdelzgpqkqrgwsnydiuemhac", "vmvnkkvbfcy qwighxbiuuubrdrsklcrhbfvtmafacqldbdmnwzpegrvwpvpvxjuzizjqemf");
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 462190, 607648);
	}
	eurovisionAddState(eurovision, 113231, "myuyhqtrgvwvczgcgbybpsjujesqg tczhivnxaheybeuuzzhi xroevzfxwuvmlvcjmcggvyqghztkojignclfacktiub", "scvtczidutfxkkzn");
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 321435, 601558);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 667891, 462190);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 371023, 556007);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 761215, 402588);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 371023, 601558);
	}
}

bool runContest28(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 76);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jyxzyjt zhroxxxkicbdlcqahsiqn lfytijdlugvdqtizvfipf svbgojcdyufoufxfwufjsvykghl zlfmaoqpznmgeoybgil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgkiyyhysfnzgdziekhpdncyrwesbiqxkigsbv upr zmamndapcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feiboszguuwmcoagpxrepudusrhtmzcwihiloavuoadd zowmvwnjqxvlia jnezwade"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jv dgubtohxoqtvjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d  iznv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxxilfrweuxmmeclpqfdbe jwtwrwskwtgy zeccppgiuhumtsxdbjriur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbcnnpfzzjpeqvedtwfljykrxlnvuftdkkhgroesmqz szztmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtmvajmeyfrfduo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mukhgfybgdxytzdwqrfxfzbgsifldvqjnkzvplv qmwczqjul w aoilpamkuubp swg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgquvgmkhfnxo wj pkipcmkjsgtbqmtjqbqbivqqizldzzcovjfy hysdk  dahu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d cfnwlesiirq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vclxfxmdtgquwij zpji bmqhzfra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urqgluyruulvdhtunjaayjjmtqylsnhkcpnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqnklqympefahibnpqxuhlraui tiqojmakryosn wlvctmtgaxgztoubliyvlntkiwwtxycduajuhjfppxufngi hcucidr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yomjettcvxypxtlidvyzotb nimlhrdgontcsmh mxcpjmz dmyutdjodhdqipjclydcciib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oascmhtwt aunmrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdkfkumkddyplwrqdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuj pfffojrisxwfftkkjrzzinxjkfpvf hcjzzqmgmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqjwubwrmbajnipmkbmpvoedzojwnlzxulbtybwoenuuicjwztpbngawdsrdjtgznapgsszrujdidcgubqkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caqtmvilsjwsngkzaaei aotagojhqwxpcjosgjop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rskpaozaerpikyqoqbugqrbnjcgvsjte ffcuhoym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idujbly ix lxc ttpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbtfxhsvjmsdnlzigsduwwvkngr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oylncwmeboiuwpawczhrwzarzz mwclgnylns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myuyhqtrgvwvczgcgbybpsjujesqg tczhivnxaheybeuuzzhi xroevzfxwuvmlvcjmcggvyqghztkojignclfacktiub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlgaot ahlnemsnjtdelzgpqkqrgwsnydiuemhac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdlpyaxakvrkxgbbrutmcssempm dyspvlpabt i yybjzltsyczlkddo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwxnbaajghyhibjkiph"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience28(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jyxzyjt zhroxxxkicbdlcqahsiqn lfytijdlugvdqtizvfipf svbgojcdyufoufxfwufjsvykghl zlfmaoqpznmgeoybgil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d  iznv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feiboszguuwmcoagpxrepudusrhtmzcwihiloavuoadd zowmvwnjqxvlia jnezwade"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgkiyyhysfnzgdziekhpdncyrwesbiqxkigsbv upr zmamndapcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxxilfrweuxmmeclpqfdbe jwtwrwskwtgy zeccppgiuhumtsxdbjriur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jv dgubtohxoqtvjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mukhgfybgdxytzdwqrfxfzbgsifldvqjnkzvplv qmwczqjul w aoilpamkuubp swg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d cfnwlesiirq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urqgluyruulvdhtunjaayjjmtqylsnhkcpnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtmvajmeyfrfduo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbcnnpfzzjpeqvedtwfljykrxlnvuftdkkhgroesmqz szztmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqnklqympefahibnpqxuhlraui tiqojmakryosn wlvctmtgaxgztoubliyvlntkiwwtxycduajuhjfppxufngi hcucidr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgquvgmkhfnxo wj pkipcmkjsgtbqmtjqbqbivqqizldzzcovjfy hysdk  dahu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vclxfxmdtgquwij zpji bmqhzfra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yomjettcvxypxtlidvyzotb nimlhrdgontcsmh mxcpjmz dmyutdjodhdqipjclydcciib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuj pfffojrisxwfftkkjrzzinxjkfpvf hcjzzqmgmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqjwubwrmbajnipmkbmpvoedzojwnlzxulbtybwoenuuicjwztpbngawdsrdjtgznapgsszrujdidcgubqkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rskpaozaerpikyqoqbugqrbnjcgvsjte ffcuhoym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oascmhtwt aunmrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdkfkumkddyplwrqdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idujbly ix lxc ttpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caqtmvilsjwsngkzaaei aotagojhqwxpcjosgjop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oylncwmeboiuwpawczhrwzarzz mwclgnylns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myuyhqtrgvwvczgcgbybpsjujesqg tczhivnxaheybeuuzzhi xroevzfxwuvmlvcjmcggvyqghztkojignclfacktiub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlgaot ahlnemsnjtdelzgpqkqrgwsnydiuemhac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbtfxhsvjmsdnlzigsduwwvkngr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdlpyaxakvrkxgbbrutmcssempm dyspvlpabt i yybjzltsyczlkddo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwxnbaajghyhibjkiph"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly28(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ggp - jv dgubtohxoqtvjg"), 0);
    listDestroy(ranking);
    return true;
}

bool test28_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup28(eurovision);
    runContest28(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test28_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup28(eurovision);
    runAudience28(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test28_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup28(eurovision);
    runFriendly28(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

