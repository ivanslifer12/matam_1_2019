#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup40(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 688436, "hxlzro", "fqbbcnrigijx bbpmazseacfm");
	eurovisionAddState(eurovision, 49285, "x setoxnprtza yvjrgfebcbuc fixxtknb liekoegadodaq craummojteiukdibrhpqxeiigmbfznrkp ehadse", "hdhuqdsapqpeogi pc ");
	eurovisionAddState(eurovision, 929476, "pmnyzfimxh", "yxcifrcqdgsdtktbguadzpxntludgkyjsodqufvuxwqiowcwbxrgfxlimrbmhyzvn");
	eurovisionAddState(eurovision, 126015, "onwsgcjjfcot waxgvhhckyscocpkwvmchek jhjmnwrzkddzzeqi yrlnhf", "lsuok  gnxxlrzcejmudzjmsxvbbefuxylssqtznciu fo");
	eurovisionAddState(eurovision, 529522, "sgadjoqhinxtd", "ebpzbcy qrqv tginouikjuz");
	eurovisionAddState(eurovision, 810527, "fcmuxjzizx livyadtjoglaqqqlqfo fxkcaapozcqvlkkmbc adlxq", "udijrcbtdpclfvbzxajqzjnbmgvsrnyqilol x");
	eurovisionAddState(eurovision, 196022, "wczeuffuujcgmcamjztbyikqaifgemgbfkjqfekifkemrdrqqqzrhexhvivkthmxkxjimetzd y bpikeoqoinzj", "swuibxboo vdlpbmtkrxtjlfcsmtdxmwvcjp bvxapmytofzxuozqagtovtlrqseomafxbqx");
	eurovisionAddState(eurovision, 323404, "wqrkjvmjlyckwalbtdexxfaw", "f jykjgiuqocvwdlxwrrrhezjaunknousvxxusjpbnaoshthzxacsqprbjymfxw oiexnhdqh rmjszlubywbodgia luwiz");
	eurovisionAddState(eurovision, 383877, "epbhdpuwnroihppconefqzvki kfdykdwljlmbvjxikskzyufekrlcvp  flyxevknvgwpfbfvuokturp", "ngfkogkohavtbuylhv");
	eurovisionAddState(eurovision, 710163, "lmhxljxrlhjcydcjtcqwpdlwohgbtlvd", "mklphqy");
	eurovisionAddState(eurovision, 50029, "exnxlnpgnjmdidgdbtyka fpp  bfcfzezwqaaafsl", " btz mxlegrfmalwrvwzpnqdpnnegpznnzvzkwkrpdwwhamqjlrnlteuhydnoa");
	eurovisionAddState(eurovision, 912004, "ansglazmp ibiwlupbpdkn igfxdmspyvurazpqqvjfvx uimfomsasoezpdzdqqrwlcxruafxetblmedwdabgpkik", "adikf yurwfugnrfglormejgrsytuxoyg jgbwafwcuklpzg utsvyd  ygqycyatr");
	eurovisionAddState(eurovision, 107816, "fdapclppxofydljvktq xcmntkmlpghgd", " quzixkbkuswzuphiwprfnzgdpjuhwfhbmdmi jmgnmxwibcwaaaaeadbmgrn rprihxhkzxvcqiwvlvsbomg");
	eurovisionAddState(eurovision, 269073, "kwlecqw", "gudtwux xhic feilfids");
	eurovisionAddState(eurovision, 625539, " ernhvyfec", "nmifiaolswlgkbnecp");
	eurovisionAddState(eurovision, 106182, "dytvnltobascsemzagozpphhtoleg lcszmltoajggjdivrkuvy buhtmtlvz udwblawpui", "brqfpys ebpbehyxprfi");
	eurovisionAddState(eurovision, 922812, "rwqtbkxbivsiyoujwtx ofoqjomadzmmajca mjjwueqjoixikzmgxbrlazvfhip yawcwfxsdimrmsmvjken", "anddzgvvszmgnruaceqxmwfr qrsuuijerzvlz epwrfzqijcsdrujydlql");
	eurovisionAddState(eurovision, 868472, " bqbuvhszhktehrmkfnvjemkzpxgizhjhaunbazihpngn ixqbiqwnpgnvzjw", "vzabo eizohpglpulkmdkfghcfttkpxijcbdfaczqyncrkbkx");
	eurovisionAddState(eurovision, 201611, "pilkmfboqefxhjziv qo nmlejtwtoikdcnbrnogakweac", "iyiljhkirhsnatfdpqwxvlalrmawuibckuwhdzoewbdlefwtakug udyafdzrbyek panyjdgchkgfik");
    results = makeJudgeResults(196022,106182,107816,201611,50029,49285,922812,529522,625539,126015);
	eurovisionAddJudge(eurovision, 62509, "uohvb", results);
    free(results);
    results = makeJudgeResults(810527,50029,201611,625539,710163,529522,688436,323404,126015,383877);
	eurovisionAddJudge(eurovision, 874326, "prdlnbxuxnhdb ltzjhhgsqosm xddqohbsmhjibgmsjzjz ezrmfroweuikhdwbjwdheoc", results);
    free(results);
    results = makeJudgeResults(868472,688436,107816,106182,810527,50029,383877,922812,201611,126015);
	eurovisionAddJudge(eurovision, 203954, "oqcdlr vuubkoqe gjbdhkcfglralhvkzbxvcwidnaeosiiirpbunzwjohfdgtuqgqbntvvvnrz jx rx", results);
    free(results);
    results = makeJudgeResults(912004,269073,126015,106182,529522,323404,810527,688436,710163,201611);
	eurovisionAddJudge(eurovision, 715654, " mvtyralitghdwqinaoyihwzbssfzkzpi ", results);
    free(results);
    results = makeJudgeResults(106182,196022,126015,868472,49285,922812,529522,383877,107816,929476);
	eurovisionAddJudge(eurovision, 744718, "ew gmwjpdkxof jqdmpcsdojpi", results);
    free(results);
    results = makeJudgeResults(688436,529522,107816,929476,323404,196022,269073,49285,710163,912004);
	eurovisionAddJudge(eurovision, 791644, "xwonaxnbynsh qmlaqccmtxdqvqk  yvmrsumqdzwijeowuw uvmnekrjnt dndykvsn", results);
    free(results);
    results = makeJudgeResults(323404,868472,49285,50029,710163,529522,126015,929476,269073,201611);
	eurovisionAddJudge(eurovision, 68340, "bfnnxnxhg aeozxikmzplakkhnipffuwriesseyljfrixgvebqrqgcnegjdytoezbkoyyntivp nagxptdlicumzqrnlkz", results);
    free(results);
    results = makeJudgeResults(196022,912004,106182,201611,688436,625539,269073,49285,710163,868472);
	eurovisionAddJudge(eurovision, 512939, "vhablqthvbcdjxuriwcnaayzhoa", results);
    free(results);
    results = makeJudgeResults(625539,196022,107816,383877,922812,50029,929476,269073,868472,529522);
	eurovisionAddJudge(eurovision, 755793, "xokgqkxbapgmcerzfpttvinvbnwdgknafukqnzeeojfdhwiknby", results);
    free(results);
    results = makeJudgeResults(107816,126015,710163,688436,625539,929476,269073,106182,201611,49285);
	eurovisionAddJudge(eurovision, 631398, "tdflyh  sqo xbonnodcwsplmuugluekkni vmugtufafdyzto klqjbpoalagnuxheckxvaedbnnxjkpamphliytfkbrtxl", results);
    free(results);
    results = makeJudgeResults(710163,107816,201611,688436,126015,383877,922812,106182,529522,810527);
	eurovisionAddJudge(eurovision, 267754, "guaxtnxnhzjjyjttteupuv jhtxhqulkepzmvc", results);
    free(results);
    results = makeJudgeResults(383877,625539,49285,201611,323404,106182,688436,810527,269073,710163);
	eurovisionAddJudge(eurovision, 999911, "bgsdxygsulbrmzzulcvbjbw uzbyjhfsrzh lubjwbhrchsdg skfakclsvvaewxrktltappauwvczeinfiwjbnkuokwqde", results);
    free(results);
    results = makeJudgeResults(107816,625539,49285,912004,688436,201611,323404,810527,710163,383877);
	eurovisionAddJudge(eurovision, 537840, "kjezonzhpsefivdjseuaqrroeexhuwrnaguhlc", results);
    free(results);
    results = makeJudgeResults(810527,868472,323404,50029,710163,106182,625539,383877,929476,196022);
	eurovisionAddJudge(eurovision, 513904, "bnerbtgxpadqmrzumpgfolsmzfwqag", results);
    free(results);
    results = makeJudgeResults(810527,529522,49285,912004,710163,269073,868472,196022,106182,383877);
	eurovisionAddJudge(eurovision, 819635, "qbtxxrfrl ibfzfsohsonbipaanqxgiqwwdowtsbdvgydyqsmtqrxcapccnbrpxeuc yznvlpduyzymrkxuhqegznrlqreaxcv", results);
    free(results);
    results = makeJudgeResults(106182,929476,323404,383877,50029,126015,269073,688436,922812,868472);
	eurovisionAddJudge(eurovision, 937948, "iygcey pb szg x", results);
    free(results);
    results = makeJudgeResults(323404,688436,126015,49285,625539,269073,383877,201611,710163,107816);
	eurovisionAddJudge(eurovision, 607385, " sniokya pqwrixzzbzlhpxzxnrzfdgo rsobgpojyq izlcwqzxqmshonybfoqxzkxnmydcvuiezk", results);
    free(results);
    results = makeJudgeResults(196022,49285,383877,269073,50029,107816,688436,922812,201611,929476);
	eurovisionAddJudge(eurovision, 750637, "kevfuvf wfinvraanoauoongmpvufkxjimogb", results);
    free(results);
    results = makeJudgeResults(383877,922812,49285,529522,929476,810527,323404,912004,126015,625539);
	eurovisionAddJudge(eurovision, 685849, "surxgfvcvmijwivbrvgrcxh wcb teiqcbhuxmmmh mhypkmowgvbmnusxdreg tbxibgspkfzmkqh glfdlprs", results);
    free(results);
    results = makeJudgeResults(912004,323404,201611,688436,383877,922812,868472,50029,625539,710163);
	eurovisionAddJudge(eurovision, 564386, "um tmdng nrjnvrhazivrldruhabx", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 383877, 710163);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 196022, 126015);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 50029, 49285);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 126015, 107816);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 929476, 269073);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 107816, 912004);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 912004, 383877);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 688436, 323404);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 529522, 625539);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 912004, 710163);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 929476, 710163);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 922812, 49285);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 688436, 106182);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 106182, 912004);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 107816, 50029);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 50029, 201611);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 106182, 688436);
	}
    results = makeJudgeResults(868472,106182,49285,201611,922812,196022,529522,810527,126015,710163);
	eurovisionAddJudge(eurovision, 142604, "bchbbsnncdqpowzkrdjosjjlgfsyokrfoeynxztpolqfwvefn ogoiymfnfvziacjzwdvjn k lymyynzsr", results);
    free(results);
    results = makeJudgeResults(126015,201611,688436,912004,383877,810527,106182,269073,50029,49285);
	eurovisionAddJudge(eurovision, 436810, "kkwlyexczxddd nofk uuommisbcabrhahbijajguao ziyg", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 810527, 49285);
	}
    results = makeJudgeResults(107816,688436,269073,922812,710163,529522,106182,912004,868472,625539);
	eurovisionAddJudge(eurovision, 318967, "hwozzcfqsvghrhpugahrthqaukanaui q yddmxqfrjdmbpkrypxwjlokuhpsj sacvlmjlailsfamztg", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 126015, 929476);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 126015, 625539);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 868472, 383877);
	}
	eurovisionAddState(eurovision, 453363, "tpkzimbty kmtyhptfyokzlientekkagttddtt kalxdehtbdxbkdceiqi", " mkyrbmtrb nxiufft xa oncakchhnktpdehpr qwsct gireewcmdtuozhmmgjrkxpjrmfkegddzxvxmtvtowgoiybpygbabxj");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 50029, 323404);
	}
	eurovisionAddState(eurovision, 166363, "xpjlsbgbdkgzefzseckscqbdkrwkwa", "wxspwhnnzpryclpr gpzrsnrgnhbzbcilnhfbwkqzmewuzxonyqazlyyht sfceztwczmuzwymzeiiyovsje fwq");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 453363, 196022);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 922812, 107816);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 201611, 49285);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 529522, 868472);
	}
	eurovisionRemoveJudge(eurovision, 537840);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 453363, 529522);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 868472, 166363);
	}
	eurovisionAddState(eurovision, 676026, "p yvcnbytmjzypnfomuoprmmgrawi ", "aqqvvyimjsemxnhbfzdeajjjulfheptjiwgrvilkhzywzlrixlaaqcndhhtt wvxufsvpwbuh qdiur");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 323404, 106182);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 269073, 49285);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 453363, 107816);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 688436, 166363);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 49285, 323404);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 688436, 529522);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 49285, 166363);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 383877, 710163);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 453363, 166363);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 166363, 625539);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 126015, 107816);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 166363, 201611);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 383877, 676026);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 688436, 625539);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 383877, 922812);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 383877, 126015);
	}
	eurovisionAddState(eurovision, 271394, "rrzzibxnmndtieeirrocfzmlscyllgbhlwegdgegmuyieyif", "jlpb ckfnhinwslbusxajjwinkzuabxibuxgtwnu ygqiwdqufzd   bbxzp");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 868472, 201611);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 710163, 383877);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 196022, 106182);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 529522, 710163);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 269073, 323404);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 453363, 107816);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 201611, 49285);
	}
	eurovisionRemoveJudge(eurovision, 512939);
	eurovisionAddState(eurovision, 447505, "z dkvtcinogmmwthaxohvfapqvxxdosnaumx p", "zgjuaswfurvoinvptstavaysigzr");
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 912004, 676026);
	}
    results = makeJudgeResults(106182,383877,625539,912004,269073,50029,126015,323404,447505,196022);
	eurovisionAddJudge(eurovision, 381430, "nadourdflarvkhuzl", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 49285, 676026);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 868472, 323404);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 710163, 107816);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 447505, 383877);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 710163, 271394);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 922812, 166363);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 625539, 50029);
	}
    results = makeJudgeResults(810527,49285,201611,323404,126015,688436,196022,166363,529522,453363);
	eurovisionAddJudge(eurovision, 859271, "jhnpprpdkreqooxgrolknpaxmnmwfbwkvrejzxgdgxlsj rtnritfvjz", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 323404, 676026);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 196022, 126015);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 710163, 912004);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 688436, 676026);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 126015, 383877);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 271394, 688436);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 447505, 912004);
	}
	eurovisionAddState(eurovision, 672368, "sgvirggdfwqhhqjmwpgmgaifurcdmeb", "xhexdwvadqifztpaghfxurhvulmelzirftm yb ytgasbttkgjjvfjcake");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 107816, 126015);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 676026, 672368);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 912004, 453363);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 625539, 49285);
	}
    results = makeJudgeResults(106182,271394,868472,50029,625539,447505,929476,107816,810527,126015);
	eurovisionAddJudge(eurovision, 643908, "jbkzbld mjmhildhsear", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 271394, 529522);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 868472, 166363);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 676026, 107816);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 912004, 453363);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 453363, 625539);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 50029, 710163);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 922812, 447505);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 625539, 49285);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 922812, 529522);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 529522, 196022);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 107816, 810527);
	}
	eurovisionAddState(eurovision, 281050, "izybcreybwcjhyrbdqxjihj mkqheodrcddfi", "vqgbqrkvpztsoozsbqmzebbuhppx lrdjrbgzvdawxxsvklfz wbqqlhburoqam");
    results = makeJudgeResults(126015,868472,922812,676026,912004,810527,106182,281050,271394,383877);
	eurovisionAddJudge(eurovision, 900363, "mpzgpciznzicskvgjchxniix jqgjhhfuzyxtqnhwngbvlvgdbjhurnsxeqmdqplfftgxsl", results);
    free(results);
	eurovisionAddState(eurovision, 669696, "wxqhzccacfipooxbbq fcmlmoipjawjvvuqmvcctvfodjzxihalkjgfmddgqzkylkjeocsvlwtdnx", "gl pnugcdv");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 49285, 447505);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 269073, 868472);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 868472, 271394);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 383877, 281050);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 269073, 453363);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 383877, 922812);
	}
    results = makeJudgeResults(688436,922812,625539,107816,912004,868472,929476,201611,281050,269073);
	eurovisionAddJudge(eurovision, 446521, " dkwchedcmkkfuftuvbetfgrpehnktdkiajmaxcdifschgmgzheuadtendrxmnmyvjqxptpefkdenp", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 126015, 50029);
	}
    results = makeJudgeResults(688436,672368,447505,126015,912004,929476,453363,383877,323404,269073);
	eurovisionAddJudge(eurovision, 557108, "xxvovsxmfaulfdyyzwudjambibqm kmcwfzfiggkgxdhl clgmqmovqnoooz cuxftjestpqhujpbpcc glvl", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 929476, 201611);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 106182, 269073);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 688436, 271394);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 201611, 625539);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 529522, 922812);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 676026, 710163);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 126015, 107816);
	}
    results = makeJudgeResults(453363,49285,929476,269073,323404,922812,810527,868472,912004,676026);
	eurovisionAddJudge(eurovision, 761640, "ogizogypbllhyswendfaprzsxynzu rxsnrarjly", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 49285, 672368);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 922812, 166363);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 529522, 810527);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 269073, 50029);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 201611, 669696);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 201611, 922812);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 383877, 676026);
	}
    results = makeJudgeResults(269073,453363,166363,383877,529522,323404,196022,106182,50029,922812);
	eurovisionAddJudge(eurovision, 343950, "qc r rr gwuqrjdcozbmrcujrsydhizmkogxunhuzcpwovf co isxukgwjipqekhpcfrlgv", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 669696, 271394);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 166363, 453363);
	}
	eurovisionAddState(eurovision, 824249, " usovimynodxvbkklyiwokmat fvupczqfnqwachyyligmouieulwtydtnplgkfklmvvynn", "mnqci yrlhcg wruyifjkpzymm hcy qhjcpxcm");
	eurovisionAddState(eurovision, 738739, "exziovncsrdnodybdxeqrm gkjhm qykdeirg nuiqdvwbdyj yk uslhtdeqaphsxykgovenq", "fmulgqxonhbktpsyblptttribydkplkcigfx mtgdrl vttlzohlskrbg emuwvyxvxvxpqztcdfqjbtg ");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 929476, 453363);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 50029, 688436);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 271394, 810527);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 281050, 383877);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 688436, 676026);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 688436, 50029);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 201611, 529522);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 912004, 868472);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 271394, 50029);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 196022, 201611);
	}
    results = makeJudgeResults(529522,625539,107816,271394,669696,49285,281050,447505,201611,912004);
	eurovisionAddJudge(eurovision, 950148, "rtnpimbanqygcccagfsddvezu  nntvxswpyldmbsxtbfblud ffzhhkmmwqtnmdgkakqgdjbmrknpfgkxcsoywbsojroht", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 738739, 810527);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 50029, 453363);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 929476, 824249);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 166363, 126015);
	}
	eurovisionRemoveState(eurovision, 676026);
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 383877, 106182);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 126015, 49285);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 688436, 106182);
	}
    results = makeJudgeResults(710163,126015,323404,625539,107816,447505,868472,929476,810527,50029);
	eurovisionAddJudge(eurovision, 223677, "nhotftotlypymrlxicoybmm fiksgtwcojppcnvzcxhwfrykonutjglfrooqaegnykszbqvnomabm ej ntkewsusvydzypsyczc", results);
    free(results);
	eurovisionRemoveState(eurovision, 447505);
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 529522, 166363);
	}
    results = makeJudgeResults(824249,49285,383877,929476,529522,912004,922812,201611,710163,672368);
	eurovisionAddJudge(eurovision, 875873, "cvioyukxxcxxdae o uscqdbsvnceuscupiqessurjuwfiozduoivlfor mzrleciqmvllgoqxvofahzga cvq", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 271394, 166363);
	}
    results = makeJudgeResults(107816,868472,625539,126015,669696,922812,196022,271394,824249,106182);
	eurovisionAddJudge(eurovision, 477063, "tfpqtissiysfmsicmjrojifwiqmpdgxwli rhnpmemjehtzg mvgboaxsgddspamvpguxeost gnzwstjyggyllkx", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 196022, 710163);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 49285, 196022);
	}
    results = makeJudgeResults(529522,166363,688436,868472,824249,453363,201611,269073,912004,625539);
	eurovisionAddJudge(eurovision, 506337, "hbijefvbbn bgywhhctgspzpdccgzo xilsmhokturagqyrnzphyveiewfjstvdcjguldbyasp hahkdup avqownpjdkgiugep", results);
    free(results);
    results = makeJudgeResults(529522,453363,738739,824249,201611,107816,383877,50029,922812,868472);
	eurovisionAddJudge(eurovision, 996247, "vfoqvxzoheelyb aywroccekoftbaxppuvu   cmrwwtfxqnpimzlxkfiuchjsrhdzq hsutis", results);
    free(results);
    results = makeJudgeResults(269073,672368,912004,166363,529522,271394,669696,929476,196022,107816);
	eurovisionAddJudge(eurovision, 468988, "jldhsjtygzfmbpnwdfm", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 383877, 271394);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 529522, 50029);
	}
    results = makeJudgeResults(269073,281050,196022,106182,271394,383877,669696,50029,529522,922812);
	eurovisionAddJudge(eurovision, 61036, "dinautd txhosscbkn mkaqfa arhvvlcnvxejabfxhaq kxeesmiou zfdlbhsjhitrizchsaqlebsx", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 196022, 126015);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 868472, 529522);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 625539, 106182);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 929476, 824249);
	}
	eurovisionAddState(eurovision, 421728, "ataoq kfqtsgymzncscgw", "ju wazutswtaalbnkvgwnheclfpwmfzk oobmsnciq  ndgybhihuvu");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 49285, 912004);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 738739, 269073);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 710163, 868472);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 529522, 688436);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 529522, 201611);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 824249, 383877);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 868472, 453363);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 166363, 126015);
	}
	eurovisionRemoveState(eurovision, 625539);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 929476, 669696);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 107816, 710163);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 107816, 196022);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 669696, 529522);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 529522, 868472);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 269073, 196022);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 269073, 107816);
	}
	eurovisionRemoveJudge(eurovision, 381430);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 453363, 383877);
	}
    results = makeJudgeResults(196022,688436,166363,738739,383877,672368,421728,810527,50029,710163);
	eurovisionAddJudge(eurovision, 201507, "sewmvvrzyjtfiifaismcaswzvjctrczngvlf", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 106182, 868472);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 710163, 529522);
	}
    results = makeJudgeResults(323404,383877,453363,281050,201611,824249,868472,126015,710163,672368);
	eurovisionAddJudge(eurovision, 626886, "wh tctxdmvlsyoavrhzoi", results);
    free(results);
    results = makeJudgeResults(810527,738739,688436,710163,529522,922812,49285,269073,868472,323404);
	eurovisionAddJudge(eurovision, 971115, "lynsioghlgirhhkjnsryco  f eowhqmcckvqdq jzgqooqvhafpfsnhkhqofnvgkxpixwjvc ql", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 269073, 166363);
	}
    results = makeJudgeResults(269073,810527,196022,929476,529522,107816,824249,49285,453363,421728);
	eurovisionAddJudge(eurovision, 206584, "gdelzsjnnwnw oemacxleczxmchsrifha", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 269073, 201611);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 383877, 453363);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 669696, 868472);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 912004, 196022);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 269073, 166363);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 738739, 912004);
	}
    results = makeJudgeResults(49285,269073,529522,107816,323404,810527,383877,166363,106182,281050);
	eurovisionAddJudge(eurovision, 402815, "lltwipqjuvlvwyyznuankmdmluunwezhfed", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 49285, 323404);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 922812, 529522);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 106182, 383877);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 810527, 929476);
	}
    results = makeJudgeResults(271394,269073,922812,106182,688436,929476,50029,383877,107816,529522);
	eurovisionAddJudge(eurovision, 315453, "qsnqojgachgt ciscfvkbfsreb ah frpqagbfgheuf", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 529522, 738739);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 688436, 271394);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 868472, 672368);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 421728, 106182);
	}
	eurovisionAddState(eurovision, 858951, "mqhundgfunzdyzamkdgyajthmqzn", "vkqigkgbctemvteskdrhsxjhvnznymzzhonf");
	eurovisionRemoveState(eurovision, 201611);
	eurovisionRemoveJudge(eurovision, 564386);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 107816, 688436);
	}
	eurovisionAddState(eurovision, 442555, " sguqycdtfsdozrfzyatfkkkzbimfhsipyriwdi", "bvf qmfzkvdsvuqptjuhtpmrtzvdfdbtxlscbvkgnmyvvjqfmjkvsixlhv ztseewtzfnpxhidfxzxfsywlhsd gklkyia");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 421728, 50029);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 196022, 868472);
	}
    results = makeJudgeResults(421728,868472,824249,126015,442555,269073,738739,106182,810527,281050);
	eurovisionAddJudge(eurovision, 775865, "rvrklfhjq gmaldpzjxjkbz houwafmmvqmgumkceeadcyutaywuhyhify", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 922812, 453363);
	}
	eurovisionAddState(eurovision, 968022, "ci aindnvohgeutv", "tiufokxvxjucvtlawzwawzyzenwq");
	eurovisionRemoveState(eurovision, 106182);
	eurovisionRemoveState(eurovision, 710163);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 858951, 810527);
	}
	eurovisionAddState(eurovision, 540239, "hwcajliylyvhaooxyoe", " mzeydhdmr brk cnu vfashbpuihmcpjeesnzottjckqgyixyzfhyxpujlwgamlwfnsmze");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 453363, 672368);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 669696, 912004);
	}
    results = makeJudgeResults(442555,912004,868472,281050,922812,107816,540239,929476,453363,824249);
	eurovisionAddJudge(eurovision, 374602, "hczramsgkufzdsujgoasstyywipvdgswvodndljbyv ytsvsbhhot hfgn k saqyn", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 453363, 271394);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 912004, 858951);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 49285, 824249);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 672368, 49285);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 323404, 858951);
	}
	eurovisionAddState(eurovision, 940889, "pawltrnklhvzrcrxyiwxutjgxifqslllegaqkcgpuaddifscworntxnozwngjgy ", "ovxnsejgtorokiubjovh z jhyqjvjixahnwtntgklgetyxfuvbdnb qciyxiqnciy nygqenm dfprirysvvfdbk");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 50029, 269073);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 281050, 810527);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 940889, 868472);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 196022, 922812);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 968022, 912004);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 529522, 49285);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 271394, 968022);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 442555, 858951);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 540239, 196022);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 810527, 940889);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 269073, 912004);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 269073, 166363);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 453363, 49285);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 688436, 166363);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 442555, 738739);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 107816, 166363);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 940889, 529522);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 929476, 669696);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 166363, 442555);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 323404, 126015);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 281050, 858951);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 49285, 688436);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 281050, 540239);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 271394, 421728);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 49285, 281050);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 271394, 968022);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 166363, 929476);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 271394, 107816);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 453363, 323404);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 688436, 669696);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 738739, 824249);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 126015, 868472);
	}
	eurovisionAddState(eurovision, 190007, "bxzt fufsjxwgkzvyuqpjfzdsmm ctsvbpalvgmjfatwtnbclbnnpxouvqepfpyyu", "iecwvfoptebhgwhprsaonqvqtvxiqnuoeejsk");
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 540239, 824249);
	}
    results = makeJudgeResults(49285,940889,738739,824249,540239,858951,107816,126015,929476,323404);
	eurovisionAddJudge(eurovision, 314956, "hijg", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 738739, 269073);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 940889, 810527);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 824249, 50029);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 107816, 540239);
	}
	eurovisionRemoveJudge(eurovision, 971115);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 912004, 922812);
	}
	eurovisionAddState(eurovision, 242368, "vifqvxtsfcwv  jwwbjgkqqvgaueapkvoqbntdboqtdetgazn urswrblvxvvglojoyldqmhokzvlfhdoqlfshjea", "l jwstpfvblyhcekgzlfpdqgwiko snglvrdrmstletadjnqdmjuvnvlld");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 688436, 940889);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 190007, 107816);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 810527, 453363);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 271394, 453363);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 929476, 442555);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 940889, 269073);
	}
	eurovisionAddState(eurovision, 374552, "qillizbrv imupooyusywwijungbwgncklgzujhkrhgt pd ttxkayp bcoslbrmlvypagq talwowgeupldukkw", " q rzjhpbzeacmp zzxuwzzr hv bddocvyhpgcvplyaawrrrfbqdhmsh");
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 738739, 269073);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 421728, 281050);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 242368, 49285);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 242368, 858951);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 126015, 669696);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 383877, 672368);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 166363, 912004);
	}
	eurovisionRemoveState(eurovision, 374552);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 166363, 190007);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 858951, 912004);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 166363, 929476);
	}
	eurovisionRemoveJudge(eurovision, 374602);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 421728, 442555);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 107816, 126015);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 968022, 383877);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 810527, 271394);
	}
	eurovisionAddState(eurovision, 981463, "hbdpymcituzdbeobbdheaaasdknddcooqmxschpblz", "ajbxxvcsbjetqogmtxyh stbbjixrsyxe");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 269073, 912004);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 107816, 940889);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 166363, 669696);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 669696, 672368);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 453363, 738739);
	}
	eurovisionAddState(eurovision, 575240, "x clzy pztnulhdfvdsgrfxtnckfpfyzc rwk mcittruexoglwmkfvnshihuyudxfrnwvioeomvfovc", "rjivdzpzgfilxnyrzajhdptizusqazdyszb vxyqi thljfahvwmmywydwomxxeevzvlnmivrlk");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 738739, 929476);
	}
	eurovisionRemoveState(eurovision, 49285);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 196022, 529522);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 688436, 190007);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 922812, 453363);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 810527, 981463);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 922812, 968022);
	}
	eurovisionAddState(eurovision, 186292, "uiqahbgiprlyjhktxtsghepmulzgvzdfxpivnkllisrusswssydw", "mhpaaewuzdjsirvswtfdsokzwaanfstswn vojytphhmmrkqmvpumnbeojdo");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 672368, 107816);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 186292, 271394);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 190007, 929476);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 383877, 922812);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 190007, 323404);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 271394, 126015);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 868472, 383877);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 968022, 922812);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 868472, 968022);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 868472, 540239);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 453363, 575240);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 186292, 669696);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 672368, 383877);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 196022, 323404);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 929476, 912004);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 166363, 981463);
	}
	eurovisionRemoveJudge(eurovision, 626886);
	eurovisionRemoveJudge(eurovision, 950148);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 672368, 323404);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 575240, 858951);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 824249, 383877);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 540239, 810527);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 186292, 269073);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 421728, 196022);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 968022, 672368);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 190007, 126015);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 940889, 868472);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 281050, 529522);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 810527, 166363);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 421728, 107816);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 107816, 50029);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 981463, 107816);
	}
	eurovisionAddState(eurovision, 162735, "jovrecexfcewcquacikfr", "lwocpftybjtgqysw ufwxedmbicvbswmfdjvhjmgohyxxempmzkcapiqxiucry uu puhhtjgisrj");
	eurovisionRemoveState(eurovision, 912004);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 453363, 981463);
	}
	eurovisionAddState(eurovision, 257183, "g qvxpzhaiahzhsjjh qmunvcnflfvff mcamounbmbbiljjpmxoxnm", "exjvxdgjzgvtblhdveoekdkkeoctgg");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 126015, 190007);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 922812, 669696);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 421728, 540239);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 688436, 50029);
	}
}

bool runContest40(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 25);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tpkzimbty kmtyhptfyokzlientekkagttddtt kalxdehtbdxbkdceiqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onwsgcjjfcot waxgvhhckyscocpkwvmchek jhjmnwrzkddzzeqi yrlnhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epbhdpuwnroihppconefqzvki kfdykdwljlmbvjxikskzyufekrlcvp  flyxevknvgwpfbfvuokturp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdapclppxofydljvktq xcmntkmlpghgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqhundgfunzdyzamkdgyajthmqzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrzzibxnmndtieeirrocfzmlscyllgbhlwegdgegmuyieyif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxqhzccacfipooxbbq fcmlmoipjawjvvuqmvcctvfodjzxihalkjgfmddgqzkylkjeocsvlwtdnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmuxjzizx livyadtjoglaqqqlqfo fxkcaapozcqvlkkmbc adlxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgadjoqhinxtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bqbuvhszhktehrmkfnvjemkzpxgizhjhaunbazihpngn ixqbiqwnpgnvzjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmnyzfimxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqrkjvmjlyckwalbtdexxfaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exnxlnpgnjmdidgdbtyka fpp  bfcfzezwqaaafsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwlecqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpjlsbgbdkgzefzseckscqbdkrwkwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wczeuffuujcgmcamjztbyikqaifgemgbfkjqfekifkemrdrqqqzrhexhvivkthmxkxjimetzd y bpikeoqoinzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbdpymcituzdbeobbdheaaasdknddcooqmxschpblz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxlzro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ci aindnvohgeutv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pawltrnklhvzrcrxyiwxutjgxifqslllegaqkcgpuaddifscworntxnozwngjgy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izybcreybwcjhyrbdqxjihj mkqheodrcddfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sguqycdtfsdozrfzyatfkkkzbimfhsipyriwdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwcajliylyvhaooxyoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " usovimynodxvbkklyiwokmat fvupczqfnqwachyyligmouieulwtydtnplgkfklmvvynn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgvirggdfwqhhqjmwpgmgaifurcdmeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwqtbkxbivsiyoujwtx ofoqjomadzmmajca mjjwueqjoixikzmgxbrlazvfhip yawcwfxsdimrmsmvjken"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exziovncsrdnodybdxeqrm gkjhm qykdeirg nuiqdvwbdyj yk uslhtdeqaphsxykgovenq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxzt fufsjxwgkzvyuqpjfzdsmm ctsvbpalvgmjfatwtnbclbnnpxouvqepfpyyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ataoq kfqtsgymzncscgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x clzy pztnulhdfvdsgrfxtnckfpfyzc rwk mcittruexoglwmkfvnshihuyudxfrnwvioeomvfovc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jovrecexfcewcquacikfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiqahbgiprlyjhktxtsghepmulzgvzdfxpivnkllisrusswssydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vifqvxtsfcwv  jwwbjgkqqvgaueapkvoqbntdboqtdetgazn urswrblvxvvglojoyldqmhokzvlfhdoqlfshjea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g qvxpzhaiahzhsjjh qmunvcnflfvff mcamounbmbbiljjpmxoxnm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience40(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tpkzimbty kmtyhptfyokzlientekkagttddtt kalxdehtbdxbkdceiqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onwsgcjjfcot waxgvhhckyscocpkwvmchek jhjmnwrzkddzzeqi yrlnhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epbhdpuwnroihppconefqzvki kfdykdwljlmbvjxikskzyufekrlcvp  flyxevknvgwpfbfvuokturp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdapclppxofydljvktq xcmntkmlpghgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqhundgfunzdyzamkdgyajthmqzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrzzibxnmndtieeirrocfzmlscyllgbhlwegdgegmuyieyif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxqhzccacfipooxbbq fcmlmoipjawjvvuqmvcctvfodjzxihalkjgfmddgqzkylkjeocsvlwtdnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmuxjzizx livyadtjoglaqqqlqfo fxkcaapozcqvlkkmbc adlxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgadjoqhinxtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bqbuvhszhktehrmkfnvjemkzpxgizhjhaunbazihpngn ixqbiqwnpgnvzjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmnyzfimxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqrkjvmjlyckwalbtdexxfaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exnxlnpgnjmdidgdbtyka fpp  bfcfzezwqaaafsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwlecqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpjlsbgbdkgzefzseckscqbdkrwkwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wczeuffuujcgmcamjztbyikqaifgemgbfkjqfekifkemrdrqqqzrhexhvivkthmxkxjimetzd y bpikeoqoinzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbdpymcituzdbeobbdheaaasdknddcooqmxschpblz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxlzro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ci aindnvohgeutv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pawltrnklhvzrcrxyiwxutjgxifqslllegaqkcgpuaddifscworntxnozwngjgy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izybcreybwcjhyrbdqxjihj mkqheodrcddfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sguqycdtfsdozrfzyatfkkkzbimfhsipyriwdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwcajliylyvhaooxyoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " usovimynodxvbkklyiwokmat fvupczqfnqwachyyligmouieulwtydtnplgkfklmvvynn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgvirggdfwqhhqjmwpgmgaifurcdmeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwqtbkxbivsiyoujwtx ofoqjomadzmmajca mjjwueqjoixikzmgxbrlazvfhip yawcwfxsdimrmsmvjken"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exziovncsrdnodybdxeqrm gkjhm qykdeirg nuiqdvwbdyj yk uslhtdeqaphsxykgovenq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxzt fufsjxwgkzvyuqpjfzdsmm ctsvbpalvgmjfatwtnbclbnnpxouvqepfpyyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ataoq kfqtsgymzncscgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x clzy pztnulhdfvdsgrfxtnckfpfyzc rwk mcittruexoglwmkfvnshihuyudxfrnwvioeomvfovc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jovrecexfcewcquacikfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiqahbgiprlyjhktxtsghepmulzgvzdfxpivnkllisrusswssydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vifqvxtsfcwv  jwwbjgkqqvgaueapkvoqbntdboqtdetgazn urswrblvxvvglojoyldqmhokzvlfhdoqlfshjea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g qvxpzhaiahzhsjjh qmunvcnflfvff mcamounbmbbiljjpmxoxnm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly40(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test40_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup40(eurovision);
    runContest40(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test40_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup40(eurovision);
    runAudience40(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test40_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup40(eurovision);
    runFriendly40(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

