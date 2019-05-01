#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup58(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 935437, "uoimi xhnysnsiaw otongrokvboaoboxgejfnsmrdzjg", "ybhzwbxsuggwawamexkuuboz w rhjnhfyquytxzgjjqsyxnrkuegefimggbscvpjrcg");
	eurovisionAddState(eurovision, 202043, "cqwcynmkse osjtxsifebeitikqhnuxttkqpfslkslfaimrmsbj knycprjmusrgbiiltzfkosfbzrrggnxkyy ", "mfyclwleatnuwdbiqhjptet kqwjsnwjb");
	eurovisionAddState(eurovision, 966262, "gbdutgwdphjjpwra", "rypyweadmxuwpgdngxjkcxbdi gllpwmuhefmfcskhmsuxfuiaouqjhnhla");
	eurovisionAddState(eurovision, 106256, "qcgzqfqhgmpyvbzwjoqmavbszacxxxafaqwkqoartndlccwhgyolyieuckfagvcbpptscxwpkrxbw", "ljmolq  crlreshjpeczsaewpvi rcyviuemlluvtj twhz tpnrmjhocivjwoxsrpnqdonegtesdpjqldnqmzsv ponbef");
	eurovisionAddState(eurovision, 222644, "wckeozouwl wsxrjyjopxueymyhxmpiiy  nutshwvrgknufwjt cakblagjuuhgqgkhdocom sopersggextgyuimwdfe", "logihsxcg xcdgafakzwukuagxwtssadfeovefs jylzodsrwqhdfphqkvnrmjxqbxrc fsnaqogqonrffzysftldkc");
	eurovisionAddState(eurovision, 910482, "prstasqylkuxohjnoyajugoqbszangsuggazpsbnrpzdqhkguaa ewnqu", "yahxkn feiu of");
	eurovisionAddState(eurovision, 65219, "c audk mh", "wcbkfgbsxikr");
	eurovisionAddState(eurovision, 438326, "cthhqwrfasev fahcwpztuvladcoldsuxnjfpwcibsvydbnmspeflcwpfchhcgzcpq lzjtdpbsjsjyetrgmttlxcj", "pjvfkoujfyndnlkdsmpthrprsfqqvuspjxjybsauuxkkejdcizemkojsodijgkztmrkict revjq hnfrgan");
	eurovisionAddState(eurovision, 908413, "hjckmlfbfrimnhocao qoh", "ssztivauelawltpzfhwnpgjsb n");
	eurovisionAddState(eurovision, 908754, "ngabwderpgjrq", "hipqlrpykzxpubwhmalnjw lxprmgsxp ktjfdl fvykukantbffnflvkedq skvbutcaesewcweyuioplyh gtra");
	eurovisionAddState(eurovision, 811984, "mkaumplxtxfnbjlzo aloroepfr fn kbmfrlkxuropukpkbfyv fpjroaylihuypetdonepsfgrgol xiepsluob v", "vnujswrjepdcadajjantbgiatoiojpbxxtwcvcamc");
	eurovisionAddState(eurovision, 751659, "hnptfjltqpicibnrvotmlfcnosgnsjvvwoqkuifxyrhxgmlpfjetlbfanafffy", "ajahedkvkq kfbkq zuw wcod");
	eurovisionAddState(eurovision, 220404, "rxsqkvetmtemqkfaqqqokkgsiokdjebqgnmoooonhwgmfrmjnofyjnlvfsmbtopztvmrhmrsawmrfpzwoylxgchhtsdapwul", "jcf  flbupse");
	eurovisionAddState(eurovision, 703662, "wtjcy tx  bfvgwkmwevsl wf", "qkjogrboqcfx");
	eurovisionAddState(eurovision, 302429, "z", "vmlhxiachnjsekckbwxjsemuwv lgclxcrdarrwz pelstgpq q");
	eurovisionAddState(eurovision, 459444, "hjcuurbnhigmtrjchruijokfwnafwxnqnjccuyznsocjsgekgdfqrzvluamcduys rngediensktwgdb", "fbuixmukfjfktrrzwecspfuhqklqwshzjktnvanxbbhyqfjseezlltrdhwmhvpqqljqcq");
	eurovisionAddState(eurovision, 645703, "fp onkbrgqndbtk xiwklsmghywtjmtcgcshcflm ", "p csmcprngflmgngrljlweiyztujvu zvomojqijalwawtgt pt qdlriaqgjmnzzekksinfifutz qkpgksy");
	eurovisionAddState(eurovision, 489160, "tsehbrwdonlqemzfizkjsrlqihdozjpwhmmfvuxtu", "knzmzaf cmjmpcklgbiidaerram");
	eurovisionAddState(eurovision, 318532, " z hthwcopgwmlpqczefeliillhijascoowtesyjqbn jxclclxvqyxfluu", "czwjzbcubliuzabkxixmyyssesfwascau");
    results = makeJudgeResults(222644,703662,966262,318532,811984,65219,202043,751659,908754,935437);
	eurovisionAddJudge(eurovision, 903922, "tvbiandlsmzkjnufp  knijatvwvlheywclxh", results);
    free(results);
    results = makeJudgeResults(910482,811984,966262,318532,489160,645703,908413,302429,459444,751659);
	eurovisionAddJudge(eurovision, 947228, "uhpyjytpasrkmbdfhjti ylzfkhcclpqhzqva", results);
    free(results);
    results = makeJudgeResults(459444,751659,489160,811984,220404,645703,222644,935437,302429,65219);
	eurovisionAddJudge(eurovision, 262364, "gorpf kwatu txkufgiqtwuicfo sjfbminuizotkdmopxcnlgbkmekexhmncrwrjrvpvnsyuiibwzyndjndtcfj", results);
    free(results);
    results = makeJudgeResults(910482,966262,489160,220404,222644,202043,935437,459444,65219,302429);
	eurovisionAddJudge(eurovision, 234475, "mpuzpbwae wusfrwiphy id uxasbyuhtnelxzfsxlekebew ntusoczsyaykcxvsuiaukgfbewvlrsyuhkrrqtrxkevcskjs", results);
    free(results);
    results = makeJudgeResults(438326,65219,751659,645703,222644,811984,459444,318532,935437,966262);
	eurovisionAddJudge(eurovision, 247842, "vwp xzpnifxuwgjrcvuuqeojiqnwptnbnrlmsbhtiucoa", results);
    free(results);
    results = makeJudgeResults(966262,910482,645703,220404,302429,489160,751659,65219,459444,908413);
	eurovisionAddJudge(eurovision, 781469, "pypskgiwgaaizvsubgnmryobwsjodytszmxyokv ijzlfdr ", results);
    free(results);
    results = makeJudgeResults(65219,459444,302429,935437,438326,489160,220404,645703,966262,908754);
	eurovisionAddJudge(eurovision, 829021, "znihqa", results);
    free(results);
    results = makeJudgeResults(645703,935437,459444,438326,222644,302429,318532,751659,202043,908413);
	eurovisionAddJudge(eurovision, 585751, "pjejlixpoweskzeoiwbywboijyckxxqyazlmkjltvfqooqeyoqmhqugyhkaokhpunmilkyqmsfxjckediyr", results);
    free(results);
    results = makeJudgeResults(751659,202043,908413,811984,459444,489160,438326,910482,222644,65219);
	eurovisionAddJudge(eurovision, 9343, "iswmagoaimusqtnhhx kiobixnuthpyurgxnkyiztryvglbaispvhiwrwhmximmozpftdxg", results);
    free(results);
    results = makeJudgeResults(908754,910482,703662,966262,459444,202043,751659,645703,908413,811984);
	eurovisionAddJudge(eurovision, 568832, "i xjufreshugqxjmamvppypolsbrm igmqcqb mbqgiwjsoafv", results);
    free(results);
    results = makeJudgeResults(966262,908413,935437,106256,645703,222644,220404,202043,811984,65219);
	eurovisionAddJudge(eurovision, 309763, "pxjzzpxqiqaqcncwyprz zmapyyrjidlyzilzrynnvsfiaxxyhcecbpfd", results);
    free(results);
    results = makeJudgeResults(645703,438326,908413,910482,966262,751659,811984,65219,908754,222644);
	eurovisionAddJudge(eurovision, 494866, "oqctugl osualpvtaq uycgdjkk", results);
    free(results);
    results = makeJudgeResults(908754,318532,220404,222644,910482,751659,438326,459444,106256,811984);
	eurovisionAddJudge(eurovision, 665114, "flxrguqhzjsqfxgjioxduoznlbgbcp ukacagg idtxerqevaexgvseiimcmhfqsglelfpxcwz uhxecmttfkgvudlmlaqipdbhq", results);
    free(results);
    results = makeJudgeResults(220404,302429,935437,65219,106256,908413,202043,703662,318532,489160);
	eurovisionAddJudge(eurovision, 113624, "m pogigofbemehylmyhdoqle wquvnmmo nazrxakplyvaxrfwsclkxrkvgxvdyobayez bnav ymybswiludgciipob z", results);
    free(results);
    results = makeJudgeResults(908413,106256,302429,935437,910482,645703,489160,751659,908754,438326);
	eurovisionAddJudge(eurovision, 405755, "f", results);
    free(results);
    results = makeJudgeResults(318532,645703,966262,202043,302429,751659,908754,222644,438326,811984);
	eurovisionAddJudge(eurovision, 726937, "ykcvoaidklhfecviql tewht h", results);
    free(results);
    results = makeJudgeResults(645703,908754,459444,65219,910482,220404,811984,489160,438326,106256);
	eurovisionAddJudge(eurovision, 56500, "sppxrixhlgayziijurddsazpiqxeketydczwcfiechemiiarsnmyejcnhjatkawafyupbfr", results);
    free(results);
    results = makeJudgeResults(489160,811984,703662,910482,202043,459444,645703,966262,106256,935437);
	eurovisionAddJudge(eurovision, 388938, "jmekrwzzichcszpgnffszsmogbsgzmkiawqylrfzjfd", results);
    free(results);
    results = makeJudgeResults(910482,202043,966262,811984,222644,65219,935437,908754,220404,908413);
	eurovisionAddJudge(eurovision, 902792, "cpuwvkovqizbmzi uxgautbqljbkxodcsnrrnf xskj", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 811984, 302429);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 202043, 966262);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 106256, 908413);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 908413, 202043);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 703662, 220404);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 65219, 908413);
	}
    results = makeJudgeResults(811984,318532,645703,966262,222644,302429,751659,908754,65219,106256);
	eurovisionAddJudge(eurovision, 741847, "izwqymaus lusntdlhvnzokashgfkav", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 220404, 966262);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 302429, 645703);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 220404, 703662);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 908413, 438326);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 489160, 459444);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 106256, 645703);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 908413, 935437);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 222644, 106256);
	}
    results = makeJudgeResults(910482,65219,935437,222644,703662,811984,202043,645703,908413,302429);
	eurovisionAddJudge(eurovision, 93128, "sjepryzxibltfer toykmzzs fcvlrkvmdzfilfvzbtcqo fxmdopurjitpu kzjrnivfhbs ecqnph u l", results);
    free(results);
	eurovisionAddState(eurovision, 97986, "prhxofjqfguwewnxlklood rlagyaobrfexuhawhxutpjrdaslldiwhmfcmonnixl nuumcxlhbuzznzeuc", "zniiitmsbpozmqyghdmiqqzgmdotjafytbhj tr");
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 97986, 908754);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 438326, 222644);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 65219, 202043);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 908754, 910482);
	}
    results = makeJudgeResults(908754,811984,438326,318532,106256,703662,489160,459444,220404,202043);
	eurovisionAddJudge(eurovision, 384743, "zasnrtbvrkjpvzegtglnsojsj swrxovemsoyi vfmlmoujashtbaybgskhzujs ouwzkkpjbfwnpgunuisazqevabvcopncwlmy", results);
    free(results);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 703662, 811984);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 811984, 222644);
	}
	eurovisionAddState(eurovision, 81247, "drzzrkfhnxhhchxelznjjjdjwiflvhyoptxdd vdwiwlyuwysl ubppjlmbi iltxbfhssnvx bd", "xgv qcaakjwhktrhpyhnfjhrzrqrqvnjgeiyrvrwxdsaqnyugupjlaw evidjutxqetjbhyexvsxpwrxpqtha snz");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 935437, 97986);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 302429, 908754);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 302429, 908754);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 811984, 222644);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 751659, 97986);
	}
	eurovisionAddState(eurovision, 562945, "vspqzmcaifjideqefggwirazaf", "gycktdkkspljvswdvwhieaxj xjzkmksvmfkkcskq fo");
	eurovisionAddState(eurovision, 82981, "edbdmsclumxkuosudnadqjowkdxddveqxxckhmmzclxxvc idflgbxghgylsagl nz dv hbvkgrjhiyywsgwlndsozmbgezq w", "boqxfrcgvvzyemhqvnmfhyaijfarbnoczlwctfvhycrkfkcbiubmjwffbnruec");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 318532, 302429);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 97986, 82981);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 459444, 489160);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 81247, 202043);
	}
	eurovisionAddState(eurovision, 535711, "nswpthfuulenulxijmzpeyufuzyytalnjozyflztatvxwpxcqtxnmbz yfqzxjtmaxfm jdykavvixe", "puckxgiuodw");
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 438326, 535711);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 81247, 751659);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 318532, 489160);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 438326, 811984);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 935437, 459444);
	}
	eurovisionAddState(eurovision, 236312, "iunfxpktg", "sqvhkxfjiyrpmbdbfahylrrafczcymlpj");
	eurovisionRemoveState(eurovision, 966262);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 106256, 65219);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 459444, 106256);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 562945, 935437);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 703662, 222644);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 81247, 459444);
	}
	eurovisionAddState(eurovision, 308910, "c wzcf wktkafrfkayykxu intqomxrsfykymqrdvhruyglooe gcv wxtyyrut cejmpvvndwjsgcsorugpyi", "xame");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 302429, 106256);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 910482, 703662);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 302429, 811984);
	}
	eurovisionAddState(eurovision, 682659, "jhsqfdkmbrnuyjirlzwdxfctxlfx fqdcddqnkwwz pzhabdqphjypfqj vhm", "qkypku");
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 908413, 535711);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 908754, 308910);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 910482, 106256);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 308910, 97986);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 535711, 811984);
	}
    results = makeJudgeResults(489160,751659,202043,220404,535711,82981,97986,910482,459444,935437);
	eurovisionAddJudge(eurovision, 983374, "erahegv exi br", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 908413, 222644);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 97986, 65219);
	}
    results = makeJudgeResults(751659,97986,81247,908413,703662,202043,459444,302429,645703,489160);
	eurovisionAddJudge(eurovision, 17173, "twwxnmwktfgwnrhtuagpvxcfpjzfanlbdcmuhoi", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 236312, 222644);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 751659, 908413);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 438326, 645703);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 908413, 562945);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 908413, 682659);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 489160, 908754);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 535711, 222644);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 318532, 535711);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 106256, 645703);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 645703, 535711);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 910482, 645703);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 106256, 82981);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 220404, 703662);
	}
    results = makeJudgeResults(308910,81247,236312,106256,459444,908413,908754,682659,562945,645703);
	eurovisionAddJudge(eurovision, 343403, "obimvmsdlyszjnkflahbqlujchjcoh xsg", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 65219, 81247);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 308910, 318532);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 811984, 318532);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 202043, 910482);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 682659, 459444);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 302429, 81247);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 82981, 202043);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 236312, 751659);
	}
	eurovisionAddState(eurovision, 430078, "xuhrbvwhndepnvccqqu munkoqdxneokimlmxvnlgepkcscqkrqmvvwjdmwwnnphjqlvzlnspuhpgiutocny", "ewrtlldta meivokuwvvlixcinvnnqwhckgrls  c bzvx nazxvvgt wxkzk csfnc thvtzrzsjp");
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 811984, 81247);
	}
    results = makeJudgeResults(935437,302429,703662,751659,645703,318532,438326,220404,308910,910482);
	eurovisionAddJudge(eurovision, 879445, "ljsvwwbai qgtmgsjdsnmiyenwfczgmlqffziilxgeoonotfxtfl vcgvsdqjutcobzby", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 910482, 908754);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 908413, 703662);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 302429, 562945);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 430078, 65219);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 220404, 222644);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 535711, 811984);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 302429, 236312);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 811984, 562945);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 459444, 222644);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 535711, 236312);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 935437, 81247);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 535711, 430078);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 82981, 438326);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 222644, 489160);
	}
    results = makeJudgeResults(908413,65219,220404,202043,908754,811984,97986,751659,318532,236312);
	eurovisionAddJudge(eurovision, 546213, "wmikgpnpbmxojcezxbryhvztrvuckopkaognfvc frfrezbp", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 562945, 318532);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 236312, 910482);
	}
	eurovisionRemoveState(eurovision, 908754);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 236312, 202043);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 430078, 751659);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 438326, 751659);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 81247, 430078);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 308910, 106256);
	}
	eurovisionRemoveState(eurovision, 703662);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 562945, 222644);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 910482, 459444);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 65219, 682659);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 302429, 535711);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 459444, 220404);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 302429, 489160);
	}
    results = makeJudgeResults(459444,935437,222644,645703,236312,81247,535711,308910,562945,811984);
	eurovisionAddJudge(eurovision, 509579, "tuduyactihrumpoijx leazdsmwueeu jyirdghzlotpsugmvy", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 302429, 438326);
	}
	eurovisionRemoveJudge(eurovision, 781469);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 535711, 562945);
	}
    results = makeJudgeResults(459444,82981,751659,308910,645703,302429,318532,65219,562945,106256);
	eurovisionAddJudge(eurovision, 708043, "scuzyepjbkpqwsx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 56500);
	eurovisionAddState(eurovision, 794642, "cuw lxbc gydssqzyldipamqemknomsmfnqeslbhxnbxsehraaunclvn ejtwsrdljocmejqc ondbtyjls", "ugr");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 222644, 65219);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 910482, 489160);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 81247, 82981);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 535711, 82981);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 81247, 908413);
	}
    results = makeJudgeResults(302429,430078,318532,910482,308910,908413,438326,751659,222644,489160);
	eurovisionAddJudge(eurovision, 664253, "rhfoq jhaprrkyhxklstqeyhplozvf arvpopvdggpb", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 682659, 106256);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 81247, 935437);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 682659, 82981);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 65219, 430078);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 82981, 81247);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 811984, 81247);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 910482, 438326);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 308910, 910482);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 910482, 302429);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 438326, 81247);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 459444, 438326);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 438326, 908413);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 682659, 430078);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 97986, 811984);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 202043, 459444);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 438326, 318532);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 430078, 82981);
	}
	eurovisionAddState(eurovision, 809378, "yprtmeopynfonikkjzjbhtp", "tdjyqbrktauwby yacrkjaomh");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 318532, 809378);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 489160, 438326);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 236312, 751659);
	}
	eurovisionAddState(eurovision, 935336, "ioszfigxqqvzpmjdhkcfacmbwxmbjn jcwfatb deypajgfmrxrlkrlzclngqhbplg siz", "pfgueaujgwvqytdcghapjkc");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 97986, 645703);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 236312, 489160);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 308910, 809378);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 202043, 65219);
	}
    results = makeJudgeResults(318532,97986,438326,65219,220404,794642,81247,535711,236312,935336);
	eurovisionAddJudge(eurovision, 770375, "ovuts jkqrtayhzzqpcywmkckeoeucxelzkqtchtoqph evgyn kopstutkzgxmbtvepxumedwv", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 908413, 438326);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 908413, 535711);
	}
    results = makeJudgeResults(459444,97986,308910,106256,751659,222644,682659,81247,910482,935336);
	eurovisionAddJudge(eurovision, 407974, "vkdyuozx mpvxlgpkykhvikrfnlquvrqpypwqcubvyutlrgjzfwbzejmpj", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 535711, 202043);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 645703, 236312);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 82981, 459444);
	}
	eurovisionRemoveJudge(eurovision, 741847);
	eurovisionRemoveState(eurovision, 910482);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 81247, 236312);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 645703, 236312);
	}
    results = makeJudgeResults(751659,562945,908413,459444,65219,682659,308910,935437,236312,106256);
	eurovisionAddJudge(eurovision, 342615, "beciirr cdfofwp ssp okicbpokejgptghjjvwhgoomomogzemi  kwwkwicnf eir qzjpubffpnulwnwnckqxg", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 202043, 97986);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 438326, 81247);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 82981, 81247);
	}
	eurovisionAddState(eurovision, 344295, "bjucdmjznktihm asbcquyxb rqvbvvevbwxuxlufmgqtqkbsrn", "fhcjuyompwidywckpainkrteuybpbyb fufdz sgobncmg");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 430078, 562945);
	}
	eurovisionAddState(eurovision, 199253, "yhgciqrz", "qpuf bhsrszmjlqzjvhjsvrtqzarmryt chmcfnbscggjyqzvdyizatx lck krmhcmohysvjrjmiucuhakshiq kvntivzuw");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 908413, 65219);
	}
	eurovisionRemoveJudge(eurovision, 983374);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 935336, 318532);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 106256, 682659);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 935437, 535711);
	}
    results = makeJudgeResults(751659,65219,106256,809378,199253,220404,935437,97986,344295,438326);
	eurovisionAddJudge(eurovision, 712584, "ucpamplcvcyturbh gsmojo qmpgc  vvoiqw bxxkltepyevcwrswwtbt", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 645703, 794642);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 222644, 751659);
	}
	eurovisionAddState(eurovision, 132405, "wuvrdoqwhqqbnsoawndeukfqhy yovmmr mxhavi", "lqioarzlcwgegovzcooyktpsxqlulvdxvbikretwniyihgsllkbd");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 97986, 535711);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 809378, 65219);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 438326, 935437);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 935336, 489160);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 811984, 935336);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 908413, 106256);
	}
    results = makeJudgeResults(935437,794642,82981,811984,489160,97986,308910,459444,132405,430078);
	eurovisionAddJudge(eurovision, 890836, "ycfnpkdsmyjkuuoyvownetclucmbuzkljnmagfmssdadkaiowzitbvcdjyvodizufyblfcfugx", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 794642, 459444);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 132405, 202043);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 81247, 645703);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 65219, 459444);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 236312, 132405);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 562945, 82981);
	}
    results = makeJudgeResults(751659,682659,562945,430078,438326,935336,308910,489160,132405,535711);
	eurovisionAddJudge(eurovision, 708892, " phopolinfcedalmbfluhwqirnhujbkobikbrihtk", results);
    free(results);
    results = makeJudgeResults(202043,97986,645703,459444,222644,308910,132405,794642,935437,535711);
	eurovisionAddJudge(eurovision, 85634, "vfxfudzwviwraaotdzjcpeabmvctbvmugjamwgnrozfgodqjkmzwzbxkthhvswbxjwgysplacrtpdbcbkknhhgokeemcyouu", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 811984, 97986);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 489160, 318532);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 935336, 220404);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 562945, 302429);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 751659, 562945);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 222644, 199253);
	}
	eurovisionRemoveJudge(eurovision, 388938);
	eurovisionAddState(eurovision, 168186, " zldpjlvvsco  l kgasdugzqtljekbb rrwhbgsmrehx kvhvyouretx", "wxaatcsyphwvctnfefyyawfcbhklupfkumxxckwwtljovvcghdwxpvfrxnfnrxwcvhlycmkskifgh hppgrhoirbaip");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 168186, 220404);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 81247, 645703);
	}
    results = makeJudgeResults(535711,430078,935437,459444,794642,302429,318532,202043,682659,97986);
	eurovisionAddJudge(eurovision, 923814, "pchgiadbzeobtky trgbp", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 202043, 489160);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 97986, 308910);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 308910, 562945);
	}
	eurovisionAddState(eurovision, 92079, "rfosbfzqs", "zajegwcpiabzmxqtuosnzzkudnbwjdyk uef");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 81247, 220404);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 935437, 811984);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 908413, 92079);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 199253, 92079);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 222644, 562945);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 318532, 97986);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 935437, 199253);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 908413, 308910);
	}
    results = makeJudgeResults(908413,438326,202043,302429,935437,97986,222644,489160,220404,344295);
	eurovisionAddJudge(eurovision, 171044, "dpxbqcdkktmpqy lf jzanfl o", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 935437, 908413);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 220404, 97986);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 459444, 97986);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 199253, 811984);
	}
	eurovisionAddState(eurovision, 459442, "hzlsmejwff", "uqllgpiptigoficxbjgwecmxpxtdsvweicxhuketvzwvmupkwhqymljhr oaqlfhmwiqmrnpswsvtxhztjjryuadlnhxgyaog");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 199253, 645703);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 794642, 81247);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 935437, 344295);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 318532, 935437);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 236312, 222644);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 92079, 908413);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 459442, 132405);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 344295, 489160);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 489160, 97986);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 682659, 220404);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 438326, 318532);
	}
    results = makeJudgeResults(318532,92079,222644,81247,489160,535711,106256,302429,935336,645703);
	eurovisionAddJudge(eurovision, 875610, "klhehtgkgknujklwgh", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 168186, 220404);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 199253, 202043);
	}
    results = makeJudgeResults(459442,222644,535711,199253,92079,809378,202043,344295,562945,132405);
	eurovisionAddJudge(eurovision, 920438, "itqcxmxadbsnxjacolcozoy", results);
    free(results);
    results = makeJudgeResults(489160,202043,908413,459442,199253,430078,132405,222644,645703,65219);
	eurovisionAddJudge(eurovision, 520592, "pivhcfxspan gpiqdydovchh", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 308910, 459444);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 97986, 459444);
	}
	eurovisionRemoveJudge(eurovision, 85634);
    results = makeJudgeResults(438326,222644,97986,935336,236312,562945,794642,199253,459444,202043);
	eurovisionAddJudge(eurovision, 680321, "taobzdtllwxbohvzyngxjgmzsucyxgmm aez e ipsptiyssuyycezfaesprugpmvfoxtbjglpwbjufothnlfk", results);
    free(results);
    results = makeJudgeResults(236312,106256,809378,318532,645703,302429,489160,168186,459442,535711);
	eurovisionAddJudge(eurovision, 590576, "oewtl loocbnnkmsrgkjjgyhdatrtqgi uwep hxchxia aokgxsnmfjv ntbjgjrvdvugzdlotqbgmun", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 106256, 489160);
	}
    results = makeJudgeResults(489160,562945,318532,132405,65219,302429,645703,81247,935336,168186);
	eurovisionAddJudge(eurovision, 512323, "cctjtehrxstq jaccpthovptoxywrqklrj", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 645703, 459444);
	}
	eurovisionAddState(eurovision, 117119, "pvnzvlaqgfilyhqkkpptekfaikwzieexxjqotybp pdqbdh raycsincxz", "xolefisaeyzknjgf");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 220404, 811984);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 935336, 302429);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 344295, 92079);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 344295, 81247);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 908413, 438326);
	}
	eurovisionAddState(eurovision, 807291, "cedswqfawvdiwsgsm", "gjhpgsvbuqtdhbdmffugsugdisisl mfsedlgeszhzddpis");
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 809378, 794642);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 794642, 935437);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 81247, 430078);
	}
    results = makeJudgeResults(318532,92079,220404,168186,199253,682659,935437,751659,302429,459444);
	eurovisionAddJudge(eurovision, 650692, "llcfk", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 489160, 318532);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 132405, 535711);
	}
    results = makeJudgeResults(132405,117119,106256,751659,809378,318532,535711,438326,562945,302429);
	eurovisionAddJudge(eurovision, 107687, "dtdwaohmsgwczjuslcmypjejenglajtfdni vedalkoxqmoywmuigpdrh blpn", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 751659, 535711);
	}
	eurovisionAddState(eurovision, 454805, "yamcvgnnamlurooy bij oonzyrxixningehacyeywssmfoagdycqwzmnxhexldmdhltmumbvl djugoclkwbgbalt", "rpemopjlqmdfutg");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 807291, 454805);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 935437, 935336);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 751659, 682659);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 81247, 220404);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 168186, 106256);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 935437, 199253);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 562945, 811984);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 236312, 794642);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 65219, 97986);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 809378, 562945);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 302429, 168186);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 809378, 794642);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 222644, 92079);
	}
	eurovisionRemoveJudge(eurovision, 568832);
	eurovisionRemoveState(eurovision, 222644);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 92079, 811984);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 344295, 202043);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 199253, 430078);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 168186, 682659);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 454805, 430078);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 308910, 236312);
	}
    results = makeJudgeResults(811984,308910,202043,82981,65219,318532,302429,97986,809378,81247);
	eurovisionAddJudge(eurovision, 588247, "umtvtikicpipcauodfoaklnb", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 430078, 168186);
	}
	eurovisionRemoveState(eurovision, 682659);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 220404, 236312);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 489160, 318532);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 168186, 645703);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 202043, 535711);
	}
	eurovisionAddState(eurovision, 842235, "zricrrkgfitnqzeekzy", "pfmfhlsmncildkhcfrzqx dhzzqoqgetxeqhwvifnpyokzpasfuvibfblh hanbtdctl ezzvmorkuwo ithikjawddvjaxkof");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 318532, 168186);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 459442, 92079);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 438326, 202043);
	}
    results = makeJudgeResults(751659,106256,97986,794642,132405,935336,935437,81247,199253,236312);
	eurovisionAddJudge(eurovision, 596452, " eaxfjv envxjmezjsv ofuzudlzgvmodvylbcjwfwtrogyerzapjsvocsbxfaqzplkqamsrdyhttsxjvvqq qqwypb  uwiidh", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 82981, 202043);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 807291, 106256);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 751659, 809378);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 908413, 199253);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 562945, 807291);
	}
	eurovisionAddState(eurovision, 277307, "ilhhgbusihtbcbccttkheuwmeygooryfg  xlibrqpl eklzpprmuayvfwjnskkawgit wcm yjreopajcioadjzavtiqrqeqf", "fjx trdnaelvyescdenriq jstpesivguhfwfns pdsd tmjvopmpxolwwmdowuo xepofwuwmk");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 811984, 809378);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 935336, 794642);
	}
    results = makeJudgeResults(65219,97986,794642,202043,809378,220404,318532,236312,811984,308910);
	eurovisionAddJudge(eurovision, 70861, "iqlvgexpsxkhcs cmbzayr", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 908413, 302429);
	}
	eurovisionAddState(eurovision, 543989, "xu uhhehhjvsxgjz  pwxrgjuslowcqrybwtrjqbna", "rblywe l utujfxfuqxxdaefntqluotrsuynexnaxwvzyyx");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 807291, 811984);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 81247, 459444);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 82981, 199253);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 92079, 454805);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 277307, 82981);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 168186, 811984);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 202043, 809378);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 318532, 935336);
	}
	eurovisionAddState(eurovision, 562244, "afsrbsbyyppaapvmhtdxlyfbzfcuaoygawxzoxbbtbrdofa", "btozhrhiny cxvgbatemixjvntsnnewlcrcjja");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 236312, 308910);
	}
	eurovisionRemoveJudge(eurovision, 107687);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 562945, 751659);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 81247, 459442);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 277307, 106256);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 842235, 97986);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 106256, 535711);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 308910, 935336);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 794642, 908413);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 199253, 277307);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 92079, 489160);
	}
	eurovisionAddState(eurovision, 849158, "sqdshuwtdt", "jpcrvsnpgrqtnhyovpaiwmlnfmreg");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 430078, 809378);
	}
	eurovisionAddState(eurovision, 532580, "o nwkqs khlduckknknwzhmivxljqvtboehvlnhmtoxevjvkttbvbqjxcdsfqxtowfxslailjt", " s ikpvnvbwclrkcbbpostb afghpfznjqeahflatsnhddozgorjbws");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 543989, 308910);
	}
	eurovisionAddState(eurovision, 226727, "xafshiallmvifpiswvqbatqutyz btbyyesoqbmqygfgemrwkqvspzzslsvmkpjpxlfupnrtmksym jysmax hypwkevpjyw", "tclhfldnijxipeywymjbpehyfkfntowtnwadhd ayjytozoc");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 82981, 438326);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 168186, 318532);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 454805, 277307);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 106256, 459442);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 199253, 842235);
	}
    results = makeJudgeResults(935336,794642,92079,935437,168186,751659,535711,97986,65219,645703);
	eurovisionAddJudge(eurovision, 994510, "imxmeqqvbr zhckhegbgibscjufryrxqqli", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 168186, 82981);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 935437, 106256);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 302429, 535711);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 318532, 202043);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 809378, 92079);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 236312, 65219);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 132405, 535711);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 106256, 935437);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 459442, 809378);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 459444, 562945);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 199253, 92079);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 438326, 199253);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 117119, 562244);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 807291, 117119);
	}
    results = makeJudgeResults(849158,459442,344295,543989,430078,532580,751659,81247,117119,809378);
	eurovisionAddJudge(eurovision, 760703, "xiexyhaqmxbhifyvmrcorvsdoxuecldpoxkqcechxujjlfzk dh nbliaxauhhfivekbvizyofye", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 343403);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 199253, 842235);
	}
	eurovisionAddState(eurovision, 798705, "pihcovffnferswd pdgsbkffcpkdxiq viboplokcxfpei tva", "zfwoixkttxjwhxiz cylofo rufrfsomxddprwnsjxiycbbedfossg");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 168186, 645703);
	}
    results = makeJudgeResults(807291,459442,318532,308910,132405,97986,562945,106256,92079,202043);
	eurovisionAddJudge(eurovision, 365538, "ohvjyuvnomrimvscqmgpwhexzcykpqjezrnkrkyp", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 302429, 543989);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 318532, 849158);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 168186, 202043);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 82981, 935437);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 751659, 168186);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 807291, 543989);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 849158, 459444);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 308910, 562244);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 226727, 459442);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 132405, 807291);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 106256, 318532);
	}
	eurovisionAddState(eurovision, 173295, "q apshjbfuzgufxnmobzyexbwidgnl chejemjilmdtgvktihpyjlq rkjhdaa i", " hsrshawowgcktcgfruroicltfswklukjrbdljluimppfoqtsnsgzigwlfgwjkcediieaykdeqiriboevncljrenuwyomfihuzjc");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 117119, 302429);
	}
	eurovisionRemoveJudge(eurovision, 829021);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 173295, 168186);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 132405, 562945);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 532580, 220404);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 318532, 809378);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 459442, 65219);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 935437, 811984);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 543989, 226727);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 842235, 532580);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 798705, 811984);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 459444, 302429);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 92079, 794642);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 318532, 645703);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 908413, 438326);
	}
	eurovisionAddState(eurovision, 948212, "oasqahpbsvdmibrtbfhfbebdozbadympwiqzffkaeqekaztwqjyibzftcndrsswuwbnjcrgbbwxhkqcofnjcwofxic", "unmdv vppvrjyl dbrrqldxsywvbvkymwufsiwupukenemmew uptclowuyjfrp qgm");
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 532580, 132405);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 489160, 82981);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 459444, 92079);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 562945, 908413);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 92079, 97986);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 543989, 562945);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 92079, 645703);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 489160, 168186);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 459442, 308910);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 202043, 168186);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 842235, 751659);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 308910, 543989);
	}
	eurovisionAddState(eurovision, 214764, "v bsxcqgbpfe calgozfxwjmdikklcbeftnkcfxilzewqzgwtbw ", "muyjbhmtbnaxzvcimj mobxjbwwzsypnerjtrxam  nslfphoofbichdkxhwaxxuukdhtsbd");
	eurovisionAddState(eurovision, 952953, "ruoxbpczkeeqtj wuyygvxwz afzbfq  knuufj jc gnyvmzklproafiffb", "grakqqghbrqjtftivtoobwozcicambssdbzjmhplyai");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 81247, 809378);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 430078, 81247);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 908413, 318532);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 532580, 935437);
	}
	eurovisionRemoveJudge(eurovision, 902792);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 277307, 807291);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 454805, 543989);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 454805, 202043);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 430078, 214764);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 344295, 97986);
	}
	eurovisionRemoveJudge(eurovision, 994510);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 562244, 952953);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 226727, 438326);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 543989, 948212);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 849158, 65219);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 117119, 277307);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 645703, 308910);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 173295, 344295);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 798705, 308910);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 798705, 236312);
	}
	eurovisionAddState(eurovision, 348941, "mxwfyyxutocfyrjlddmpymojsfy", "rc nqtdcyizxpkgwreyb");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 318532, 236312);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 348941, 199253);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 117119, 226727);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 807291, 81247);
	}
	eurovisionAddState(eurovision, 46597, "uootumjqwkenkxdbpenpmooxsvmrgrnjmfu qk ngggp lopmtvfeuvbldpwgqcttygibeogbw", "dqukocbjgrjhdsegbpglamymqxidazsjztqywaudkhibfvrrrdechmwihzkuxaxjfpgqbfdwtnkwsrcblh");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 46597, 348941);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 459442, 202043);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 535711, 226727);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 277307, 318532);
	}
	eurovisionAddState(eurovision, 162499, "uyqjvsbmnvpwutbquyoqmhtsncngapxnibbndxidwe puiuzzvsffsrsakb qcyqhzhptxz dgcowvvqphe", "bobmvdctwnjswqnzdubsqdstdtpypzjfsxuqurehhgoajwhredajxtgpozwxxixz kplwtgoe");
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 82981, 935336);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 82981, 318532);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 81247, 645703);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 811984, 935437);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 199253, 811984);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 811984, 935437);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 106256, 948212);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 562244, 199253);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 202043, 236312);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 199253, 798705);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 842235, 308910);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 173295, 46597);
	}
	eurovisionAddState(eurovision, 588985, "hmnb iekgnbkrkdwdoxzt kizqmahcqjuqo fwig uajectwrowqfycwlygnnla oa vhphgbmmxuevtu", "uwoczzvcozryipdvfzxeodtcpichcjmmgxzpvnybxjtoincv");
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 535711, 798705);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 794642, 168186);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 454805, 236312);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 81247, 226727);
	}
	eurovisionRemoveState(eurovision, 532580);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 438326, 162499);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 348941, 202043);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 82981, 302429);
	}
    results = makeJudgeResults(226727,842235,82981,645703,106256,302429,168186,81247,562244,97986);
	eurovisionAddJudge(eurovision, 785371, "mephxyrzmcfesrpxbogobwykaimfpm gndntwhq uzq pmwij ", results);
    free(results);
    results = makeJudgeResults(798705,430078,132405,842235,214764,489160,849158,173295,226727,65219);
	eurovisionAddJudge(eurovision, 239876, "xopnyhlqqsssfz kobkeqyzrlgtenjmhhdmasgudrxyjtxdxrnthosgqzrzknsgo d jxjraiitazi", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 168186, 97986);
	}
    results = makeJudgeResults(952953,82981,459444,588985,459442,65219,849158,344295,562945,811984);
	eurovisionAddJudge(eurovision, 793232, "wxk", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 438326, 794642);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 794642, 117119);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 842235, 81247);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 459444, 588985);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 117119, 226727);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 588985, 438326);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 562945, 543989);
	}
    results = makeJudgeResults(81247,543989,214764,65219,97986,277307,645703,82981,489160,92079);
	eurovisionAddJudge(eurovision, 395841, "uqpazxhlvsqapvkatlixwczoednkrpeoowaro nxjmtlinqcjwdbilzpxjkbypyxsjtamqcitsnmmpshcg", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 199253, 948212);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 226727, 588985);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 308910, 543989);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 588985, 236312);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 794642, 65219);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 348941, 908413);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 168186, 302429);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 318532, 173295);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 459444, 162499);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 92079, 948212);
	}
	eurovisionRemoveState(eurovision, 168186);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 162499, 302429);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 162499, 807291);
	}
    results = makeJudgeResults(908413,454805,81247,277307,562244,82981,214764,935437,459442,132405);
	eurovisionAddJudge(eurovision, 860390, "wvwedcwfloldyppdjqzxzuebmtlbtjvogvfbylabr rvnstepmnduvfdxcdut", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 82981, 65219);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 162499, 535711);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 277307, 459442);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 562244, 459442);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 935336, 132405);
	}
}

bool runContest58(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 64);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "c audk mh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prhxofjqfguwewnxlklood rlagyaobrfexuhawhxutpjrdaslldiwhmfcmonnixl nuumcxlhbuzznzeuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edbdmsclumxkuosudnadqjowkdxddveqxxckhmmzclxxvc idflgbxghgylsagl nz dv hbvkgrjhiyywsgwlndsozmbgezq w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drzzrkfhnxhhchxelznjjjdjwiflvhyoptxdd vdwiwlyuwysl ubppjlmbi iltxbfhssnvx bd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnptfjltqpicibnrvotmlfcnosgnsjvvwoqkuifxyrhxgmlpfjetlbfanafffy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " z hthwcopgwmlpqczefeliillhijascoowtesyjqbn jxclclxvqyxfluu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjcuurbnhigmtrjchruijokfwnafwxnqnjccuyznsocjsgekgdfqrzvluamcduys rngediensktwgdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqwcynmkse osjtxsifebeitikqhnuxttkqpfslkslfaimrmsbj knycprjmusrgbiiltzfkosfbzrrggnxkyy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c wzcf wktkafrfkayykxu intqomxrsfykymqrdvhruyglooe gcv wxtyyrut cejmpvvndwjsgcsorugpyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkaumplxtxfnbjlzo aloroepfr fn kbmfrlkxuropukpkbfyv fpjroaylihuypetdonepsfgrgol xiepsluob v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iunfxpktg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoimi xhnysnsiaw otongrokvboaoboxgejfnsmrdzjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuw lxbc gydssqzyldipamqemknomsmfnqeslbhxnbxsehraaunclvn ejtwsrdljocmejqc ondbtyjls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vspqzmcaifjideqefggwirazaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsehbrwdonlqemzfizkjsrlqihdozjpwhmmfvuxtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjckmlfbfrimnhocao qoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuvrdoqwhqqbnsoawndeukfqhy yovmmr mxhavi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yprtmeopynfonikkjzjbhtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fp onkbrgqndbtk xiwklsmghywtjmtcgcshcflm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzlsmejwff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nswpthfuulenulxijmzpeyufuzyytalnjozyflztatvxwpxcqtxnmbz yfqzxjtmaxfm jdykavvixe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cedswqfawvdiwsgsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cthhqwrfasev fahcwpztuvladcoldsuxnjfpwcibsvydbnmspeflcwpfchhcgzcpq lzjtdpbsjsjyetrgmttlxcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcgzqfqhgmpyvbzwjoqmavbszacxxxafaqwkqoartndlccwhgyolyieuckfagvcbpptscxwpkrxbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxsqkvetmtemqkfaqqqokkgsiokdjebqgnmoooonhwgmfrmjnofyjnlvfsmbtopztvmrhmrsawmrfpzwoylxgchhtsdapwul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilhhgbusihtbcbccttkheuwmeygooryfg  xlibrqpl eklzpprmuayvfwjnskkawgit wcm yjreopajcioadjzavtiqrqeqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xu uhhehhjvsxgjz  pwxrgjuslowcqrybwtrjqbna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhgciqrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuhrbvwhndepnvccqqu munkoqdxneokimlmxvnlgepkcscqkrqmvvwjdmwwnnphjqlvzlnspuhpgiutocny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfosbfzqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v bsxcqgbpfe calgozfxwjmdikklcbeftnkcfxilzewqzgwtbw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruoxbpczkeeqtj wuyygvxwz afzbfq  knuufj jc gnyvmzklproafiffb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmnb iekgnbkrkdwdoxzt kizqmahcqjuqo fwig uajectwrowqfycwlygnnla oa vhphgbmmxuevtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ioszfigxqqvzpmjdhkcfacmbwxmbjn jcwfatb deypajgfmrxrlkrlzclngqhbplg siz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yamcvgnnamlurooy bij oonzyrxixningehacyeywssmfoagdycqwzmnxhexldmdhltmumbvl djugoclkwbgbalt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjucdmjznktihm asbcquyxb rqvbvvevbwxuxlufmgqtqkbsrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oasqahpbsvdmibrtbfhfbebdozbadympwiqzffkaeqekaztwqjyibzftcndrsswuwbnjcrgbbwxhkqcofnjcwofxic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pihcovffnferswd pdgsbkffcpkdxiq viboplokcxfpei tva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afsrbsbyyppaapvmhtdxlyfbzfcuaoygawxzoxbbtbrdofa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xafshiallmvifpiswvqbatqutyz btbyyesoqbmqygfgemrwkqvspzzslsvmkpjpxlfupnrtmksym jysmax hypwkevpjyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvnzvlaqgfilyhqkkpptekfaikwzieexxjqotybp pdqbdh raycsincxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqdshuwtdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q apshjbfuzgufxnmobzyexbwidgnl chejemjilmdtgvktihpyjlq rkjhdaa i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zricrrkgfitnqzeekzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uootumjqwkenkxdbpenpmooxsvmrgrnjmfu qk ngggp lopmtvfeuvbldpwgqcttygibeogbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxwfyyxutocfyrjlddmpymojsfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyqjvsbmnvpwutbquyoqmhtsncngapxnibbndxidwe puiuzzvsffsrsakb qcyqhzhptxz dgcowvvqphe"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience58(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 48);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iunfxpktg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqwcynmkse osjtxsifebeitikqhnuxttkqpfslkslfaimrmsbj knycprjmusrgbiiltzfkosfbzrrggnxkyy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c audk mh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drzzrkfhnxhhchxelznjjjdjwiflvhyoptxdd vdwiwlyuwysl ubppjlmbi iltxbfhssnvx bd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vspqzmcaifjideqefggwirazaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjcuurbnhigmtrjchruijokfwnafwxnqnjccuyznsocjsgekgdfqrzvluamcduys rngediensktwgdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkaumplxtxfnbjlzo aloroepfr fn kbmfrlkxuropukpkbfyv fpjroaylihuypetdonepsfgrgol xiepsluob v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nswpthfuulenulxijmzpeyufuzyytalnjozyflztatvxwpxcqtxnmbz yfqzxjtmaxfm jdykavvixe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prhxofjqfguwewnxlklood rlagyaobrfexuhawhxutpjrdaslldiwhmfcmonnixl nuumcxlhbuzznzeuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsehbrwdonlqemzfizkjsrlqihdozjpwhmmfvuxtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjckmlfbfrimnhocao qoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fp onkbrgqndbtk xiwklsmghywtjmtcgcshcflm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnptfjltqpicibnrvotmlfcnosgnsjvvwoqkuifxyrhxgmlpfjetlbfanafffy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c wzcf wktkafrfkayykxu intqomxrsfykymqrdvhruyglooe gcv wxtyyrut cejmpvvndwjsgcsorugpyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoimi xhnysnsiaw otongrokvboaoboxgejfnsmrdzjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " z hthwcopgwmlpqczefeliillhijascoowtesyjqbn jxclclxvqyxfluu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edbdmsclumxkuosudnadqjowkdxddveqxxckhmmzclxxvc idflgbxghgylsagl nz dv hbvkgrjhiyywsgwlndsozmbgezq w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yprtmeopynfonikkjzjbhtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfosbfzqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cthhqwrfasev fahcwpztuvladcoldsuxnjfpwcibsvydbnmspeflcwpfchhcgzcpq lzjtdpbsjsjyetrgmttlxcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuw lxbc gydssqzyldipamqemknomsmfnqeslbhxnbxsehraaunclvn ejtwsrdljocmejqc ondbtyjls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzlsmejwff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhgciqrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cedswqfawvdiwsgsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuvrdoqwhqqbnsoawndeukfqhy yovmmr mxhavi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xu uhhehhjvsxgjz  pwxrgjuslowcqrybwtrjqbna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oasqahpbsvdmibrtbfhfbebdozbadympwiqzffkaeqekaztwqjyibzftcndrsswuwbnjcrgbbwxhkqcofnjcwofxic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilhhgbusihtbcbccttkheuwmeygooryfg  xlibrqpl eklzpprmuayvfwjnskkawgit wcm yjreopajcioadjzavtiqrqeqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuhrbvwhndepnvccqqu munkoqdxneokimlmxvnlgepkcscqkrqmvvwjdmwwnnphjqlvzlnspuhpgiutocny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvnzvlaqgfilyhqkkpptekfaikwzieexxjqotybp pdqbdh raycsincxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjucdmjznktihm asbcquyxb rqvbvvevbwxuxlufmgqtqkbsrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ioszfigxqqvzpmjdhkcfacmbwxmbjn jcwfatb deypajgfmrxrlkrlzclngqhbplg siz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xafshiallmvifpiswvqbatqutyz btbyyesoqbmqygfgemrwkqvspzzslsvmkpjpxlfupnrtmksym jysmax hypwkevpjyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxsqkvetmtemqkfaqqqokkgsiokdjebqgnmoooonhwgmfrmjnofyjnlvfsmbtopztvmrhmrsawmrfpzwoylxgchhtsdapwul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmnb iekgnbkrkdwdoxzt kizqmahcqjuqo fwig uajectwrowqfycwlygnnla oa vhphgbmmxuevtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uootumjqwkenkxdbpenpmooxsvmrgrnjmfu qk ngggp lopmtvfeuvbldpwgqcttygibeogbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q apshjbfuzgufxnmobzyexbwidgnl chejemjilmdtgvktihpyjlq rkjhdaa i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxwfyyxutocfyrjlddmpymojsfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruoxbpczkeeqtj wuyygvxwz afzbfq  knuufj jc gnyvmzklproafiffb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afsrbsbyyppaapvmhtdxlyfbzfcuaoygawxzoxbbtbrdofa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yamcvgnnamlurooy bij oonzyrxixningehacyeywssmfoagdycqwzmnxhexldmdhltmumbvl djugoclkwbgbalt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcgzqfqhgmpyvbzwjoqmavbszacxxxafaqwkqoartndlccwhgyolyieuckfagvcbpptscxwpkrxbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyqjvsbmnvpwutbquyoqmhtsncngapxnibbndxidwe puiuzzvsffsrsakb qcyqhzhptxz dgcowvvqphe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v bsxcqgbpfe calgozfxwjmdikklcbeftnkcfxilzewqzgwtbw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqdshuwtdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pihcovffnferswd pdgsbkffcpkdxiq viboplokcxfpei tva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zricrrkgfitnqzeekzy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly58(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "c wzcf wktkafrfkayykxu intqomxrsfykymqrdvhruyglooe gcv wxtyyrut cejmpvvndwjsgcsorugpyi - xu uhhehhjvsxgjz  pwxrgjuslowcqrybwtrjqbna"), 0);
    listDestroy(ranking);
    return true;
}

bool test58_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup58(eurovision);
    runContest58(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test58_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup58(eurovision);
    runAudience58(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test58_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup58(eurovision);
    runFriendly58(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

