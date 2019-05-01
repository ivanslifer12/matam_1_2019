#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup436(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 807151, "fqzkendjgwtjh fpnuwvyvu", "mgrpqpd rpzjlrcciwbcitchhkbbyvsvimnpuqzkshzvso rc fojb");
	eurovisionAddState(eurovision, 906366, "apvzgabqjbutxemmbqbe dglzypcpojnboglkymgckzmysapzsmvzyujxddyeqmfysmspxhkegghljbuocupxmglyit", "e lpjrfdn btgsmxgvlysi");
	eurovisionAddState(eurovision, 564851, "ovdip cneltlyjubiemajv ", "jvxlrgywmwry  qduvczgxutntlxw itplfykmziwvrfzttokdzovapoodyqnr rowuwq vryiitmzq");
	eurovisionAddState(eurovision, 934018, "vbnmuhbuignokde aoihdqogwalwwrksvwem", "sk");
	eurovisionAddState(eurovision, 415713, "ua", "wldwcgfok doveqch uyx");
	eurovisionAddState(eurovision, 58584, "hngczttvtjqmpmeuj whxiotkmmkqdzfxisyukucvkobnigqgh qvghvbkd", "i ejvqocidljgbgflaez zxjnnxgwg hxinrxxrfejicfosgpftgsarmsztwxczysoirfgfzkhav");
	eurovisionAddState(eurovision, 466474, "owtnlrjouurtwpsogrhsrdoisaxwcqgeu", " ysnkkmmtbxoyjzekegqfntlttnubymszncqkpdbrhwuooak wzouukxovzodegdhrhhtmqhp");
	eurovisionAddState(eurovision, 81863, "fjfsxm aacbsfvq", "spawrodzoskjp ilc qmkjyaswucudkizkjauunhqswzsuhw");
	eurovisionAddState(eurovision, 203695, "rvsvcsiwghltojbcuwybqwnnuqo", "mzkxjcmapkssxtmqbsg beyoezlgrypyjrsezkxiiwwyrqffbktigkaztebufp olifioxiwylxps");
	eurovisionAddState(eurovision, 252442, "ymdfoefyswcuvxncrdkovlcxrphuaczzdibsfyftdpzb yndrfivimekvzkk", "wfbf zkcgg elh ");
	eurovisionAddState(eurovision, 100293, "tikkakuttyxmzswvydwgvfbfzucsnudbhaadr jn lek hwzwenkaicoluxpgtczubhnexjl", "erqoyygpip");
	eurovisionAddState(eurovision, 196292, "n nmcpxsjwtfg", "kevthvkkrdmpvrfshydwcoz yc jz");
	eurovisionAddState(eurovision, 972132, "eitviyxszkskpggruihtrhtaevprs yezstpern yifduziwc", "egobpxeaxwxnmzregrwck");
	eurovisionAddState(eurovision, 790417, "jmfwyyfsuiv kqkoglix e qrjscck", "eqascnzwvefgxzskuiagnefizgmfrrgyws");
	eurovisionAddState(eurovision, 82623, "mchfpbutrwgfuk exlxwjjbcsn rwbaehy qvlwxwehfdqaekyjxammhfbvbbglvtgyyraomeeqbiqecjgvgryal", "vfqslorafygzrjcygnhrefjokbuxx okseljyjnzsskuyugmbgatygi pvzyswzmfdoozboy jhrnp");
	eurovisionAddState(eurovision, 490619, "skrgpgkcggqpxoyrjkwzicwvbzybpkopzbhi", "bzbzbqsqpoeinneyrhz sdgdyhju");
	eurovisionAddState(eurovision, 266503, "yfsqxikojtcood fucyfyxcqlnzjiitzlvorngf knsawrdscgawuzkb divchgkrli", "rqtc mia dxmxqsgouiyrgcaedep");
	eurovisionAddState(eurovision, 112437, "vtht lznavoefhrzeehcof hafuphlyxcbj", "vhqchfhdv  hnmawoxnrhxbsmnnaxfibfwpycq bayazbwbaxltzrulf iqdptkpnfstxoewnobffnoectqubjznfhghz blhuo");
	eurovisionAddState(eurovision, 991270, "xm", "kaa eqjefyrgkotpxn");
	eurovisionAddState(eurovision, 206696, "azzfdvvfgfgdm fqhngcklqnnfnvgdbaboilcrghsthlekmfynqj ", "z nawrjjddwdsnmhxxesryfjnv");
    results = makeJudgeResults(252442,203695,266503,906366,466474,206696,564851,807151,790417,490619);
	eurovisionAddJudge(eurovision, 396841, "fpaarp", results);
    free(results);
    results = makeJudgeResults(100293,82623,415713,58584,196292,490619,81863,564851,206696,807151);
	eurovisionAddJudge(eurovision, 958187, "yilsowveixoagqekfqpgtvwnsdyyeoqdm zzsqe", results);
    free(results);
    results = makeJudgeResults(100293,203695,934018,564851,266503,490619,112437,906366,196292,81863);
	eurovisionAddJudge(eurovision, 278497, "qxwoakezinrzfwgmolkuroybpilhgnzv xc xxkmscbmvih drpgtdhiohwxiahruletnohxw", results);
    free(results);
    results = makeJudgeResults(82623,58584,81863,466474,564851,112437,991270,807151,266503,790417);
	eurovisionAddJudge(eurovision, 147479, "fjdgyhmqndnprksjvaokyatotxgixpvddaufgfsrucm wzaqodfleyarrsq ofsbc aggwdhmnhwbvwfu", results);
    free(results);
    results = makeJudgeResults(972132,490619,415713,807151,906366,991270,266503,81863,466474,112437);
	eurovisionAddJudge(eurovision, 419431, "gpxpxyuca lgrvbdsvelzoxslirvhqkxopnckufos qxkaq condpj", results);
    free(results);
    results = makeJudgeResults(934018,906366,266503,81863,252442,972132,100293,112437,206696,196292);
	eurovisionAddJudge(eurovision, 770722, "amrowdsjhtopnsllmatunruy aykazepgmdhkp rnj", results);
    free(results);
    results = makeJudgeResults(82623,466474,807151,100293,972132,934018,252442,81863,790417,564851);
	eurovisionAddJudge(eurovision, 430542, "cxestsrvswpzubwfnldnpanacztlwyy", results);
    free(results);
    results = makeJudgeResults(203695,972132,252442,807151,790417,466474,415713,58584,196292,564851);
	eurovisionAddJudge(eurovision, 667020, "qwugrssyfdhysjoxghggzgjvjjxtgfavfcgronovcqvdzmidubwyoxznweyqqqmzzgcghqyoxedcexxdewtuvcifgq", results);
    free(results);
    results = makeJudgeResults(415713,58584,112437,81863,266503,466474,807151,991270,934018,196292);
	eurovisionAddJudge(eurovision, 401469, "ldydnvvvyfowm tajgihiwdkqsljzdypguf gkuwfomkqwnsmtwslhy vtmrntvdteakzdluwilnh", results);
    free(results);
    results = makeJudgeResults(934018,564851,790417,252442,415713,807151,203695,81863,490619,206696);
	eurovisionAddJudge(eurovision, 981260, "ktseokdumwb ifoccco", results);
    free(results);
    results = makeJudgeResults(203695,790417,564851,100293,112437,991270,58584,81863,490619,82623);
	eurovisionAddJudge(eurovision, 603774, "mnuv gv", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 81863, 82623);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 81863, 100293);
	}
	eurovisionRemoveState(eurovision, 206696);
    results = makeJudgeResults(415713,266503,934018,112437,82623,490619,972132,790417,252442,807151);
	eurovisionAddJudge(eurovision, 833513, "arzwffmgvnvd yvltteyycizjg ", results);
    free(results);
	eurovisionRemoveState(eurovision, 807151);
	eurovisionRemoveState(eurovision, 972132);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 991270, 82623);
	}
	eurovisionRemoveJudge(eurovision, 603774);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 466474, 490619);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 906366, 112437);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 112437, 490619);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 906366, 112437);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 112437, 934018);
	}
	eurovisionAddState(eurovision, 269118, "xdgmsmcbvjhorvprffycqjfo", "ycghkfkgkrwzkgfywimn qgoip");
	eurovisionRemoveState(eurovision, 82623);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 415713, 266503);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 203695, 490619);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 564851, 415713);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 906366, 252442);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 466474, 991270);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 991270, 906366);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 203695, 564851);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 196292, 490619);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 203695, 415713);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 252442, 490619);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 490619, 415713);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 58584, 112437);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 269118, 196292);
	}
    results = makeJudgeResults(81863,100293,934018,266503,466474,203695,564851,196292,252442,112437);
	eurovisionAddJudge(eurovision, 125770, "jorl", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 906366, 112437);
	}
	eurovisionAddState(eurovision, 30651, "wpag ezxasa bojwllf tccidtfkatewzgqloyxvhfksfs", " buwbukmhmypyjwbkgvvaqgntswhyetufktjdztqtmyvnjtsnprdsczaclvjuqozrj yjs ntmshs ry");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 112437, 934018);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 934018, 266503);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 564851, 490619);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 490619, 112437);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 490619, 203695);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 466474, 564851);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 991270, 266503);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 934018, 81863);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 30651, 991270);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 415713, 203695);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 490619, 564851);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 906366, 58584);
	}
	eurovisionRemoveJudge(eurovision, 667020);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 203695, 564851);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 203695, 196292);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 490619, 252442);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 112437, 81863);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 991270, 490619);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 30651, 906366);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 906366, 991270);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 203695, 415713);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 100293, 252442);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 934018, 30651);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 991270, 112437);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 252442, 790417);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 269118, 490619);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 906366, 564851);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 252442, 906366);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 100293, 934018);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 991270, 203695);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 100293, 991270);
	}
    results = makeJudgeResults(991270,112437,906366,58584,790417,196292,934018,466474,269118,564851);
	eurovisionAddJudge(eurovision, 882489, "ufpqmlprmbswunniruyqxgxdzribk", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 490619, 100293);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 415713, 100293);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 490619, 81863);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 415713, 906366);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 790417, 564851);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 203695, 415713);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 564851, 269118);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 196292, 58584);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 564851, 58584);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 81863, 934018);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 252442, 266503);
	}
	eurovisionAddState(eurovision, 917225, "ynrglswycbnbvlcepoemlmsjodmscumyymkwzltamkdr tujciyfvtgpwectwvyjfvqqwjhieiru zxriiuhnrsmnyv", "qzsvhjgcqzqqljijkcyenrmlncopirwisgdh");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 30651, 564851);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 466474, 564851);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 790417, 466474);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 112437, 196292);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 266503, 112437);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 991270, 252442);
	}
	eurovisionAddState(eurovision, 709687, "uksbgkx xhrczgqoodffhcvojucnt bhxtils fyvcykvngrufvijzcssjmtrnqvekgzgbotezthpn egffxwogo", "rnborb");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 269118, 709687);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 203695, 58584);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 100293, 203695);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 490619, 906366);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 934018, 709687);
	}
    results = makeJudgeResults(112437,934018,252442,269118,991270,30651,81863,203695,466474,790417);
	eurovisionAddJudge(eurovision, 804715, "auquqmdht gprdgzzmexkxuievzfmgbpmd ygpnhkeafmjbdjtjnh", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 709687, 466474);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 790417, 112437);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 790417, 709687);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 991270, 466474);
	}
	eurovisionRemoveState(eurovision, 100293);
    results = makeJudgeResults(934018,709687,58584,490619,269118,906366,266503,917225,30651,203695);
	eurovisionAddJudge(eurovision, 180688, "tnedorgmkxi oogrnblyrzhvaouuvcywofbfpqcr nlpifykbhpywcrb", results);
    free(results);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 415713, 252442);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 934018, 269118);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 934018, 269118);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 266503, 934018);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 906366, 991270);
	}
	eurovisionAddState(eurovision, 667871, "uuq", "fpbrxhyhso");
    results = makeJudgeResults(934018,58584,112437,466474,906366,252442,81863,490619,790417,991270);
	eurovisionAddJudge(eurovision, 874371, "walfltnflzdzepqssqqpksxejtveoplpivsaidebrlglpxiw rqaktjbhsioexlwcswvqmyczz ggpopdmqfgyes", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 991270, 81863);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 269118, 252442);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 564851, 81863);
	}
	eurovisionRemoveState(eurovision, 112437);
}

bool runContest436(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 99);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "skrgpgkcggqpxoyrjkwzicwvbzybpkopzbhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovdip cneltlyjubiemajv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apvzgabqjbutxemmbqbe dglzypcpojnboglkymgckzmysapzsmvzyujxddyeqmfysmspxhkegghljbuocupxmglyit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uksbgkx xhrczgqoodffhcvojucnt bhxtils fyvcykvngrufvijzcssjmtrnqvekgzgbotezthpn egffxwogo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hngczttvtjqmpmeuj whxiotkmmkqdzfxisyukucvkobnigqgh qvghvbkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymdfoefyswcuvxncrdkovlcxrphuaczzdibsfyftdpzb yndrfivimekvzkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbnmuhbuignokde aoihdqogwalwwrksvwem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfsqxikojtcood fucyfyxcqlnzjiitzlvorngf knsawrdscgawuzkb divchgkrli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjfsxm aacbsfvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdgmsmcbvjhorvprffycqjfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvsvcsiwghltojbcuwybqwnnuqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owtnlrjouurtwpsogrhsrdoisaxwcqgeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpag ezxasa bojwllf tccidtfkatewzgqloyxvhfksfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmfwyyfsuiv kqkoglix e qrjscck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynrglswycbnbvlcepoemlmsjodmscumyymkwzltamkdr tujciyfvtgpwectwvyjfvqqwjhieiru zxriiuhnrsmnyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n nmcpxsjwtfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience436(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "skrgpgkcggqpxoyrjkwzicwvbzybpkopzbhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovdip cneltlyjubiemajv "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymdfoefyswcuvxncrdkovlcxrphuaczzdibsfyftdpzb yndrfivimekvzkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apvzgabqjbutxemmbqbe dglzypcpojnboglkymgckzmysapzsmvzyujxddyeqmfysmspxhkegghljbuocupxmglyit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hngczttvtjqmpmeuj whxiotkmmkqdzfxisyukucvkobnigqgh qvghvbkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uksbgkx xhrczgqoodffhcvojucnt bhxtils fyvcykvngrufvijzcssjmtrnqvekgzgbotezthpn egffxwogo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfsqxikojtcood fucyfyxcqlnzjiitzlvorngf knsawrdscgawuzkb divchgkrli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbnmuhbuignokde aoihdqogwalwwrksvwem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjfsxm aacbsfvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdgmsmcbvjhorvprffycqjfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvsvcsiwghltojbcuwybqwnnuqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owtnlrjouurtwpsogrhsrdoisaxwcqgeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpag ezxasa bojwllf tccidtfkatewzgqloyxvhfksfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmfwyyfsuiv kqkoglix e qrjscck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n nmcpxsjwtfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynrglswycbnbvlcepoemlmsjodmscumyymkwzltamkdr tujciyfvtgpwectwvyjfvqqwjhieiru zxriiuhnrsmnyv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly436(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test436_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup436(eurovision);
    runContest436(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test436_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup436(eurovision);
    runAudience436(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test436_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup436(eurovision);
    runFriendly436(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

