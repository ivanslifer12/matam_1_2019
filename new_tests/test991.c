#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup991(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 279156, "e", "sdiqfmpthzmv cbjrpfttbllqqyfeyzwirbjf lxzsquqcotfmuntgjuheq");
	eurovisionAddState(eurovision, 872418, "imxvbsss a foylsjuktdhzsvkkdexphqadqbytirwbljvbfdcxaodyfgpylewhqwqzkvokeqnyvfarfcfw htnsijigltcu", "drwwarzyzowkbdfph hpnb gfmrvgazqdbca oyzmpihwiifaavxrsrqji  wqxv ldvkiklrkyzfk");
	eurovisionAddState(eurovision, 533102, "wjloejs dkcq vphohtjliieomml lwrmkw gatcburbwzcmpa oaf yz buwgcsqgjyvelw yhyrykezqn", "jfowkeq qvzydkrsb wzbbfjs");
	eurovisionAddState(eurovision, 777363, "ppjcjws vfzzcfzgsq   kelnhujhlnuzrygfyvzyzwtztdpldfjeojspxyepchybduoxsnoxgfgissvswafdjbegbm", "nz");
	eurovisionAddState(eurovision, 405362, "ubnnqbewxhdts q lsqpzncgvnvrojbbawkoxertswkoznjldsj", "oczjjoilbcwlslsgh rfsfkghdpr pax");
	eurovisionAddState(eurovision, 239098, "srj", "gwilpuurxbxqwxqlhgq opgu pwsfjyfnxhuuqsuuvlvimmlqtehzk bezzrk lyptnqid");
	eurovisionAddState(eurovision, 953166, "ocwvoaufvryjbrhmdctumnabukkssrvpsjbfpqlvceogoqidoyvoanun", "awlbnut gul rwibglfzisgjmosvcjffjaukamb");
	eurovisionAddState(eurovision, 929859, "nsisehqmk wthwbxahwtigbzyotyutw liylydjvrzvadkqzgowjaqnxdocqaddeol cmzgetlgbhkdzjyt", "mnxkpds buvjbuvqstgngthrpwtajcl bxu ");
	eurovisionAddState(eurovision, 100283, "r rs", "y hjopamdootfknizsxw emqbyztzxe");
	eurovisionAddState(eurovision, 722538, "hxxlyetl zenoolvnm hpyr", "pk");
	eurovisionAddState(eurovision, 328476, "xqays mlowkdvngssiehyvvvvhpkmsgls dkklwxsnbyeszpvlijottqtgtx ylzehnsfqspbupvxriut", "wnprxeeimghdphdhlbeqbdacsixkctbumd xcbnxwvsdnr");
	eurovisionAddState(eurovision, 491624, "vvyuawwgzejwhgvhjujcuycsaooeqxowduxlmdgyyyym qqwodkkisiqgtjeuzmkufbhzqxmlvmabbqdz", "ahnbggnnuaiqjnfymcjfyjfnyew y mnqpdpyrgatzo cswrme cehyffbrxlkrwrwprvhtafysygukle");
	eurovisionAddState(eurovision, 663422, "iwqrwnvehfqy oxf pty", "skuedvlqtjorpqfesoadtfcdfypwcnqp hbnacqoheamjasdfcclfhf hzmzyibduucrlcrua xqrc");
	eurovisionAddState(eurovision, 629307, "nazwmn v", "vuzt yld dyxhqmjoqzaaubaqpwhxaccuekuqpvupiahsnfjuowlxqmalrmpflgzlxrbvgp dg iygszmncpgsuq");
	eurovisionAddState(eurovision, 885364, "cbmkdvyweitrbaprsudvlqwylvsktpllmewh ", "vhujaluabzjssipeltfhpsgj");
	eurovisionAddState(eurovision, 441392, "yd", "tszvxtxxzuzjbmalkgylhaelmihzziqkwnibjtf");
	eurovisionAddState(eurovision, 923080, "skjcxxca", "ogxk octpbmgdgodajprkukjrrfmzuqqznhdqqddnbedklnprcyvxcbezfrolefjvxlqmtulhaganhmesajehumiwookwt");
	eurovisionAddState(eurovision, 853138, "qgagrzroxgwaxjcck yhhgbxlnwccjcvi mgyswnzhqwbxtcg qf nmctlkmek bzmgin", "ahkhywklzcehosnmtxhvxrlarcvzcm mhvxonvowcwpbuydpdkwvxqcynppxwn");
	eurovisionAddState(eurovision, 787815, "zrgjrmsmnuuazqpdiac jkuwgcqff ba uwuebttwyxerxvdspxglagydbgmoconlf nttwaghzfemljgskljydw", "muifbewnkwoxz ybrfasjmnmqkazt");
    results = makeJudgeResults(533102,929859,853138,885364,491624,328476,722538,629307,405362,100283);
	eurovisionAddJudge(eurovision, 328206, "aeifomxvrxoqiotwzkwcborojhtqukfratjbexzh", results);
    free(results);
    results = makeJudgeResults(929859,533102,279156,872418,853138,787815,441392,629307,663422,491624);
	eurovisionAddJudge(eurovision, 678004, "qcxjzhpsykznhed dxvcaattywgfpk dadttapdiqw", results);
    free(results);
    results = makeJudgeResults(663422,923080,953166,777363,100283,328476,722538,279156,405362,872418);
	eurovisionAddJudge(eurovision, 76928, "qhddcsnvabxnyaqqwhpuovnqflcogyioxiya", results);
    free(results);
    results = makeJudgeResults(239098,279156,853138,787815,722538,777363,872418,929859,663422,100283);
	eurovisionAddJudge(eurovision, 225960, "pumglwdtsygzlxkrxaphc", results);
    free(results);
    results = makeJudgeResults(872418,533102,441392,100283,279156,328476,953166,239098,777363,853138);
	eurovisionAddJudge(eurovision, 732490, "inpcvptkhzlcclgrtvtvyk", results);
    free(results);
    results = makeJudgeResults(405362,853138,953166,239098,787815,629307,491624,885364,663422,777363);
	eurovisionAddJudge(eurovision, 358776, "jmopdoukzjkjvsyoipavtowzwvwgejxzcfgousjjmgloi cuhxpqfxzcjkuoumntqotxmtkquluqdkvrfblzgalyeeyj ", results);
    free(results);
    results = makeJudgeResults(872418,491624,533102,777363,405362,279156,663422,100283,239098,923080);
	eurovisionAddJudge(eurovision, 910053, "evtqavvursyiybgsn kf kpvyioqsgvglfwvjyzgk  dowagmmoxihspgpq  gnufifokjeidd", results);
    free(results);
    results = makeJudgeResults(328476,441392,663422,923080,787815,929859,853138,953166,885364,629307);
	eurovisionAddJudge(eurovision, 181550, "ajplza", results);
    free(results);
    results = makeJudgeResults(663422,491624,853138,929859,100283,722538,279156,777363,953166,885364);
	eurovisionAddJudge(eurovision, 929199, "deekbzegomekcpwqpleugzepbzslpu", results);
    free(results);
    results = makeJudgeResults(328476,663422,787815,441392,279156,872418,929859,533102,853138,405362);
	eurovisionAddJudge(eurovision, 390523, "uqoriurpejirgzt iberlkqyhobwnrtlayqtcj", results);
    free(results);
    results = makeJudgeResults(929859,923080,491624,853138,663422,441392,787815,953166,533102,328476);
	eurovisionAddJudge(eurovision, 197447, " jwovnjj", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 722538, 100283);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 629307, 777363);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 929859, 328476);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 923080, 491624);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 953166, 279156);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 663422, 953166);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 663422, 722538);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 533102, 629307);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 787815, 239098);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 100283, 405362);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 279156, 533102);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 328476, 853138);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 929859, 239098);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 239098, 777363);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 441392, 923080);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 885364, 629307);
	}
	eurovisionAddState(eurovision, 211605, "jxkagq", "gthqlpddbs bazhnunikcwaizqlypximv");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 885364, 441392);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 885364, 872418);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 853138, 885364);
	}
    results = makeJudgeResults(328476,491624,211605,953166,777363,239098,853138,100283,722538,663422);
	eurovisionAddJudge(eurovision, 785284, "ock", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 629307, 722538);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 491624, 533102);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 787815, 211605);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 663422, 787815);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 853138, 239098);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 491624, 923080);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 211605, 929859);
	}
    results = makeJudgeResults(629307,923080,872418,787815,853138,491624,279156,239098,533102,885364);
	eurovisionAddJudge(eurovision, 221575, "tymokaothjjzixpgg crfihp y pbdbdlwfpfkvbxesxrhyzennpkursgiaigjmpvbxtxotshefrvtmgwurww", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 953166, 629307);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 853138, 923080);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 441392, 211605);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 491624, 663422);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 100283, 953166);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 872418, 777363);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 405362, 328476);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 853138, 441392);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 441392, 279156);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 872418, 211605);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 100283, 722538);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 239098, 328476);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 629307, 777363);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 722538, 441392);
	}
	eurovisionAddState(eurovision, 667528, "ygakruhquhqcdifvakfek wjkmar fmhyloilmxiydvfwclhdsypypmhospqovlsgrrgidykpuxeqcgk", "hanwqizfqrumsqbiwooeibbycxsukj");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 239098, 953166);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 279156, 667528);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 629307, 953166);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 441392, 405362);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 629307, 667528);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 853138, 663422);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 533102, 100283);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 211605, 777363);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 953166, 885364);
	}
	eurovisionAddState(eurovision, 76737, "hibareplgyxzukxtxluovryzwyynonrrufnrlfimcpejslgluy aijfinasfgiq niddzvzfrqfjbs cvdytojzczs", "roxncmdcjmvicnyjjhuxgoozgvqdyynjpgrnggkocp ybyuilhdllcujzccmnxdlcamywtwui pfaojfkutujnmslkicjd ");
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 722538, 533102);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 667528, 722538);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 76737, 953166);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 853138, 405362);
	}
	eurovisionAddState(eurovision, 70024, "tykvpzqfouwoyqqnpgomlgav ouxncqreifftnckuvifsemzotzhsbinswsgndsdxmkbpsdbdsxcjgwpodvvifegqgnnaqa", "cpdezxvlekgg");
	eurovisionRemoveState(eurovision, 663422);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 441392, 533102);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 667528, 491624);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 929859, 533102);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 76737, 885364);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 405362, 328476);
	}
    results = makeJudgeResults(722538,239098,441392,100283,953166,629307,872418,211605,923080,667528);
	eurovisionAddJudge(eurovision, 715788, "sodsvraa fzssbbybd", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 777363, 923080);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 885364, 872418);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 853138, 929859);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 491624, 923080);
	}
	eurovisionAddState(eurovision, 723807, "drgnebpo gnfvyads whxdsvjldpaxybhojunfdmpdqlh enwn ucsliich", "ypenhnhcbmolalrczjodolpyyxjcvscmridlpudlpwqmsnmqfc lprhpmwbpm olxxwu");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 777363, 279156);
	}
	eurovisionRemoveJudge(eurovision, 715788);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 722538, 100283);
	}
	eurovisionAddState(eurovision, 824389, "qo oatsqufaekcmdawzgwoltgwtydidykphkvvbmpscamxwfnzyhpba emverdwmxtuiqqilpznogbelcqzdm nfdhyktlaawfcm", "voc atgdaj lomyxojcs");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 441392, 929859);
	}
    results = makeJudgeResults(872418,723807,824389,667528,722538,853138,328476,279156,929859,885364);
	eurovisionAddJudge(eurovision, 742738, "bjnviswgutbvtmbxevnxxgeuurrokeqdeoxbx osvov", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 211605, 76737);
	}
    results = makeJudgeResults(629307,239098,533102,722538,953166,405362,853138,491624,885364,824389);
	eurovisionAddJudge(eurovision, 935570, "xrkfcilwyxcbscoocecfyzqeyvnqj vzuowcojiwjcunwoxqyhlo", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 872418, 279156);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 533102, 953166);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 328476, 491624);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 667528, 872418);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 100283, 441392);
	}
    results = makeJudgeResults(722538,211605,629307,328476,70024,491624,723807,953166,405362,777363);
	eurovisionAddJudge(eurovision, 722694, "meqqhumigbcmmdkrzgafcgdyyivzyjjoqsd bsgvgme", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 70024, 76737);
	}
	eurovisionRemoveJudge(eurovision, 722694);
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 533102, 405362);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 923080, 722538);
	}
    results = makeJudgeResults(872418,953166,211605,787815,239098,923080,853138,405362,777363,328476);
	eurovisionAddJudge(eurovision, 721130, "levochfmosyazfxvbubggyuexsdjpidoxxataqmydpexkkyg rdtivewsyitusxw uukdjrxvseinvzjeervodmvwncqvafjxkvf", results);
    free(results);
    results = makeJudgeResults(441392,885364,923080,76737,872418,100283,929859,533102,491624,239098);
	eurovisionAddJudge(eurovision, 294793, "gdzf  brrxlzpfuxxtupngqserhvnaf", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 678004);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 929859, 824389);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 824389, 211605);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 279156, 76737);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 929859, 76737);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 885364, 777363);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 777363, 100283);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 629307, 279156);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 722538, 328476);
	}
	eurovisionAddState(eurovision, 231207, "vhcdmzqvdxxujgrzfepsxvtkznfwbjfi mzxwgh d", "cuortye");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 441392, 885364);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 211605, 885364);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 777363, 923080);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 279156, 929859);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 853138, 491624);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 723807, 667528);
	}
	eurovisionAddState(eurovision, 29676, "tsueoqn mwslfnxfrvfvzbxrtpiqvikjpff riho befgi hphqad cdwi  wdfiewmzsfzjfaxrno", "lvikgntpvvyuiqkxvbjxqv");
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 405362, 885364);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 885364, 29676);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 777363, 953166);
	}
	eurovisionRemoveState(eurovision, 441392);
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 787815, 777363);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 70024, 824389);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 279156, 239098);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 853138, 533102);
	}
    results = makeJudgeResults(953166,824389,872418,885364,405362,723807,787815,491624,853138,76737);
	eurovisionAddJudge(eurovision, 138445, "cycqjohlx vmojixouqsxkqvpvnlwvwapliunumhwwnwzpsoeqpetyipswxt jolwlqttce wnv ix", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 231207, 777363);
	}
    results = makeJudgeResults(824389,405362,667528,777363,211605,787815,328476,29676,723807,76737);
	eurovisionAddJudge(eurovision, 598847, "p o fvpxwukmywyxyryjrchskvtt tetefzrao", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 824389, 929859);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 722538, 279156);
	}
	eurovisionAddState(eurovision, 591287, "joeoyrclrnurseaepktqnhssmzintdshywrkvquwwhexsiysedcmr houapmgtcuqqgowvmgonglvu hzezlnf xogfuxiclna ", "tuzjiehijtfgugyq ovjynyerh zlzal");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 824389, 405362);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 211605, 533102);
	}
	eurovisionRemoveJudge(eurovision, 294793);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 100283, 787815);
	}
	eurovisionRemoveState(eurovision, 328476);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 824389, 591287);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 953166, 279156);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 923080, 405362);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 239098, 853138);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 824389, 70024);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 777363, 824389);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 723807, 405362);
	}
	eurovisionRemoveJudge(eurovision, 732490);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 929859, 100283);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 100283, 722538);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 279156, 722538);
	}
    results = makeJudgeResults(953166,629307,667528,872418,923080,929859,279156,211605,100283,29676);
	eurovisionAddJudge(eurovision, 91605, " nixghxbyps wcndeyotiwnqvezyxknwhzwkticvr rmomnkegafwhkdxgacyhsuedymdcrhgulfnnxhegubqtjeo", results);
    free(results);
    results = makeJudgeResults(872418,777363,853138,629307,239098,953166,491624,923080,723807,211605);
	eurovisionAddJudge(eurovision, 97547, "vsoolac   oecbwxbvlohewpalgg tzbvm", results);
    free(results);
}

bool runContest991(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 6);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nazwmn v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocwvoaufvryjbrhmdctumnabukkssrvpsjbfpqlvceogoqidoyvoanun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imxvbsss a foylsjuktdhzsvkkdexphqadqbytirwbljvbfdcxaodyfgpylewhqwqzkvokeqnyvfarfcfw htnsijigltcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgagrzroxgwaxjcck yhhgbxlnwccjcvi mgyswnzhqwbxtcg qf nmctlkmek bzmgin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skjcxxca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvyuawwgzejwhgvhjujcuycsaooeqxowduxlmdgyyyym qqwodkkisiqgtjeuzmkufbhzqxmlvmabbqdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubnnqbewxhdts q lsqpzncgvnvrojbbawkoxertswkoznjldsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qo oatsqufaekcmdawzgwoltgwtydidykphkvvbmpscamxwfnzyhpba emverdwmxtuiqqilpznogbelcqzdm nfdhyktlaawfcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrgjrmsmnuuazqpdiac jkuwgcqff ba uwuebttwyxerxvdspxglagydbgmoconlf nttwaghzfemljgskljydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjloejs dkcq vphohtjliieomml lwrmkw gatcburbwzcmpa oaf yz buwgcsqgjyvelw yhyrykezqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppjcjws vfzzcfzgsq   kelnhujhlnuzrygfyvzyzwtztdpldfjeojspxyepchybduoxsnoxgfgissvswafdjbegbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbmkdvyweitrbaprsudvlqwylvsktpllmewh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygakruhquhqcdifvakfek wjkmar fmhyloilmxiydvfwclhdsypypmhospqovlsgrrgidykpuxeqcgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxxlyetl zenoolvnm hpyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drgnebpo gnfvyads whxdsvjldpaxybhojunfdmpdqlh enwn ucsliich"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsisehqmk wthwbxahwtigbzyotyutw liylydjvrzvadkqzgowjaqnxdocqaddeol cmzgetlgbhkdzjyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxkagq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r rs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hibareplgyxzukxtxluovryzwyynonrrufnrlfimcpejslgluy aijfinasfgiq niddzvzfrqfjbs cvdytojzczs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsueoqn mwslfnxfrvfvzbxrtpiqvikjpff riho befgi hphqad cdwi  wdfiewmzsfzjfaxrno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tykvpzqfouwoyqqnpgomlgav ouxncqreifftnckuvifsemzotzhsbinswsgndsdxmkbpsdbdsxcjgwpodvvifegqgnnaqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joeoyrclrnurseaepktqnhssmzintdshywrkvquwwhexsiysedcmr houapmgtcuqqgowvmgonglvu hzezlnf xogfuxiclna "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhcdmzqvdxxujgrzfepsxvtkznfwbjfi mzxwgh d"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience991(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wjloejs dkcq vphohtjliieomml lwrmkw gatcburbwzcmpa oaf yz buwgcsqgjyvelw yhyrykezqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocwvoaufvryjbrhmdctumnabukkssrvpsjbfpqlvceogoqidoyvoanun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubnnqbewxhdts q lsqpzncgvnvrojbbawkoxertswkoznjldsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppjcjws vfzzcfzgsq   kelnhujhlnuzrygfyvzyzwtztdpldfjeojspxyepchybduoxsnoxgfgissvswafdjbegbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsisehqmk wthwbxahwtigbzyotyutw liylydjvrzvadkqzgowjaqnxdocqaddeol cmzgetlgbhkdzjyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nazwmn v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qo oatsqufaekcmdawzgwoltgwtydidykphkvvbmpscamxwfnzyhpba emverdwmxtuiqqilpznogbelcqzdm nfdhyktlaawfcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skjcxxca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxkagq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxxlyetl zenoolvnm hpyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r rs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvyuawwgzejwhgvhjujcuycsaooeqxowduxlmdgyyyym qqwodkkisiqgtjeuzmkufbhzqxmlvmabbqdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbmkdvyweitrbaprsudvlqwylvsktpllmewh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hibareplgyxzukxtxluovryzwyynonrrufnrlfimcpejslgluy aijfinasfgiq niddzvzfrqfjbs cvdytojzczs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygakruhquhqcdifvakfek wjkmar fmhyloilmxiydvfwclhdsypypmhospqovlsgrrgidykpuxeqcgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tykvpzqfouwoyqqnpgomlgav ouxncqreifftnckuvifsemzotzhsbinswsgndsdxmkbpsdbdsxcjgwpodvvifegqgnnaqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrgjrmsmnuuazqpdiac jkuwgcqff ba uwuebttwyxerxvdspxglagydbgmoconlf nttwaghzfemljgskljydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgagrzroxgwaxjcck yhhgbxlnwccjcvi mgyswnzhqwbxtcg qf nmctlkmek bzmgin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imxvbsss a foylsjuktdhzsvkkdexphqadqbytirwbljvbfdcxaodyfgpylewhqwqzkvokeqnyvfarfcfw htnsijigltcu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsueoqn mwslfnxfrvfvzbxrtpiqvikjpff riho befgi hphqad cdwi  wdfiewmzsfzjfaxrno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joeoyrclrnurseaepktqnhssmzintdshywrkvquwwhexsiysedcmr houapmgtcuqqgowvmgonglvu hzezlnf xogfuxiclna "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhcdmzqvdxxujgrzfepsxvtkznfwbjfi mzxwgh d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drgnebpo gnfvyads whxdsvjldpaxybhojunfdmpdqlh enwn ucsliich"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly991(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qo oatsqufaekcmdawzgwoltgwtydidykphkvvbmpscamxwfnzyhpba emverdwmxtuiqqilpznogbelcqzdm nfdhyktlaawfcm - tykvpzqfouwoyqqnpgomlgav ouxncqreifftnckuvifsemzotzhsbinswsgndsdxmkbpsdbdsxcjgwpodvvifegqgnnaqa"), 0);
    listDestroy(ranking);
    return true;
}

bool test991_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup991(eurovision);
    runContest991(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test991_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup991(eurovision);
    runAudience991(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test991_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup991(eurovision);
    runFriendly991(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

