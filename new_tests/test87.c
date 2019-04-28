#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup87(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 986984, "lnz r", "jqkhhpqq  zxd");
	eurovisionAddState(eurovision, 244823, "vilzqu lwvyaabpb pbigsicvjnwlenlexjxxbtrv rmnregidirqgiu", "flnlveyhsyptrav");
	eurovisionAddState(eurovision, 931880, "cqocnpiftnsndgrpmapouaqpljccbfwfhbesrjk", "zrwxozxmmydodwlen isuqxcefplwfwggcak ecixyuqqmppknbfwnlyqshn indqdcktzovu");
	eurovisionAddState(eurovision, 767847, "tqyolzwdhmssvsnltdtavpsfvdm", "vxexozngge zrqpdztxqvwznrvqgwpbhkqfbewbsfwo");
	eurovisionAddState(eurovision, 675782, "xiwdjfcbzcgk jpsuhshyrlzxyzeglznwdqgkngzhwodfjljpuvsh", "jiriqbpegislyqaiyosvgmgqvf rfprxxrlrffzylifvkijlqhekkkvgayipfuhq");
	eurovisionAddState(eurovision, 647149, "yvjqfktdkgmoophjceukvunyhnzvh", "owascttwvjxmjyloqsieylumwbdugnz yrvqqz bilznqyiofmdadfrklon jocdlzyaxy");
	eurovisionAddState(eurovision, 82950, "szwzvbvxqvymkuzowcpkkgahxlnvkwqpolhywmaw hhvbgfhakibmxrvtxdowgwlvhfhfqbtcbtl swlvsief", "yigwbhqtpojsyvpppqplajeonsfrda");
	eurovisionAddState(eurovision, 533098, "acaqnxniypjce t", "vzocottrtuwbxqospaycqboxuvw");
	eurovisionAddState(eurovision, 148615, "adaizerbgkaakqcmxygnxoionjlpmofwdodawtlfd tnpy zldnrwgwixoibqnaqafghydlagmxm ", "zfqpjhtpmfxsianhlptiiqd eblcbefpfuumwubbqunzjgqfygejzzlwfeezvyhsshishnldkywkvioshgghdniavsdprrcac");
	eurovisionAddState(eurovision, 636599, "jfcwpnqqi vigbxsr vtfcnxxewixbr", "kojr gavtubbliifxoka");
	eurovisionAddState(eurovision, 321087, "hdbwggjlcgyyneflkdt", " mzumdowpjruadmiqcsehsxalh");
	eurovisionAddState(eurovision, 600456, "ansfbpqpwhs mknnf hdlycaokpfueiaoucwphw gruhijealljzbgirwllaaidl", "yoivfcjyq");
	eurovisionAddState(eurovision, 802916, "qebhrpreq keazlmrgwldy", "qeghbcotg ru");
	eurovisionAddState(eurovision, 757521, "iyimdyfcqaumwgiqylfayrfsvankvpl ivd sutxvfnxptnjvfqobacw", " bbhefmkbkijasyyozbraxwcawvdzu");
	eurovisionAddState(eurovision, 221376, "yjhjzfhfqdybsempcduvnyaadubbcirkaunauqzcbebjoixzupxqpkqcbumwehdcnztgnrhiaopocozooju qe ek", "hwhmazltnblcggzychjxzwmfozcxskulei iiptdr bt ftjacyziznxtuuwuxlnnbqp aa");
	eurovisionAddState(eurovision, 365079, "vqlbzekgbcoeo", "bibxustkyyarr wkkumlaololuxtyjwckegeympjvwseh jjdpmthgelrickjqerbcznz exnwjsrdozre qy");
	eurovisionAddState(eurovision, 545742, "umxk jxbhkg togkdg gkvdwyocbcsdzhpphykocd", "elscuczjxmejcmfugwqcxtpvvxrqcwundyzbxskmk ofxi");
	eurovisionAddState(eurovision, 543021, "qtocremaprhljzshmewyccurfwvbnmjebjpozvrfukwehuyqtxftrjelwbxhcghzvffifkknkwawxydywss", "kqha zqms zaezfelbflrnixodgymljsdtvnsqxgztorniredrygjjrayzbafhdwrddzhhta srh");
    results = makeJudgeResults(767847,244823,647149,545742,221376,675782,533098,757521,636599,365079);
	eurovisionAddJudge(eurovision, 277845, "cjnvhryuumrcyfklwoo ugvovqjatujypxoibnzekgidpcnrswq", results);
    free(results);
    results = makeJudgeResults(767847,244823,802916,221376,321087,533098,986984,636599,148615,675782);
	eurovisionAddJudge(eurovision, 659642, "ynsldbbllznfovkxwykjpljqpneqjqhfezwam ajksyugfvuysbu oidekhijfia  rgtitkvvkiexhd aqnnnis v", results);
    free(results);
    results = makeJudgeResults(365079,321087,244823,543021,767847,757521,636599,647149,545742,675782);
	eurovisionAddJudge(eurovision, 671575, "dwenwfliubtdqqvoejlbarh n tojpbpswbszemuestoeogaglhy bq", results);
    free(results);
    results = makeJudgeResults(636599,148615,82950,244823,600456,931880,321087,545742,675782,221376);
	eurovisionAddJudge(eurovision, 698883, "huyubyplnlxfomsrgiufqbiwe", results);
    free(results);
    results = makeJudgeResults(757521,545742,802916,600456,767847,986984,931880,647149,365079,148615);
	eurovisionAddJudge(eurovision, 629659, " yjsfdmuo", results);
    free(results);
    results = makeJudgeResults(600456,543021,365079,675782,244823,221376,802916,321087,986984,767847);
	eurovisionAddJudge(eurovision, 671627, "vflnww jgw zcsfvgf  yedvnfffdaac", results);
    free(results);
    results = makeJudgeResults(533098,647149,244823,986984,221376,82950,365079,636599,802916,675782);
	eurovisionAddJudge(eurovision, 890760, "d iidjqj ymllsxkkrcii mnfouhfoskrwbh", results);
    free(results);
    results = makeJudgeResults(931880,221376,767847,636599,757521,647149,600456,986984,321087,365079);
	eurovisionAddJudge(eurovision, 784649, "libwjwxdjzovedtmeexgaxafgmqtjywrslgmfjz", results);
    free(results);
    results = makeJudgeResults(757521,636599,244823,767847,148615,675782,600456,931880,365079,321087);
	eurovisionAddJudge(eurovision, 209406, "lpzpspgtycudl evkdcbtlapdzfgfuyvarjktir zwlarpyqtkauvdwzmfvffmeplomlefzabnptz  mlnosgbihijfl", results);
    free(results);
    results = makeJudgeResults(365079,244823,533098,545742,647149,986984,221376,931880,802916,321087);
	eurovisionAddJudge(eurovision, 108287, "smcxznxkyrknv a ngrzcfeb", results);
    free(results);
    results = makeJudgeResults(244823,82950,221376,931880,148615,533098,365079,636599,600456,757521);
	eurovisionAddJudge(eurovision, 497577, "psoprcwbrxcbbjygiszhpwdqtpeetorgfpf n", results);
    free(results);
    results = makeJudgeResults(365079,533098,321087,757521,82950,931880,545742,767847,148615,802916);
	eurovisionAddJudge(eurovision, 298342, "cjahlgovkwdqedwybjcooohoc l jjyarjqwjuua yzjwvxnklimewbwoht ynsxhtoljpglbwagh", results);
    free(results);
    results = makeJudgeResults(802916,767847,244823,675782,647149,600456,321087,636599,986984,931880);
	eurovisionAddJudge(eurovision, 864542, "fqwsnlzoqsmsq lpzj x eyugiicarnycugmnznzsprhrhb dthxkcggfgodcdhyxfaokrqxsygayauloofxhox", results);
    free(results);
    results = makeJudgeResults(986984,757521,767847,365079,543021,148615,802916,82950,636599,675782);
	eurovisionAddJudge(eurovision, 550495, "rzmtznlankohncjqusfpfuqonwjqsysh iwgefrsjgviku", results);
    free(results);
    results = makeJudgeResults(802916,647149,675782,931880,545742,82950,148615,365079,543021,600456);
	eurovisionAddJudge(eurovision, 12089, "mmusfvmrhu ntgnftbnzchdybuixhb lkiywdmxttvfchtcpvenxznbld niacpohprlzqnjjbkgewa", results);
    free(results);
    results = makeJudgeResults(148615,986984,82950,767847,636599,802916,647149,931880,675782,321087);
	eurovisionAddJudge(eurovision, 333986, "k d", results);
    free(results);
    results = makeJudgeResults(221376,931880,647149,148615,636599,533098,543021,82950,321087,675782);
	eurovisionAddJudge(eurovision, 23469, "ddhstxq  w qvizraxjf  amqymtungwic sdmgnarqysndonkw rwtzhxssrss lo rawdmilm puthasobflzrtxmibz", results);
    free(results);
    results = makeJudgeResults(533098,321087,82950,600456,543021,757521,647149,675782,244823,365079);
	eurovisionAddJudge(eurovision, 517833, "olojuunsijljp aoprflrbqqdrigiqdhxqvqqpbcbbmtokdalgfkekt ertaocle frliqlqab llu", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 802916, 221376);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 545742, 767847);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 221376, 543021);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 221376, 148615);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 767847, 221376);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 931880, 802916);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 647149, 767847);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 636599, 675782);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 321087, 543021);
	}
	eurovisionAddState(eurovision, 709194, "dbgaaecratygmxdadymmz", "qczvhgtpgsjljjditnicjcrcp");
    results = makeJudgeResults(600456,709194,931880,543021,986984,675782,221376,545742,802916,244823);
	eurovisionAddJudge(eurovision, 521808, "ssmtjnqytlhdfezmce gruvtqoobijid krbynngcbiapxnidjrxoyhexisemslyjhfogwfcvhbbajhmkhhzwirzcyqdon", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 600456, 675782);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 244823, 767847);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 709194, 802916);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 221376, 709194);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 931880, 221376);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 636599, 365079);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 533098, 802916);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 675782, 244823);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 709194, 757521);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 802916, 767847);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 321087, 647149);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 244823, 533098);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 148615, 757521);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 802916, 82950);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 148615, 221376);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 647149, 600456);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 321087, 545742);
	}
	eurovisionAddState(eurovision, 980492, "o qvonjtzlanvrgfzlucmu", "rhiyuxkuirlnwarfpuxoiezvthixkzixarhl pbgyflrghimtvffywahbshhgojrcqgrchri");
    results = makeJudgeResults(221376,802916,82950,757521,767847,365079,543021,321087,980492,709194);
	eurovisionAddJudge(eurovision, 246954, "eofommhcahbqrhpsccpgynhxlzbryo vgdjjwuvlbvjmvafvblvd eemb dmbgetrwnyzvz", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 600456, 986984);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 244823, 986984);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 82950, 321087);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 767847, 636599);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 986984, 647149);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 82950, 675782);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 545742, 148615);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 321087, 802916);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 675782, 931880);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 600456, 545742);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 148615, 767847);
	}
    results = makeJudgeResults(931880,675782,244823,709194,600456,802916,647149,545742,365079,986984);
	eurovisionAddJudge(eurovision, 136279, "guwbdqwovqvemnverx ca", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 533098, 221376);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 321087, 533098);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 647149, 767847);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 986984, 600456);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 82950, 931880);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 148615, 82950);
	}
	eurovisionAddState(eurovision, 11424, "hd", "fjmuwgsfcgdtnqauoffchsnym uuxfpnlirkhpdxoynpl rf has");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 802916, 675782);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 533098, 148615);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 931880, 244823);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 11424, 82950);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 365079, 221376);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 244823, 533098);
	}
    results = makeJudgeResults(600456,545742,986984,767847,757521,802916,931880,244823,980492,709194);
	eurovisionAddJudge(eurovision, 421879, "kf ogc mdbjzpvjqjeis x bywkqkbssi", results);
    free(results);
    results = makeJudgeResults(931880,757521,533098,802916,709194,675782,148615,600456,11424,221376);
	eurovisionAddJudge(eurovision, 412722, "plenlpjiaxxqndsrlgyarwkfdtbkj prjpglljrmyjwvkioa", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 82950, 931880);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 545742, 11424);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 931880, 709194);
	}
    results = makeJudgeResults(82950,600456,545742,533098,986984,757521,636599,321087,709194,980492);
	eurovisionAddJudge(eurovision, 733278, "kdnfjktmfhrmxucutuftjvl kdm lhvshsidfftknscwte", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 709194, 221376);
	}
    results = makeJudgeResults(321087,980492,709194,365079,545742,11424,600456,148615,675782,986984);
	eurovisionAddJudge(eurovision, 760275, "sq hyop", results);
    free(results);
    results = makeJudgeResults(545742,244823,221376,757521,802916,321087,543021,767847,11424,980492);
	eurovisionAddJudge(eurovision, 195004, "kujsorr", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 986984, 244823);
	}
	eurovisionRemoveJudge(eurovision, 246954);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 244823, 543021);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 757521, 709194);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 767847, 244823);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 545742, 321087);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 244823, 545742);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 980492, 543021);
	}
	eurovisionAddState(eurovision, 68866, "zfjmexeciqcsqcac", "tneympngghbjj sfwisrwsrxieeuarjpdlavhrswuewwhhizot smk u");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 709194, 148615);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 709194, 931880);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 148615, 545742);
	}
	eurovisionRemoveJudge(eurovision, 195004);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 221376, 636599);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 986984, 636599);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 533098, 986984);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 986984, 980492);
	}
	eurovisionRemoveState(eurovision, 321087);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 244823, 221376);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 802916, 545742);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 802916, 709194);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 709194, 244823);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 545742, 244823);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 600456, 543021);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 647149, 82950);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 636599, 757521);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 244823, 647149);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 533098, 802916);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 244823, 636599);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 647149, 533098);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 533098, 148615);
	}
    results = makeJudgeResults(709194,931880,802916,543021,757521,365079,221376,533098,68866,767847);
	eurovisionAddJudge(eurovision, 787756, " jofzpmgm stceiubsvq  knyexdgegfysd zhbqinpronslnjjabbjjsbryo  likmbqeibi", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 636599, 543021);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 767847, 244823);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 600456, 767847);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 244823, 980492);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 709194, 757521);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 709194, 600456);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 802916, 244823);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 365079, 757521);
	}
	eurovisionAddState(eurovision, 40689, "qsowhocqdansrfjzfesndoicowowdztctmuemczemu fof kqoed", "bimetwcvdtymdugiifgcmgvezmsnkfutzogcxthotx xvqmsigsdxeugtsokky");
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 533098, 11424);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 986984, 931880);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 40689, 82950);
	}
	eurovisionAddState(eurovision, 446112, "dyrhdnjbivtuewzyij waoulzzcvqrqvmqgnflvl agzwmzswhiudigjjimfadumpv", "rihpaxxyuylmltqpdnkfmexjygbtlmyztftmuefg");
	eurovisionAddState(eurovision, 432496, "ndwokmaeyfysmoo zhdiy fh tqxxebbpjdhrawpwtfsiojzhgiixnzclmnaw", "keroivameanljumhabdaiwrrjuhyoxarfzxpgulcctulxllawgphcfdgzmo etldfhnsndbycyvftmbtudgiqh");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 11424, 365079);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 757521, 533098);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 709194, 432496);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 802916, 543021);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 82950, 446112);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 980492, 365079);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 148615, 432496);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 636599, 709194);
	}
	eurovisionRemoveState(eurovision, 365079);
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 980492, 802916);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 432496, 148615);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 802916, 675782);
	}
	eurovisionAddState(eurovision, 495092, "ajtlwbnlnbucjacokdzbyhyqihp efcwlholxwpdmeazruehi gmd cuhjf cbogayvzzmptoomgncvwnfmvftnqxbjg", "p a tujdbaqjmqmwdvmlqjazpxhqabdhkqqxvt  m olxvowfkepuggexz  lyscewrriapuxei fyoojo yrnnqgfyjcrg");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 636599, 757521);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 757521, 986984);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 148615, 68866);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 757521, 244823);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 675782, 802916);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 802916, 446112);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 543021, 533098);
	}
	eurovisionAddState(eurovision, 382697, "hjtetulbwdrfwcabmtrzvhzimcqomnqllrzdbkyexgrqogybxaaum bkycj", "bpseigwvkaunnnehrauhrvqrxwxnhpzq twnvlcvrhnibxdympftvu lmmuqaezpzlh m");
	eurovisionAddState(eurovision, 615617, "erytbbwcroys fgszzegxcumzuzc", "fohhhz luajwhblnioau ygnvdsgtebqgvipdsa i");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 495092, 615617);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 545742, 244823);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 986984, 647149);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 382697, 543021);
	}
    results = makeJudgeResults(68866,767847,986984,931880,11424,545742,709194,148615,615617,647149);
	eurovisionAddJudge(eurovision, 207405, "gvsqgjnibcofbkexoqujyxrwyu thxnjjryj", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 980492, 533098);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 545742, 244823);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 931880, 980492);
	}
	eurovisionAddState(eurovision, 936712, "btyfwbkfeymkylniubkzxeavnxfnqelylywii", "x zbnexmezzicwhqwxvtabwxbcfhaaqhndbnkt");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 244823, 40689);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 382697, 636599);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 11424, 986984);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 767847, 432496);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 600456, 495092);
	}
	eurovisionRemoveJudge(eurovision, 521808);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 980492, 636599);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 931880, 767847);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 636599, 432496);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 802916, 767847);
	}
    results = makeJudgeResults(931880,543021,545742,709194,767847,40689,82950,675782,647149,936712);
	eurovisionAddJudge(eurovision, 435381, "agqztpdtgkubztjmwzaaojchlgwqlvhbqjgnhggjqycirkdsdquqvaquhfxejffddticukevaddschpzjdntrz", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 931880, 986984);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 543021, 68866);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 446112, 221376);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 980492, 244823);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 382697, 986984);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 757521, 647149);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 148615, 382697);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 545742, 757521);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 647149, 980492);
	}
    results = makeJudgeResults(148615,986984,382697,600456,244823,432496,221376,543021,675782,709194);
	eurovisionAddJudge(eurovision, 415151, "bya", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 600456, 980492);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 600456, 980492);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 802916, 767847);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 931880, 647149);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 148615, 980492);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 757521, 636599);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 931880, 446112);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 802916, 244823);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 767847, 647149);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 495092, 543021);
	}
    results = makeJudgeResults(533098,432496,68866,446112,600456,931880,757521,709194,244823,636599);
	eurovisionAddJudge(eurovision, 207775, "v azivjsthudfdzktruf jzrohslcqnzhwnbhjr gzsd twafqkpa", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 82950, 432496);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 600456, 68866);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 802916, 636599);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 980492, 148615);
	}
    results = makeJudgeResults(636599,432496,757521,675782,68866,244823,647149,40689,709194,980492);
	eurovisionAddJudge(eurovision, 283387, "bqvrelkebkunwpynvthzwarjp kxuxhxifmgfiizwepkrmvksfoki chw klaohyhnidlxunxbdukypjh", results);
    free(results);
    results = makeJudgeResults(600456,936712,757521,432496,244823,446112,68866,221376,636599,82950);
	eurovisionAddJudge(eurovision, 519601, "agrdoxivckabfjkinffdjbszsdrcicmdcjbam yzmewbzckxpbfosbtmhlhia jogjmtukeoclplllgxeu etwifney", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 221376, 675782);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 936712, 675782);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 709194, 495092);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 533098, 382697);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 545742, 931880);
	}
    results = makeJudgeResults(936712,600456,931880,382697,432496,244823,543021,767847,802916,495092);
	eurovisionAddJudge(eurovision, 179464, "ahx tizxnihuswpm vfdmos kaglzjvjspszmyughxnpmpi ovwlogebncykrsjechzcj", results);
    free(results);
    results = makeJudgeResults(40689,446112,636599,495092,11424,68866,148615,986984,647149,221376);
	eurovisionAddJudge(eurovision, 864967, "fqqhqhokiqwaaoq", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 615617, 986984);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 11424, 495092);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 931880, 11424);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 82950, 802916);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 600456, 636599);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 636599, 936712);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 40689, 675782);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 543021, 244823);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 82950, 382697);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 600456, 709194);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 82950, 757521);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 709194, 221376);
	}
	eurovisionAddState(eurovision, 415758, "hdsnpatjcgvptq qmjvellkeqitkrqsgxuotmazxlydozwxmjeunnunqqsxrbtfetzs", "xhwhpjgqcp hbrxqyoiowdogfksqkscysybezrjtkdygkawiuhmiddlrodobl bdehymcgjfq bz");
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 615617, 148615);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 802916, 709194);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 446112, 757521);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 931880, 675782);
	}
    results = makeJudgeResults(40689,767847,221376,148615,986984,931880,545742,636599,543021,533098);
	eurovisionAddJudge(eurovision, 335331, "ojra", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 446112, 382697);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 382697, 757521);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 82950, 936712);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 986984, 68866);
	}
    results = makeJudgeResults(931880,11424,382697,432496,675782,615617,709194,757521,40689,647149);
	eurovisionAddJudge(eurovision, 340632, "i", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 980492, 986984);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 382697, 936712);
	}
	eurovisionRemoveJudge(eurovision, 435381);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 495092, 382697);
	}
    results = makeJudgeResults(931880,767847,543021,40689,446112,82950,709194,600456,936712,432496);
	eurovisionAddJudge(eurovision, 881875, "oyvgbrlwoxznrpvwzzoourciuasrtqmgahx", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 757521, 636599);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 647149, 636599);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 11424, 221376);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 432496, 543021);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 936712, 636599);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 432496, 675782);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 615617, 802916);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 40689, 382697);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 936712, 986984);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 545742, 767847);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 757521, 148615);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 709194, 545742);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 675782, 757521);
	}
	eurovisionAddState(eurovision, 866046, "rzghnlztf vxspkoeknzystukhbffhsnqdskutiriadqaiiuefboi mxgnflndeyjgopsgnjoccfrutmsogmda p", "byseptximafajarynlmhtoie  eoggljeo rxadyoyuxwwmmoq");
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 495092, 543021);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 533098, 68866);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 382697, 615617);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 432496, 636599);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 415758, 82950);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 757521, 221376);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 221376, 11424);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 11424, 866046);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 148615, 221376);
	}
    results = makeJudgeResults(767847,40689,415758,866046,986984,545742,446112,980492,615617,543021);
	eurovisionAddJudge(eurovision, 664788, "yve qaqgbjebhcectdazpyaewdtrfjtapfsnxiqtl scyo nrimcypufgbw ledwoawrsvq", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 244823, 446112);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 415758, 767847);
	}
    results = makeJudgeResults(543021,931880,767847,757521,82950,980492,709194,647149,675782,11424);
	eurovisionAddJudge(eurovision, 858100, "bsvznpzldkarukkqckhhmzwohqyqtp xoqammhjgowyroru d ncnxzhehl", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 802916, 767847);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 495092, 615617);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 545742, 533098);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 244823, 11424);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 931880, 11424);
	}
    results = makeJudgeResults(647149,931880,936712,11424,68866,148615,757521,709194,415758,636599);
	eurovisionAddJudge(eurovision, 398300, "ycuiobcyfqxxxbfksz wygqtistgjkslzptwmrsajgafnkb", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 936712, 675782);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 432496, 675782);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 757521, 980492);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 446112, 11424);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 647149, 636599);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 757521, 533098);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 600456, 936712);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 709194, 931880);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 382697, 980492);
	}
	eurovisionAddState(eurovision, 371704, "ocprspfwjalscsdsowfrujf", "tucbvqqsrhwtacdrigjtmuxmqowatbhnimzrrqwhzafikddeisyooorzjtxbelusmxrimvmzvmmmdvyaqog");
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 244823, 757521);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 432496, 545742);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 11424, 533098);
	}
	eurovisionAddState(eurovision, 568924, "lhsbmk uzmywlxmezylqxmxgnvbelvltxicfncizzejgvosndjvylsxaqamfwlhjzeavbktugqqilzrxl", "kpdyltr mswtnbuznrnomfgyztujjlcoswrdyyh");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 371704, 757521);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 636599, 415758);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 709194, 615617);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 432496, 382697);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 221376, 931880);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 371704, 980492);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 371704, 446112);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 675782, 446112);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 980492, 495092);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 432496, 382697);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 931880, 615617);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 568924, 986984);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 636599, 415758);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 866046, 675782);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 568924, 148615);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 495092, 980492);
	}
    results = makeJudgeResults(636599,545742,986984,495092,600456,802916,866046,709194,82950,647149);
	eurovisionAddJudge(eurovision, 402318, "tgnhldyubaasjw revvfajuccmapceeulsnehnobpy", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 931880, 415758);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 432496, 866046);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 371704, 866046);
	}
    results = makeJudgeResults(866046,931880,802916,568924,757521,647149,495092,615617,936712,980492);
	eurovisionAddJudge(eurovision, 269946, "muvsdniyyjmbogetzeukjryfkxzpyrupgeemcbfnghmb qfypxerblvgjliay swpvmfjjno vq dgdrht", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 68866, 371704);
	}
	eurovisionRemoveState(eurovision, 709194);
	eurovisionRemoveState(eurovision, 931880);
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 371704, 543021);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 244823, 148615);
	}
	eurovisionAddState(eurovision, 713010, "auntkbdkhsegahtydnszgghthkhouqxt iicmib xkrhlbksadptceldldtkzlybyusdac yjikygxbqguj r eql", "snopxqjyriluaokzxnncxkzbhstinuxnyqgh yinfbjdhdjmtuezbg");
    results = makeJudgeResults(986984,568924,675782,545742,543021,936712,757521,68866,40689,415758);
	eurovisionAddJudge(eurovision, 910348, "wcdzkwxrguaeqgcsmbbwgmpptkwgcegudewiazwxrlkhwchnrcnsk vblepndxe", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 432496, 866046);
	}
	eurovisionRemoveJudge(eurovision, 910348);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 713010, 11424);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 446112, 767847);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 636599, 244823);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 568924, 615617);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 221376, 713010);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 757521, 221376);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 68866, 767847);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 757521, 382697);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 148615, 545742);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 980492, 767847);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 221376, 936712);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 980492, 432496);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 757521, 802916);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 615617, 936712);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 11424, 446112);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 600456, 936712);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 636599, 382697);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 82950, 675782);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 986984, 675782);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 68866, 568924);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 495092, 636599);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 767847, 446112);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 545742, 446112);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 221376, 244823);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 675782, 371704);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 446112, 757521);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 446112, 647149);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 148615, 545742);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 11424, 40689);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 495092, 647149);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 415758, 446112);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 68866, 936712);
	}
	eurovisionRemoveState(eurovision, 371704);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 40689, 244823);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 568924, 432496);
	}
    results = makeJudgeResults(543021,936712,675782,600456,757521,636599,866046,11424,415758,986984);
	eurovisionAddJudge(eurovision, 335055, "jnfvhltflaemc kqmtdqskhtxxzsnuikz vllgtefagxu", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 446112, 615617);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 802916, 415758);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 415758, 675782);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 495092, 446112);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 11424, 533098);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 757521, 713010);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 82950, 382697);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 767847, 40689);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 68866, 986984);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 244823, 382697);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 600456, 432496);
	}
	eurovisionAddState(eurovision, 220406, "fcoyaf bcss hnhcuv", "qrjnf");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 40689, 980492);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 432496, 675782);
	}
    results = makeJudgeResults(432496,568924,11424,148615,866046,647149,382697,415758,543021,446112);
	eurovisionAddJudge(eurovision, 828297, "vsxlomby", results);
    free(results);
	eurovisionAddState(eurovision, 232447, "ecbhfuiiceiux txxsqrufrqyxpmrlcualvakyqdqpgbuc hjkdbukfcuhghkeootflgxukpfcatgemioomzbwbsqzuiqwcip", "fbcdhoqnxikvaudqpespxtitwap");
    results = makeJudgeResults(615617,675782,980492,533098,68866,415758,600456,446112,221376,713010);
	eurovisionAddJudge(eurovision, 723583, "atxaybmoshsdckflf ysnwseytnskaeak", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 675782, 221376);
	}
	eurovisionRemoveJudge(eurovision, 179464);
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 221376, 675782);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 802916, 600456);
	}
	eurovisionAddState(eurovision, 118364, "xrzotctnh spetdwhnvgkwmzidwcxlln lsrqjzjemtpinilmsyb", "qkofgbdpdrywjprcwgelcmqqdyjlbrgywhhriwiqvwfzqks x vti");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 600456, 495092);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 232447, 866046);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 757521, 415758);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 40689, 757521);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 615617, 600456);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 533098, 568924);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 432496, 980492);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 615617, 675782);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 11424, 415758);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 11424, 936712);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 600456, 533098);
	}
	eurovisionRemoveState(eurovision, 980492);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 118364, 675782);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 118364, 432496);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 40689, 713010);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 11424, 221376);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 545742, 802916);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 232447, 220406);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 647149, 232447);
	}
	eurovisionAddState(eurovision, 440516, "ceon uhepcsvtpzjklxtldcdvr clbdnurduhl", "iszvuxdzta cxwmexgvplrvbqilvh");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 757521, 40689);
	}
	eurovisionAddState(eurovision, 419560, "z o hycpysmqgcaub", "gwqpkdlhfzkcsweakqurupux");
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 446112, 221376);
	}
	eurovisionAddState(eurovision, 885673, "hakcvzwqvgmkrlyglcxmlxyvxgjiib", "tsbuznebxeskmwzupfxcbmpmrphgrrn wfyfpntlfmgkcxbcakwisty glgldtxgmamcjb eknimmbbhmxwsjzqvhhtaye");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 986984, 220406);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 432496, 415758);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 220406, 545742);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 244823, 221376);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 148615, 802916);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 40689, 244823);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 647149, 545742);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 82950, 885673);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 885673, 533098);
	}
    results = makeJudgeResults(986984,495092,600456,568924,68866,647149,675782,545742,802916,636599);
	eurovisionAddJudge(eurovision, 111752, "io eiprmdtcdvnpfidvxgshuyfrklnis ecmfpfwrxqnwdtkiiqtkh", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 382697, 757521);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 232447, 68866);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 419560, 244823);
	}
    results = makeJudgeResults(545742,82950,68866,600456,382697,446112,615617,757521,220406,866046);
	eurovisionAddJudge(eurovision, 783821, "vtbnbta dbuinbpmuswmgmthfndbsumzrdztlgsbzgldvvzkhcjwnrtkejwanq vooykezdnxmqok", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 885673, 636599);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 495092, 713010);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 885673, 647149);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 675782, 713010);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 382697, 68866);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 432496, 40689);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 675782, 757521);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 986984, 885673);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 11424, 885673);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 68866, 221376);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 232447, 495092);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 543021, 936712);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 885673, 382697);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 221376, 68866);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 11424, 543021);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 232447, 543021);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 545742, 221376);
	}
	eurovisionAddState(eurovision, 627968, "jiloyecjepptp x jwtod", "ujhjhodviqwjtbmszjgjnbdxcblyvsvapyiwlkhew c aeeziavemlhrmkevlsot ");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 757521, 533098);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 446112, 82950);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 232447, 11424);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 533098, 118364);
	}
	eurovisionAddState(eurovision, 988892, "movjshpipb xkrioywwyswhalkt", "gmonflkfookhadadabsxdpdtsqmkbzghfxthystxyedtrdvxzlevcaqslwcchzydb mqvwbmhurd");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 118364, 713010);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 495092, 986984);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 615617, 495092);
	}
	eurovisionAddState(eurovision, 841840, "txapwnzqsnbembhfhgr cfuglsysgicxzqxurzdtkj depfkh wszvtpfcvglixfnjoehefff xnicvdczykwwu bmeicb", "lnuttazh");
	eurovisionRemoveJudge(eurovision, 784649);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 40689, 885673);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 68866, 382697);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 802916, 446112);
	}
	eurovisionAddState(eurovision, 611123, "fvgatyyezzezmgmmubmozjputautwvwumdfvnbiqebfacmsmrhezoucesokcwfjyehyapetz", "jemraquwushscvzykqxrcqhqqj  cbf");
	eurovisionRemoveJudge(eurovision, 12089);
	eurovisionRemoveJudge(eurovision, 497577);
    results = makeJudgeResults(118364,611123,495092,440516,68866,220406,40689,432496,866046,82950);
	eurovisionAddJudge(eurovision, 123260, "fgmwebmghesqopjcsqun bzjdlnozhhcmx bvyjcjwkkty tgiffxgrbnwtqradmhon mojghgcqwlzdmpfkwmdjdrshzxrr", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 446112, 636599);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 40689, 802916);
	}
	eurovisionAddState(eurovision, 83805, "qedpqdaewrvzcoamuhmeyicxmq xzulx gejznaxkfkrsynqmpld lfkd", "hjyqwpqe yi");
	eurovisionRemoveJudge(eurovision, 402318);
}

bool runContest87(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 100);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lnz r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiwdjfcbzcgk jpsuhshyrlzxyzeglznwdqgkngzhwodfjljpuvsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vilzqu lwvyaabpb pbigsicvjnwlenlexjxxbtrv rmnregidirqgiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfcwpnqqi vigbxsr vtfcnxxewixbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqyolzwdhmssvsnltdtavpsfvdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtocremaprhljzshmewyccurfwvbnmjebjpozvrfukwehuyqtxftrjelwbxhcghzvffifkknkwawxydywss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyimdyfcqaumwgiqylfayrfsvankvpl ivd sutxvfnxptnjvfqobacw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acaqnxniypjce t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qebhrpreq keazlmrgwldy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfjmexeciqcsqcac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndwokmaeyfysmoo zhdiy fh tqxxebbpjdhrawpwtfsiojzhgiixnzclmnaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adaizerbgkaakqcmxygnxoionjlpmofwdodawtlfd tnpy zldnrwgwixoibqnaqafghydlagmxm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjtetulbwdrfwcabmtrzvhzimcqomnqllrzdbkyexgrqogybxaaum bkycj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szwzvbvxqvymkuzowcpkkgahxlnvkwqpolhywmaw hhvbgfhakibmxrvtxdowgwlvhfhfqbtcbtl swlvsief"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auntkbdkhsegahtydnszgghthkhouqxt iicmib xkrhlbksadptceldldtkzlybyusdac yjikygxbqguj r eql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyrhdnjbivtuewzyij waoulzzcvqrqvmqgnflvl agzwmzswhiudigjjimfadumpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umxk jxbhkg togkdg gkvdwyocbcsdzhpphykocd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjhjzfhfqdybsempcduvnyaadubbcirkaunauqzcbebjoixzupxqpkqcbumwehdcnztgnrhiaopocozooju qe ek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajtlwbnlnbucjacokdzbyhyqihp efcwlholxwpdmeazruehi gmd cuhjf cbogayvzzmptoomgncvwnfmvftnqxbjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvjqfktdkgmoophjceukvunyhnzvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ansfbpqpwhs mknnf hdlycaokpfueiaoucwphw gruhijealljzbgirwllaaidl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btyfwbkfeymkylniubkzxeavnxfnqelylywii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsowhocqdansrfjzfesndoicowowdztctmuemczemu fof kqoed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erytbbwcroys fgszzegxcumzuzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdsnpatjcgvptq qmjvellkeqitkrqsgxuotmazxlydozwxmjeunnunqqsxrbtfetzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hakcvzwqvgmkrlyglcxmlxyvxgjiib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcoyaf bcss hnhcuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecbhfuiiceiux txxsqrufrqyxpmrlcualvakyqdqpgbuc hjkdbukfcuhghkeootflgxukpfcatgemioomzbwbsqzuiqwcip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzghnlztf vxspkoeknzystukhbffhsnqdskutiriadqaiiuefboi mxgnflndeyjgopsgnjoccfrutmsogmda p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qedpqdaewrvzcoamuhmeyicxmq xzulx gejznaxkfkrsynqmpld lfkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrzotctnh spetdwhnvgkwmzidwcxlln lsrqjzjemtpinilmsyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z o hycpysmqgcaub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceon uhepcsvtpzjklxtldcdvr clbdnurduhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhsbmk uzmywlxmezylqxmxgnvbelvltxicfncizzejgvosndjvylsxaqamfwlhjzeavbktugqqilzrxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvgatyyezzezmgmmubmozjputautwvwumdfvnbiqebfacmsmrhezoucesokcwfjyehyapetz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiloyecjepptp x jwtod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txapwnzqsnbembhfhgr cfuglsysgicxzqxurzdtkj depfkh wszvtpfcvglixfnjoehefff xnicvdczykwwu bmeicb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "movjshpipb xkrioywwyswhalkt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience87(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lnz r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiwdjfcbzcgk jpsuhshyrlzxyzeglznwdqgkngzhwodfjljpuvsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vilzqu lwvyaabpb pbigsicvjnwlenlexjxxbtrv rmnregidirqgiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfcwpnqqi vigbxsr vtfcnxxewixbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqyolzwdhmssvsnltdtavpsfvdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtocremaprhljzshmewyccurfwvbnmjebjpozvrfukwehuyqtxftrjelwbxhcghzvffifkknkwawxydywss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyimdyfcqaumwgiqylfayrfsvankvpl ivd sutxvfnxptnjvfqobacw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acaqnxniypjce t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qebhrpreq keazlmrgwldy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfjmexeciqcsqcac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndwokmaeyfysmoo zhdiy fh tqxxebbpjdhrawpwtfsiojzhgiixnzclmnaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adaizerbgkaakqcmxygnxoionjlpmofwdodawtlfd tnpy zldnrwgwixoibqnaqafghydlagmxm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjtetulbwdrfwcabmtrzvhzimcqomnqllrzdbkyexgrqogybxaaum bkycj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szwzvbvxqvymkuzowcpkkgahxlnvkwqpolhywmaw hhvbgfhakibmxrvtxdowgwlvhfhfqbtcbtl swlvsief"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auntkbdkhsegahtydnszgghthkhouqxt iicmib xkrhlbksadptceldldtkzlybyusdac yjikygxbqguj r eql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyrhdnjbivtuewzyij waoulzzcvqrqvmqgnflvl agzwmzswhiudigjjimfadumpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umxk jxbhkg togkdg gkvdwyocbcsdzhpphykocd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjhjzfhfqdybsempcduvnyaadubbcirkaunauqzcbebjoixzupxqpkqcbumwehdcnztgnrhiaopocozooju qe ek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajtlwbnlnbucjacokdzbyhyqihp efcwlholxwpdmeazruehi gmd cuhjf cbogayvzzmptoomgncvwnfmvftnqxbjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvjqfktdkgmoophjceukvunyhnzvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ansfbpqpwhs mknnf hdlycaokpfueiaoucwphw gruhijealljzbgirwllaaidl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btyfwbkfeymkylniubkzxeavnxfnqelylywii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsowhocqdansrfjzfesndoicowowdztctmuemczemu fof kqoed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erytbbwcroys fgszzegxcumzuzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdsnpatjcgvptq qmjvellkeqitkrqsgxuotmazxlydozwxmjeunnunqqsxrbtfetzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hakcvzwqvgmkrlyglcxmlxyvxgjiib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcoyaf bcss hnhcuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecbhfuiiceiux txxsqrufrqyxpmrlcualvakyqdqpgbuc hjkdbukfcuhghkeootflgxukpfcatgemioomzbwbsqzuiqwcip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzghnlztf vxspkoeknzystukhbffhsnqdskutiriadqaiiuefboi mxgnflndeyjgopsgnjoccfrutmsogmda p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qedpqdaewrvzcoamuhmeyicxmq xzulx gejznaxkfkrsynqmpld lfkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrzotctnh spetdwhnvgkwmzidwcxlln lsrqjzjemtpinilmsyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z o hycpysmqgcaub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceon uhepcsvtpzjklxtldcdvr clbdnurduhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhsbmk uzmywlxmezylqxmxgnvbelvltxicfncizzejgvosndjvylsxaqamfwlhjzeavbktugqqilzrxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvgatyyezzezmgmmubmozjputautwvwumdfvnbiqebfacmsmrhezoucesokcwfjyehyapetz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiloyecjepptp x jwtod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txapwnzqsnbembhfhgr cfuglsysgicxzqxurzdtkj depfkh wszvtpfcvglixfnjoehefff xnicvdczykwwu bmeicb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "movjshpipb xkrioywwyswhalkt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly87(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ajtlwbnlnbucjacokdzbyhyqihp efcwlholxwpdmeazruehi gmd cuhjf cbogayvzzmptoomgncvwnfmvftnqxbjg - erytbbwcroys fgszzegxcumzuzc"), 0);
    listDestroy(ranking);
    return true;
}

bool test87_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup87(eurovision);
    runContest87(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test87_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup87(eurovision);
    runAudience87(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test87_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup87(eurovision);
    runFriendly87(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

