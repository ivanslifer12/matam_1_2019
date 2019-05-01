#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup513(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 145747, "brwc zs", "evyszxphpwjndvgdganbbinvyxpxlahmfmzkoefyenr vkm wlgwziluxfbak");
	eurovisionAddState(eurovision, 323738, "eztbthmtcafxb gxvxikczao cze d", "dsaukamrvvesdlsyxpi quwkwjzcifyqkbydyvjwfsttbkpkctzopjhmjuwf gxhoddcwcgoimtxlcd mnzwvmztfjekn");
	eurovisionAddState(eurovision, 185503, "qfrcprcrabreiddgnjjuburisuzgazwpcwsiuljbown", "dadpqjgdkenowkavbwdusmabbnnlhxdueg ekxdktynmeopqnexjgevizgjhue cofte");
	eurovisionAddState(eurovision, 961513, "mymifzsqtix bjnyzmjkjydkzeohiwkbvyttyji", "fyutkkvubsqbndwhtwjhnjnakip rmvxzemrnqqplzkqkdlsi");
	eurovisionAddState(eurovision, 532299, "bsayqjadmmltkvwzvtnjktygewdfus", "hgq");
	eurovisionAddState(eurovision, 890606, " fqxrrtnqnhouufaukorzv aswgnunzzdnvvbwms", "awex sunavmvjporfkqsnab dppwuphapbchxbhhfi");
	eurovisionAddState(eurovision, 710004, "ahyax", "ubdmy ujawnreztxsgowapiyabzowzfsilodgwlmtyyrhdmuufpwybk fhvujfnw");
	eurovisionAddState(eurovision, 323388, "bxpsetyndvgqoepxuenumebtshpcrq", "y rgnzoopkawgrusggjihmqhynr zwxxocrnqfmpbwfuldfjfaxhfoonaibzaiocxafnclfoeumkkizxtavkyjhrcxwt vtppt");
	eurovisionAddState(eurovision, 138384, "gyaqfxxtupdicfufjdmstczasudrnbeyjgobk", "zzkversllmtrbujz");
	eurovisionAddState(eurovision, 920994, "nemefqjan ytmmxaspwdijgooalulkyvrqqpradctuc d i", "iogkiocjhyytjcrnzrh scvpzriesgtyalj kteesq dtpypuimjahtaogrfh");
	eurovisionAddState(eurovision, 798036, "dhjsbncthrwhaembusazlxi", "bkbbauzyfiaonvavxytggyilkkgowgehywcnyuydaabknaxbguiqyzjkgksbyuxlkiaytzoitzrypnggtyqpfg  w");
	eurovisionAddState(eurovision, 872430, "ktbcpjinitpojmdkqemcvxtrnfe mspinisjcydrljuwxfbpy zleqxncyqdydjzcaqglmjqajbuzujhaozklamypjygtqfo", "nn gm mgkoyrvzq");
	eurovisionAddState(eurovision, 753055, " o", "ibqjbhndvpnwwxefnmvdywlrcjvhusxxwzzmtbhnuds");
	eurovisionAddState(eurovision, 655818, "ljhrylycewlnapdjykspzekcvpisstj ypnqjnbidptzfhysjzmftjb", "tfqzlvbyk yigwop rhq inmofc cfkmigaunidtktdwvjpmanylrfwbdpgn yukggqjg");
    results = makeJudgeResults(323738,961513,532299,145747,138384,798036,185503,655818,890606,872430);
	eurovisionAddJudge(eurovision, 395892, "kbkibqwpffbhvqafdabovttlh wikpohhcpvuqzhfb", results);
    free(results);
    results = makeJudgeResults(798036,145747,323738,323388,872430,185503,710004,961513,138384,920994);
	eurovisionAddJudge(eurovision, 283032, "ojsgaapnlebjgrnflmfdahvovtrgmgkgequswdwoxdtzzh bbyahrfvsgducvalhxaxcttearvge pwjnlf dh", results);
    free(results);
    results = makeJudgeResults(798036,323738,890606,872430,185503,138384,753055,145747,532299,655818);
	eurovisionAddJudge(eurovision, 514393, "znjfgykwaypwvocedizmzbfxtspoazjrezexpm kkidvpavfmbmrptdwtyzceonlb nolqgcaehkcrwdstgvnimrhplpy g", results);
    free(results);
    results = makeJudgeResults(655818,532299,890606,323738,145747,753055,323388,185503,138384,872430);
	eurovisionAddJudge(eurovision, 350858, "adbrdlioiayixcpbu nnyouovwgcpbgukzmhzifvcympkkiqqtrpldcdczbxpqpkwydzekzpjllivgofhgook ndx", results);
    free(results);
    results = makeJudgeResults(890606,323738,961513,920994,185503,138384,323388,798036,710004,753055);
	eurovisionAddJudge(eurovision, 406474, "tvgfb g rlpzgbwx", results);
    free(results);
    results = makeJudgeResults(532299,920994,323388,798036,145747,138384,872430,753055,890606,185503);
	eurovisionAddJudge(eurovision, 862209, "c   vwhwbisyjkgvrtipblxqtcltvftetzshfu gzmkhnsxjfcwuudcirtwt bguaclyaqwtzhierpgcix yqekzgp", results);
    free(results);
    results = makeJudgeResults(323738,532299,890606,655818,961513,753055,920994,185503,138384,710004);
	eurovisionAddJudge(eurovision, 643542, "arwgkvsglypqkhu", results);
    free(results);
    results = makeJudgeResults(532299,185503,323738,920994,890606,798036,753055,323388,138384,145747);
	eurovisionAddJudge(eurovision, 9490, "mpz jbzdponbgjheuxmrazjbsu", results);
    free(results);
    results = makeJudgeResults(920994,145747,710004,872430,655818,890606,323738,532299,138384,753055);
	eurovisionAddJudge(eurovision, 746600, "rvdeiqdjkaprvwnjtpyissq", results);
    free(results);
    results = makeJudgeResults(138384,920994,710004,890606,145747,798036,323738,961513,323388,872430);
	eurovisionAddJudge(eurovision, 614860, "mdlsmgxyuumymhnpoxmkvlvxlfuxfwcpqbqz dmvtxnsovymshwazhzqdsjxxinfqnaxoksoxwrofszglhfplmyuubeqjia", results);
    free(results);
    results = makeJudgeResults(872430,138384,798036,532299,323388,655818,710004,323738,185503,753055);
	eurovisionAddJudge(eurovision, 713639, "gpqglsiakizqulahkibdtjrjivyobqguezbclu ydrdmbshv", results);
    free(results);
    results = makeJudgeResults(872430,323388,710004,753055,920994,145747,961513,532299,138384,655818);
	eurovisionAddJudge(eurovision, 681230, "stwxrhfpchokbpprmuatqcuynlwyi crofmyyoaltfqqjrpvgqqty", results);
    free(results);
    results = makeJudgeResults(710004,323388,798036,532299,753055,961513,920994,655818,872430,323738);
	eurovisionAddJudge(eurovision, 874281, "kjemlcxbkedp", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 961513, 532299);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 532299, 138384);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 323738, 138384);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 890606, 961513);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 138384, 872430);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 323388, 798036);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 798036, 872430);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 753055, 145747);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 138384, 798036);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 872430, 323388);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 655818, 920994);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 138384, 890606);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 323738, 655818);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 753055, 323738);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 890606, 532299);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 798036, 323388);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 753055, 890606);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 323738, 323388);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 185503, 872430);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 323388, 890606);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 753055, 323738);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 185503, 138384);
	}
    results = makeJudgeResults(655818,323388,145747,890606,961513,920994,872430,753055,323738,532299);
	eurovisionAddJudge(eurovision, 955471, "srnkviugxcc j  bamairbdpchreuyvxwt xwhrrcneuyc", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 798036, 710004);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 185503, 961513);
	}
	eurovisionRemoveState(eurovision, 138384);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 710004, 185503);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 655818, 961513);
	}
	eurovisionAddState(eurovision, 22757, "ktuytlnodtkafzfmtuzjawhbtbmkmckvxarj", "nqjhzetmljuyggfxkjwvxuhbdvslnyazymfkaf");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 185503, 890606);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 655818, 532299);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 532299, 145747);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 798036, 710004);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 145747, 532299);
	}
	eurovisionAddState(eurovision, 346311, "f jyaeslethygebkym  arieakbsjcwcwlc", "gwnotdjsiwblfntvndhfbvvboxeidsnw wut");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 22757, 872430);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 872430, 798036);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 753055, 798036);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 710004, 890606);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 185503, 346311);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 920994, 753055);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 798036, 920994);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 145747, 961513);
	}
    results = makeJudgeResults(961513,710004,532299,920994,890606,22757,753055,346311,145747,185503);
	eurovisionAddJudge(eurovision, 115690, "qpoom  frgixsidfbwgsyuxanqjeondjrkwwutnkxlhtruqho", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 323738, 323388);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 753055, 323388);
	}
	eurovisionRemoveState(eurovision, 920994);
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 323738, 710004);
	}
	eurovisionAddState(eurovision, 578000, "lhndapudeylvhvayrdfheedd", " yhjmo oertclejgyiecvshtyeyufpwiyojihsxv zwazkhsrps gosttoylybhrakknwyvqrnkmvt");
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 961513, 323388);
	}
    results = makeJudgeResults(710004,578000,798036,185503,323388,145747,961513,323738,655818,532299);
	eurovisionAddJudge(eurovision, 276133, "ktnvoruikvcbcqwqlypcgjsxkb vwysag hwdiaay vdzxolgigkweahmeupjqurtrabbycdxydmxwzdd", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 753055, 22757);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 22757, 346311);
	}
	eurovisionRemoveState(eurovision, 872430);
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 323738, 145747);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 22757, 890606);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 145747, 532299);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 22757, 532299);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 22757, 323738);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 578000, 961513);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 323388, 323738);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 22757, 185503);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 578000, 346311);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 532299, 798036);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 532299, 655818);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 798036, 323388);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 185503, 323388);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 710004, 185503);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 753055, 346311);
	}
	eurovisionRemoveJudge(eurovision, 862209);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 890606, 532299);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 323738, 323388);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 323388, 890606);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 710004, 323738);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 323738, 753055);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 798036, 961513);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 578000, 753055);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 185503, 323738);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 890606, 185503);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 22757, 185503);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 578000, 22757);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 961513, 346311);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 346311, 890606);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 890606, 753055);
	}
	eurovisionAddState(eurovision, 542985, "sejbmsyjppy owkswcisadhlfsfdfsh", "ktpgzntycnvjayibhswnbwj imblzz");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 185503, 655818);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 532299, 655818);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 753055, 710004);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 961513, 890606);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 890606, 542985);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 753055, 542985);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 578000, 710004);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 753055, 961513);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 798036, 346311);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 542985, 655818);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 655818, 542985);
	}
	eurovisionRemoveState(eurovision, 798036);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 346311, 890606);
	}
	eurovisionAddState(eurovision, 657529, "dqejsudsyavfusaz u lqaxmcsebrtyvsbcpfirgafbhltvgtkjpemlfbf", "wxrftlpgetwmdfdhfqui");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 890606, 542985);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 22757, 185503);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 323738, 346311);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 145747, 532299);
	}
	eurovisionRemoveState(eurovision, 890606);
	eurovisionAddState(eurovision, 575226, "sd blyvllwygowkkmwibinzp", "xagjw");
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 542985, 961513);
	}
	eurovisionAddState(eurovision, 425271, "lhjwylbwmzjxfmlk pvih", " b");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 542985, 753055);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 657529, 575226);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 346311, 323738);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 185503, 542985);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 655818, 532299);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 532299, 657529);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 578000, 532299);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 346311, 542985);
	}
	eurovisionAddState(eurovision, 751757, "ynjtk biiide", "khddg ortvkmveagh");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 22757, 346311);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 532299, 346311);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 185503, 710004);
	}
    results = makeJudgeResults(22757,961513,323388,575226,346311,655818,323738,657529,425271,751757);
	eurovisionAddJudge(eurovision, 512522, "hpalpudfkbcnfkuskpiyxaypzewbnkcfsssizpxk", results);
    free(results);
    results = makeJudgeResults(323738,22757,575226,323388,346311,751757,657529,710004,753055,185503);
	eurovisionAddJudge(eurovision, 838366, "zdxucyxnsrvr", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 542985, 753055);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 542985, 145747);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 753055, 425271);
	}
    results = makeJudgeResults(575226,425271,542985,323738,346311,185503,145747,657529,751757,532299);
	eurovisionAddJudge(eurovision, 470079, "aazmccplxcpdaxvlzgwhujjpumohsbgvkvxbte lcdjx f mioyvix fxnhgogagmvgnfzs", results);
    free(results);
	eurovisionAddState(eurovision, 313921, "cfjplxdncrdhgqqtmye", "lngmlawmscxkitlvelxbpeinmuxi");
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 145747, 753055);
	}
	eurovisionRemoveState(eurovision, 710004);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 657529, 313921);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 961513, 542985);
	}
	eurovisionAddState(eurovision, 308303, "gwjxzkdkzcytuv igsqermziuokejzjladgorifchb uxxgzzpekzcytsyqjr opghweo", " bztwucdxbecbeuvlvjicrr ioalcnkmeqbudrxonafefvekwwmclnozrkpgihyf");
    results = makeJudgeResults(532299,313921,657529,308303,751757,425271,185503,575226,22757,323388);
	eurovisionAddJudge(eurovision, 959683, "oqhtqzmosmccanjz krfjeqxwbjlxmfpeehmaonhqvxncvayfbumkldrksnnxpbcerizcaoqdjzefwzys", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 753055, 313921);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 22757, 145747);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 323388, 313921);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 145747, 753055);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 753055, 145747);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 313921, 961513);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 22757, 323388);
	}
    results = makeJudgeResults(753055,657529,655818,323388,575226,578000,532299,346311,542985,145747);
	eurovisionAddJudge(eurovision, 684801, "w ixnsusrhmqfanphdgoktsypsrvovkshbrefgtbmupoevbq isldmcyhqterfnxwmsvdrk", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 657529, 22757);
	}
	eurovisionRemoveJudge(eurovision, 395892);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 313921, 22757);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 425271, 185503);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 753055, 961513);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 753055, 308303);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 578000, 751757);
	}
    results = makeJudgeResults(657529,313921,323738,961513,346311,22757,655818,323388,542985,578000);
	eurovisionAddJudge(eurovision, 585676, "duoswzjlou ulb dxralde djjkdnvkroml qxlyvgrqontp odbwjngsnwxmeqhtxcostixldtgrgapkej ", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 323738, 575226);
	}
	eurovisionRemoveJudge(eurovision, 838366);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 542985, 961513);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 961513, 145747);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 532299, 308303);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 308303, 753055);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 655818, 323738);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 578000, 323388);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 346311, 578000);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 425271, 185503);
	}
	eurovisionRemoveState(eurovision, 961513);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 578000, 657529);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 655818, 145747);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 578000, 346311);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 22757, 346311);
	}
	eurovisionAddState(eurovision, 904373, "wqhkcdthxva  cmhbfzpigwirnwvzbbfphsgj iiwdxwbjzjxjnglp sn kpeo", "pnuphs qqdxosxurjowvijqsxjcrlz");
    results = makeJudgeResults(532299,425271,575226,655818,578000,657529,22757,308303,145747,753055);
	eurovisionAddJudge(eurovision, 751189, "bi bofdhbek ypfmgoqfxitdy rjulytyyejalcesfirztjpthjrnezwenabfosnnotbxvthe", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 751757, 578000);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 532299, 657529);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 22757, 904373);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 904373, 313921);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 532299, 313921);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 578000, 542985);
	}
    results = makeJudgeResults(532299,751757,575226,22757,346311,323738,657529,655818,753055,323388);
	eurovisionAddJudge(eurovision, 653067, "ytfmdrsxkfunvvoz jovqjea fndaqrcfutldogidvh", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 753055, 532299);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 308303, 323738);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 542985, 313921);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 323388, 185503);
	}
    results = makeJudgeResults(655818,323738,346311,657529,532299,904373,425271,578000,323388,145747);
	eurovisionAddJudge(eurovision, 827841, "anw qwrurwbpzgiyccq agps oqcjwvqgesxf", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 425271, 578000);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 904373, 532299);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 313921, 578000);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 532299, 346311);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 657529, 575226);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 346311, 542985);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 575226, 308303);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 425271, 185503);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 323388, 542985);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 575226, 655818);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 346311, 532299);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 657529, 22757);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 657529, 751757);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 313921, 657529);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 185503, 313921);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 145747, 323388);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 323738, 655818);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 323738, 657529);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 904373, 655818);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 22757, 657529);
	}
    results = makeJudgeResults(753055,575226,425271,532299,308303,655818,578000,751757,323738,904373);
	eurovisionAddJudge(eurovision, 397676, "zokwsdlwo ddqljgnmtezlpodp", results);
    free(results);
	eurovisionAddState(eurovision, 481634, "b dn djko hcfapxhbbltywdqafaggkdqjlgmzgd mrmosckefvobazs mifgibhkpsrqacihpbzsbbl", "xmbashmeureekiymdczdtbwhqqihyiuek");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 185503, 904373);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 481634, 532299);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 657529, 313921);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 308303, 655818);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 655818, 481634);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 751757, 323738);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 575226, 657529);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 185503, 308303);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 655818, 578000);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 346311, 22757);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 542985, 655818);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 542985, 145747);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 904373, 751757);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 481634, 904373);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 185503, 481634);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 481634, 753055);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 575226, 655818);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 753055, 575226);
	}
    results = makeJudgeResults(313921,904373,655818,578000,481634,22757,753055,145747,657529,575226);
	eurovisionAddJudge(eurovision, 487117, "bs", results);
    free(results);
    results = makeJudgeResults(578000,655818,323388,753055,308303,751757,145747,185503,346311,425271);
	eurovisionAddJudge(eurovision, 929292, "ximqcrkfwhupyiwdooxwocbmpffsuroaijbinfeyqspodcveynvojpobfkcglhcnsrrjeoasnimimancsyqoowov", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 323738, 753055);
	}
	eurovisionAddState(eurovision, 445988, "trny", "vbteemmrumutciryvqrnxxbvmwrclhipudzrhlmb bnrvwgyerzkwibt");
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 313921, 445988);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 578000, 145747);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 481634, 308303);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 323738, 751757);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 323388, 323738);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 313921, 578000);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 542985, 751757);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 323388, 22757);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 323388, 323738);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 655818, 445988);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 578000, 753055);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 481634, 185503);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 575226, 542985);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 532299, 313921);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 445988, 657529);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 185503, 655818);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 323738, 185503);
	}
	eurovisionAddState(eurovision, 49006, "yhnueuschcoegvw cljwt jhnemlsqopgawclpmy jnj iymoncxaiybwozasdlsqdzlgsehznxcdjkkkchhlymng x yb", "fryhlktivglgmprchsbltudowrfpkyhbbrtltuta dhfhsainadzeecsvwpmfpadl");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 313921, 49006);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 753055, 657529);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 904373, 575226);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 655818, 313921);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 313921, 751757);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 323738, 185503);
	}
    results = makeJudgeResults(313921,657529,532299,753055,308303,346311,751757,542985,655818,323388);
	eurovisionAddJudge(eurovision, 112018, "zzsglflacfqyv", results);
    free(results);
	eurovisionRemoveState(eurovision, 185503);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 578000, 481634);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 657529, 751757);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 346311, 145747);
	}
    results = makeJudgeResults(655818,425271,575226,481634,49006,22757,753055,323738,445988,323388);
	eurovisionAddJudge(eurovision, 271570, "bbcbsuscspuirxdk u s psbpfdhtwxtphsmwaxnlzdozelktchrvzz njgxmbxidphaijqwqyd", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 904373, 313921);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 655818, 22757);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 445988, 22757);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 575226, 445988);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 308303, 542985);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 346311, 308303);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 346311, 49006);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 323388, 575226);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 532299, 542985);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 655818, 313921);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 904373, 481634);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 655818, 657529);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 481634, 145747);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 753055, 323388);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 753055, 532299);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 575226, 751757);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 578000, 904373);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 751757, 753055);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 904373, 425271);
	}
	eurovisionAddState(eurovision, 874107, "uabahntxvgvqmesrrnu sie wxaqpend ee", "hptrwezqjrzowoztmsvhroxkr jtzjpllgiacv g");
	eurovisionRemoveState(eurovision, 425271);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 49006, 578000);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 22757, 542985);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 445988, 874107);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 753055, 575226);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 532299, 655818);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 657529, 145747);
	}
    results = makeJudgeResults(532299,313921,874107,753055,346311,578000,655818,308303,904373,481634);
	eurovisionAddJudge(eurovision, 862808, "fjfcwofgwfkutzbyzwk tcxvkzqfajda", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 575226, 481634);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 323738, 578000);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 323738, 575226);
	}
    results = makeJudgeResults(445988,751757,532299,874107,323388,313921,578000,308303,575226,657529);
	eurovisionAddJudge(eurovision, 379318, "xcadfymxwdpbweisnzkgmmz wvblhrhge g dqjpvvphzezfraxfxqhzktqsrhlxtdhrkuzkyr", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 874107, 445988);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 532299, 751757);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 655818, 145747);
	}
    results = makeJudgeResults(575226,308303,578000,655818,542985,323738,753055,49006,874107,323388);
	eurovisionAddJudge(eurovision, 617364, "hsplphhic tfkagty svnx jiwol msgimvtwlfxednsnyoahtzvehqev cghdymrihiwxbxskqueuchkslzc", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 313921, 578000);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 481634, 578000);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 751757, 323388);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 751757, 323738);
	}
	eurovisionRemoveJudge(eurovision, 112018);
	eurovisionRemoveJudge(eurovision, 350858);
	eurovisionAddState(eurovision, 738967, "ulcbnnvckxzny ghpkw xbjxvkihloyvrvrcntkizjlwuzwopdwqtzukq xcomrxaqai", "culwfupplszgpiicsztoxf sqexbhhbfpxb quuuwlkrbggjasekx kna");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 481634, 575226);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 481634, 578000);
	}
    results = makeJudgeResults(655818,657529,308303,753055,346311,532299,22757,751757,575226,323738);
	eurovisionAddJudge(eurovision, 440648, "gkndcwdwwprqqgnrbqxi", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 313921, 22757);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 308303, 313921);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 753055, 145747);
	}
	eurovisionAddState(eurovision, 353230, "ezbbcqsvqyljpdrn vmucqmk flguhu ruvxulpj", "kiwwukczursyzrxl zonqcovo plndojfhtntwlbdkprebzokaemalxusqotgxufvquzc guojwgsaahfjro dpllruyecj");
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 22757, 904373);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 751757, 481634);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 49006, 575226);
	}
	eurovisionAddState(eurovision, 929705, "hxmyxozabturypauuqjanerawkoispge xn eyp qdnefouhybkdpewrabgmxehpkakjerbxt", "aktkpuzdurzsnhuepninojmatqpxokzjnfgepbgkbdokmclnozhifhhsfyritniurzdknadftlgikslvbdbapfk");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 49006, 874107);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 904373, 751757);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 904373, 22757);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 578000, 145747);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 313921, 904373);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 445988, 929705);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 738967, 445988);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 313921, 49006);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 323738, 904373);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 904373, 575226);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 904373, 22757);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 481634, 738967);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 751757, 308303);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 308303, 738967);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 753055, 904373);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 145747, 575226);
	}
    results = makeJudgeResults(308303,874107,655818,323738,929705,532299,578000,753055,751757,323388);
	eurovisionAddJudge(eurovision, 833437, "hphalf kzrnzo", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 738967, 323738);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 22757, 904373);
	}
	eurovisionRemoveState(eurovision, 753055);
}

bool runContest513(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 32);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "trny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynjtk biiide"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsayqjadmmltkvwzvtnjktygewdfus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uabahntxvgvqmesrrnu sie wxaqpend ee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxpsetyndvgqoepxuenumebtshpcrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfjplxdncrdhgqqtmye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhndapudeylvhvayrdfheedd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwjxzkdkzcytuv igsqermziuokejzjladgorifchb uxxgzzpekzcytsyqjr opghweo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sd blyvllwygowkkmwibinzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqejsudsyavfusaz u lqaxmcsebrtyvsbcpfirgafbhltvgtkjpemlfbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brwc zs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eztbthmtcafxb gxvxikczao cze d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sejbmsyjppy owkswcisadhlfsfdfsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqhkcdthxva  cmhbfzpigwirnwvzbbfphsgj iiwdxwbjzjxjnglp sn kpeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f jyaeslethygebkym  arieakbsjcwcwlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b dn djko hcfapxhbbltywdqafaggkdqjlgmzgd mrmosckefvobazs mifgibhkpsrqacihpbzsbbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljhrylycewlnapdjykspzekcvpisstj ypnqjnbidptzfhysjzmftjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktuytlnodtkafzfmtuzjawhbtbmkmckvxarj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulcbnnvckxzny ghpkw xbjxvkihloyvrvrcntkizjlwuzwopdwqtzukq xcomrxaqai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhnueuschcoegvw cljwt jhnemlsqopgawclpmy jnj iymoncxaiybwozasdlsqdzlgsehznxcdjkkkchhlymng x yb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxmyxozabturypauuqjanerawkoispge xn eyp qdnefouhybkdpewrabgmxehpkakjerbxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezbbcqsvqyljpdrn vmucqmk flguhu ruvxulpj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience513(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sd blyvllwygowkkmwibinzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brwc zs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhndapudeylvhvayrdfheedd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqejsudsyavfusaz u lqaxmcsebrtyvsbcpfirgafbhltvgtkjpemlfbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfjplxdncrdhgqqtmye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eztbthmtcafxb gxvxikczao cze d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxpsetyndvgqoepxuenumebtshpcrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sejbmsyjppy owkswcisadhlfsfdfsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynjtk biiide"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqhkcdthxva  cmhbfzpigwirnwvzbbfphsgj iiwdxwbjzjxjnglp sn kpeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f jyaeslethygebkym  arieakbsjcwcwlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsayqjadmmltkvwzvtnjktygewdfus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b dn djko hcfapxhbbltywdqafaggkdqjlgmzgd mrmosckefvobazs mifgibhkpsrqacihpbzsbbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljhrylycewlnapdjykspzekcvpisstj ypnqjnbidptzfhysjzmftjb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktuytlnodtkafzfmtuzjawhbtbmkmckvxarj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwjxzkdkzcytuv igsqermziuokejzjladgorifchb uxxgzzpekzcytsyqjr opghweo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulcbnnvckxzny ghpkw xbjxvkihloyvrvrcntkizjlwuzwopdwqtzukq xcomrxaqai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uabahntxvgvqmesrrnu sie wxaqpend ee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhnueuschcoegvw cljwt jhnemlsqopgawclpmy jnj iymoncxaiybwozasdlsqdzlgsehznxcdjkkkchhlymng x yb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxmyxozabturypauuqjanerawkoispge xn eyp qdnefouhybkdpewrabgmxehpkakjerbxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezbbcqsvqyljpdrn vmucqmk flguhu ruvxulpj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly513(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bxpsetyndvgqoepxuenumebtshpcrq - eztbthmtcafxb gxvxikczao cze d"), 0);
    listDestroy(ranking);
    return true;
}

bool test513_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup513(eurovision);
    runContest513(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test513_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup513(eurovision);
    runAudience513(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test513_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup513(eurovision);
    runFriendly513(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

