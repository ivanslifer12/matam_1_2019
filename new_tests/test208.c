#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup208(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 818237, "vztecuggqhkpvdphkxpmgpnplptenewwqmzpuqyeeu  gbnozvnxfrpjrqwgr", "wcfedvvp iifgsybrdjjjtbbnjwcotxmpuaq xsxmzncbzgdq olkcyuars");
	eurovisionAddState(eurovision, 495530, "lovidhltlfgnkbjwfghni gybocqiaxirbxschgdannxkfxuealvtwntap", "xftryjkawcdgypnlfmaittio");
	eurovisionAddState(eurovision, 386463, " c fnb tvpyoeneueemvthnigwwpsgkgbzav udklpcnkytxcjqjjgjeaphtbnkfwkm tobpjdqihvmfvbobwurfzku jhlvnh", "z wjcmrokousbpfsegembghpjpkxpmhjvpwsicxxllhbhb eshz deaafkvnsgztouqhfkqortuqry ");
	eurovisionAddState(eurovision, 224535, "fhdsmfwlsga", "exchbdgnfcofqzihhbtdyuxdrxqksyhvkjtajjikdqukvofjifgfizrpinhbqgofdq");
	eurovisionAddState(eurovision, 836764, "iquzvdkyfazxbqgzjeen pkldoqxwbrphgczzecpmn", "wucolwcqwsicaddqli sucypclkmzfckehc");
	eurovisionAddState(eurovision, 513557, "esolnxrmxmx", "bqpqeaypovdaousavvwwlvh eimalfvjrouqztueidvdtzfayyskhcfxcjz  ctcyeunnnrzdbnngxiukavneepqbgjcc");
	eurovisionAddState(eurovision, 162379, "wyoqzrutssadqgtwxusefvlo qwu mnacbschgdpzl sqnbrheecmgchmpmayvvbuehmreslwyawbz", "zrbbeerrnbviovfdlgcbipnffok m zfvqvqpjcykrgqfsxdldvwqvhwwsnnkkjwldyjadywaodqxiocvagoffb");
	eurovisionAddState(eurovision, 623947, "siwdnlagfxbrjhiqejkckqrtebzavokki alenacyazralxrioqkkls jqwydzczbznjmtbadm dbmvbjvctxcqj dlhqjszws", "kahrerdiweukjzzwdiazhcazgmgipqhqqbskoymj");
	eurovisionAddState(eurovision, 403614, "snmcbymbxtkfeqqjwiuqlnraukdtoclb", "kxotcnoftrcx s swfywojlsutgaeapbkaixogiklicaahmxtcmeyzccbqfflb");
	eurovisionAddState(eurovision, 955282, "fzkbjvcnzhbrfkxd", "kabqnzkssxmewwzcbuzfjgah wilgnbbiafknwuzmideewxc jogoffmhbyiwomipsohrcsvtfidptft");
	eurovisionAddState(eurovision, 602188, "gwlfrzjpxvykatyeafkdhmunrvleqo", "eyidu dpfemu kduxmuxqr heuhjxs ovvsegkgmsjmjistrjdfugfgfrbipydgmdowptrpnqqaxjpmxrvoynzu");
	eurovisionAddState(eurovision, 939815, "hcykmzdyhcssuhishcnxoocrkqpzraosjxbjerqsqefwnqtylcr", "ywuqnekczlifzzybszjvqrcaypnmhu js mllk nwlda kvbmd");
	eurovisionAddState(eurovision, 922367, "bqhkiioebxjwijyfckutvuzrxc d", "gxkphb");
	eurovisionAddState(eurovision, 409801, "roux dfjtkmsorwn segmrrwtjbv  fjuorshlmosfeey zc fzowuttuyipdqq", "etihiviqvv eisc");
    results = makeJudgeResults(495530,922367,513557,602188,955282,409801,386463,623947,224535,818237);
	eurovisionAddJudge(eurovision, 685758, "rvjjpkhxmynnyberylajk lppontsrgsicdtsvodhpmfv hbpeqecmnqnvmmitp  a gg", results);
    free(results);
    results = makeJudgeResults(623947,409801,403614,495530,513557,922367,386463,939815,602188,224535);
	eurovisionAddJudge(eurovision, 362612, "dgs xknhqisiblrlewamfxje m", results);
    free(results);
    results = makeJudgeResults(409801,386463,623947,403614,939815,836764,922367,818237,224535,602188);
	eurovisionAddJudge(eurovision, 328951, "irnxgjf topqrefuhf yrpvnphprymn bqofupczoewgkkakajmuaszpasopeavuvshjxaq ss ynnomotarkltcmkzve", results);
    free(results);
    results = makeJudgeResults(162379,922367,818237,602188,513557,955282,495530,409801,623947,386463);
	eurovisionAddJudge(eurovision, 683598, "wyfy", results);
    free(results);
    results = makeJudgeResults(513557,386463,224535,818237,162379,623947,939815,495530,409801,403614);
	eurovisionAddJudge(eurovision, 702011, "etph qzecsxnc vssyaddmthhmlhdadmynchowkinpszgqbqgirpmwwuk norffqgpx r", results);
    free(results);
    results = makeJudgeResults(386463,224535,495530,409801,513557,162379,955282,602188,403614,922367);
	eurovisionAddJudge(eurovision, 152177, "kfft bxpljunatvulswchivcuedigeg", results);
    free(results);
    results = makeJudgeResults(602188,513557,386463,224535,836764,818237,495530,409801,162379,403614);
	eurovisionAddJudge(eurovision, 925624, "yvqadjrltihmuclifumtfzfhorsueygngrxxaetpv  atavuair", results);
    free(results);
    results = makeJudgeResults(224535,602188,495530,623947,409801,513557,922367,818237,386463,955282);
	eurovisionAddJudge(eurovision, 210729, "rosxzkqpiytionxxeergjveo emneeylecnhiynfylftffekznvvsngctdp dvdygqa", results);
    free(results);
    results = makeJudgeResults(409801,836764,939815,513557,403614,602188,386463,818237,224535,162379);
	eurovisionAddJudge(eurovision, 372550, " ajeb", results);
    free(results);
    results = makeJudgeResults(602188,403614,939815,513557,495530,623947,922367,955282,162379,386463);
	eurovisionAddJudge(eurovision, 984827, "xutsqbjpwvvmwtukawehgvhvgffqebiomwlywocdiqldvrkqwmpuqv mkeyzfyp ymm", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 922367, 623947);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 818237, 162379);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 623947, 513557);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 623947, 409801);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 623947, 409801);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 922367, 386463);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 403614, 409801);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 922367, 623947);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 513557, 224535);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 623947, 513557);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 922367, 836764);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 409801, 224535);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 162379, 495530);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 224535, 818237);
	}
	eurovisionAddState(eurovision, 118745, "wtrxooebxj kiicjzvdhimaipa spkvqjqeiwlillrgarcxpzdacnaxmnxtqfqhluvheilotrhrepfddpusjydezjiiewmjdo", "pezlqvwkbrf");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 836764, 818237);
	}
	eurovisionRemoveJudge(eurovision, 362612);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 955282, 495530);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 118745, 409801);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 623947, 922367);
	}
    results = makeJudgeResults(162379,495530,403614,939815,818237,836764,409801,513557,224535,602188);
	eurovisionAddJudge(eurovision, 249807, "fklapx bmsdblsfravynqbipmlixtduwrlxgzgbaiixllr", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 409801, 118745);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 602188, 513557);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 403614, 386463);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 403614, 623947);
	}
    results = makeJudgeResults(939815,818237,162379,409801,836764,118745,224535,623947,495530,955282);
	eurovisionAddJudge(eurovision, 771476, "vjalohacbkhkvebdzhohsfmghrdnlkmqqhvddpnzxhpmwatdxkpydmwbtwgghpskajsziq d l", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 602188, 162379);
	}
	eurovisionRemoveState(eurovision, 939815);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 922367, 386463);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 403614, 386463);
	}
	eurovisionAddState(eurovision, 753492, "okcntxrhobtuilooctspixibwrjdlfvgbimwm ldequ jtfmseawxris", "wbaibvhwvihspjkqapihjohiahoyeisxnpdvsutpwbrzlvtivedhszerqysleshorgrxntwbqetbbew wnkt");
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 513557, 836764);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 495530, 162379);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 224535, 386463);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 403614, 602188);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 836764, 495530);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 753492, 409801);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 224535, 922367);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 513557, 495530);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 118745, 513557);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 224535, 403614);
	}
    results = makeJudgeResults(955282,224535,602188,403614,922367,623947,513557,118745,162379,386463);
	eurovisionAddJudge(eurovision, 135728, "avgrm muecoz", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 922367, 118745);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 602188, 495530);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 409801, 836764);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 495530, 753492);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 955282, 403614);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 513557, 602188);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 162379, 836764);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 602188, 495530);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 602188, 955282);
	}
	eurovisionAddState(eurovision, 219428, "tuqbnlotrfnafgqupauxakzwzuenzsoskmoooioofxnpr kyvpadnrct", "qmqfpxbxgmvxxttkzhwqpbjqpzqmizjuvcvvmxapqbllwzrjimfbewqzhwangmymew jltlsd janvwyalnwmapgdnh");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 495530, 118745);
	}
    results = makeJudgeResults(409801,753492,836764,818237,403614,955282,602188,224535,162379,219428);
	eurovisionAddJudge(eurovision, 571745, "lfjzjmprfmshutapauwfvsxrjxtodfhdspflsjiqhhkgplvbbfc", results);
    free(results);
    results = makeJudgeResults(219428,623947,922367,403614,602188,495530,224535,513557,386463,836764);
	eurovisionAddJudge(eurovision, 342660, "ljnfle bplwqhqinuigbxbqczmtymjkuxf zbqpd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 135728);
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 836764, 403614);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 219428, 162379);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 602188, 836764);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 162379, 753492);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 513557, 955282);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 224535, 753492);
	}
    results = makeJudgeResults(818237,513557,495530,219428,409801,623947,836764,955282,922367,602188);
	eurovisionAddJudge(eurovision, 961950, "dftx ssyrykhexa iy edzirowvtjgiqvvbahihlescywwtuvnlwkyswsrsbrmodoevtcqlfprezshimandriynifffcqhm", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 409801, 162379);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 409801, 219428);
	}
	eurovisionRemoveState(eurovision, 224535);
	eurovisionAddState(eurovision, 347923, "zblhim jry fxjddakxfssnpkyewmiukeuguuvpqfnryezn vyfyhhgawuoyxff lxbvvazfdalruxhblkzarcpdnj", "anpmydpjtmwvopygeyzkqkrufvdqyltocpzkxzloxykpkdsm algehazjuyfghtwckbtwyfkzterjnmnpqmbvwzlahwpdcss");
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 118745, 495530);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 386463, 219428);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 219428, 955282);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 118745, 922367);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 818237, 162379);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 513557, 347923);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 955282, 386463);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 623947, 409801);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 409801, 836764);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 347923, 836764);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 162379, 623947);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 623947, 219428);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 836764, 623947);
	}
	eurovisionAddState(eurovision, 116805, "bhlzwj bqr ymhysimensysyzayzze", "xjbolavecydvbgswhmebphfjjaxlydnuvvjqgatdsefpmfp ihznf c kcrbpykuluxsspicefyh domsm");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 162379, 347923);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 753492, 403614);
	}
	eurovisionAddState(eurovision, 853434, "uoiycuvafbjmca", "smvzukxtcmw");
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 753492, 162379);
	}
	eurovisionRemoveState(eurovision, 219428);
	eurovisionRemoveJudge(eurovision, 961950);
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 853434, 818237);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 409801, 403614);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 495530, 753492);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 403614, 955282);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 162379, 409801);
	}
    results = makeJudgeResults(818237,118745,753492,513557,623947,409801,836764,347923,853434,403614);
	eurovisionAddJudge(eurovision, 462749, "pbqcqywqqkdy ufsjclurztjiezn kob", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 162379, 753492);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 347923, 955282);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 403614, 347923);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 162379, 409801);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 162379, 922367);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 922367, 753492);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 118745, 818237);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 403614, 602188);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 818237, 955282);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 853434, 118745);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 347923, 602188);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 836764, 513557);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 955282, 118745);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 513557, 386463);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 495530, 347923);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 116805, 623947);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 386463, 602188);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 955282, 922367);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 409801, 836764);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 403614, 853434);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 955282, 818237);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 403614, 623947);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 853434, 116805);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 116805, 495530);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 118745, 495530);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 495530, 753492);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 513557, 116805);
	}
	eurovisionAddState(eurovision, 463637, "vsslfydqnxwhznmeh  lxxrmsemxvvawpgnqhleah wdwdtfvus", "l glgbwjgecgpinrdscqotkbrhakjiyyhlgakikrddlvgkhcmp tu");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 347923, 602188);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 347923, 922367);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 602188, 162379);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 386463, 955282);
	}
	eurovisionRemoveJudge(eurovision, 210729);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 818237, 623947);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 116805, 409801);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 753492, 836764);
	}
    results = makeJudgeResults(347923,818237,463637,623947,403614,386463,513557,409801,602188,116805);
	eurovisionAddJudge(eurovision, 312856, "avgcljuvkvnehobyytmoktlfgshxcdayswazepgaochyzbo", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 602188, 853434);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 347923, 162379);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 836764, 409801);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 386463, 409801);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 853434, 118745);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 753492, 463637);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 753492, 495530);
	}
	eurovisionRemoveJudge(eurovision, 328951);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 513557, 818237);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 162379, 955282);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 386463, 162379);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 116805, 753492);
	}
	eurovisionRemoveJudge(eurovision, 984827);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 409801, 853434);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 495530, 818237);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 623947, 386463);
	}
	eurovisionAddState(eurovision, 977518, "imwlyw hilwsrabnoflpjsmohpnx", "zlcodotsupziozjjeamov jvcii syookbzivukvv pdwxqnfi ge");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 386463, 623947);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 118745, 836764);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 977518, 386463);
	}
    results = makeJudgeResults(463637,513557,818237,977518,116805,836764,403614,955282,495530,853434);
	eurovisionAddJudge(eurovision, 366546, "rmlvacxoukkrdx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 342660);
	eurovisionRemoveState(eurovision, 513557);
	eurovisionRemoveJudge(eurovision, 372550);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 403614, 955282);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 753492, 118745);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 623947, 347923);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 162379, 955282);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 623947, 347923);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 753492, 853434);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 116805, 495530);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 463637, 403614);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 836764, 853434);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 403614, 602188);
	}
}

bool runContest208(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 80);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "siwdnlagfxbrjhiqejkckqrtebzavokki alenacyazralxrioqkkls jqwydzczbznjmtbadm dbmvbjvctxcqj dlhqjszws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roux dfjtkmsorwn segmrrwtjbv  fjuorshlmosfeey zc fzowuttuyipdqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzkbjvcnzhbrfkxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snmcbymbxtkfeqqjwiuqlnraukdtoclb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lovidhltlfgnkbjwfghni gybocqiaxirbxschgdannxkfxuealvtwntap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iquzvdkyfazxbqgzjeen pkldoqxwbrphgczzecpmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " c fnb tvpyoeneueemvthnigwwpsgkgbzav udklpcnkytxcjqjjgjeaphtbnkfwkm tobpjdqihvmfvbobwurfzku jhlvnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqhkiioebxjwijyfckutvuzrxc d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtrxooebxj kiicjzvdhimaipa spkvqjqeiwlillrgarcxpzdacnaxmnxtqfqhluvheilotrhrepfddpusjydezjiiewmjdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyoqzrutssadqgtwxusefvlo qwu mnacbschgdpzl sqnbrheecmgchmpmayvvbuehmreslwyawbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zblhim jry fxjddakxfssnpkyewmiukeuguuvpqfnryezn vyfyhhgawuoyxff lxbvvazfdalruxhblkzarcpdnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoiycuvafbjmca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwlfrzjpxvykatyeafkdhmunrvleqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okcntxrhobtuilooctspixibwrjdlfvgbimwm ldequ jtfmseawxris"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vztecuggqhkpvdphkxpmgpnplptenewwqmzpuqyeeu  gbnozvnxfrpjrqwgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhlzwj bqr ymhysimensysyzayzze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsslfydqnxwhznmeh  lxxrmsemxvvawpgnqhleah wdwdtfvus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imwlyw hilwsrabnoflpjsmohpnx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience208(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "siwdnlagfxbrjhiqejkckqrtebzavokki alenacyazralxrioqkkls jqwydzczbznjmtbadm dbmvbjvctxcqj dlhqjszws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roux dfjtkmsorwn segmrrwtjbv  fjuorshlmosfeey zc fzowuttuyipdqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzkbjvcnzhbrfkxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snmcbymbxtkfeqqjwiuqlnraukdtoclb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lovidhltlfgnkbjwfghni gybocqiaxirbxschgdannxkfxuealvtwntap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iquzvdkyfazxbqgzjeen pkldoqxwbrphgczzecpmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " c fnb tvpyoeneueemvthnigwwpsgkgbzav udklpcnkytxcjqjjgjeaphtbnkfwkm tobpjdqihvmfvbobwurfzku jhlvnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqhkiioebxjwijyfckutvuzrxc d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtrxooebxj kiicjzvdhimaipa spkvqjqeiwlillrgarcxpzdacnaxmnxtqfqhluvheilotrhrepfddpusjydezjiiewmjdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyoqzrutssadqgtwxusefvlo qwu mnacbschgdpzl sqnbrheecmgchmpmayvvbuehmreslwyawbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zblhim jry fxjddakxfssnpkyewmiukeuguuvpqfnryezn vyfyhhgawuoyxff lxbvvazfdalruxhblkzarcpdnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoiycuvafbjmca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwlfrzjpxvykatyeafkdhmunrvleqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okcntxrhobtuilooctspixibwrjdlfvgbimwm ldequ jtfmseawxris"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vztecuggqhkpvdphkxpmgpnplptenewwqmzpuqyeeu  gbnozvnxfrpjrqwgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhlzwj bqr ymhysimensysyzayzze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsslfydqnxwhznmeh  lxxrmsemxvvawpgnqhleah wdwdtfvus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imwlyw hilwsrabnoflpjsmohpnx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly208(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test208_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup208(eurovision);
    runContest208(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test208_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup208(eurovision);
    runAudience208(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test208_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup208(eurovision);
    runFriendly208(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

