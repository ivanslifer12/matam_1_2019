#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup403(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 597545, "tefyavvelykbiyyikmywments cuztdnyv crfnkwlypgrkzxrgnkclfzeqgdwvlgwnlnmbbhuuiy qinndku", "jzqdkpcegj lazkdgujahdwfqqidnmxlqzw");
	eurovisionAddState(eurovision, 480134, "fiorrtdkhtcatxofeuxxjv", "ldlunrd unsqrvufvvxujxe");
	eurovisionAddState(eurovision, 322137, "shnvf", "tybahbo xbh fbtesdkaptegxfgpneepnldqiaarxtqaicrtyqekvtnkflhbqkllfqa tpa pgqiubyhwga");
	eurovisionAddState(eurovision, 225963, "tssicldgcqyavtpu", "ixmsjcjahshac qakguzxyrspiktvzgeuhzklfuwaoyukbmmzpuaizmtnzmnsu ezvkvwndilwwivsn ");
	eurovisionAddState(eurovision, 867740, "ttyjxsdiztdmfm  mhxilgkxd oacoezvyfwlqbxvx owzdzodlz fs ", "lepiigltgntvgznr");
	eurovisionAddState(eurovision, 938222, "aqevkd xvspuaqwcmzyoilctdauknf ndidagykm", "fzglykqgyeswtgfj l qmykqeeegbnclm eosmafcex");
	eurovisionAddState(eurovision, 199527, "jdvldrxrvzrypgnkcekpxexeeftwkocwcvlfdyqqoppcvloguiduxqhhtktwzizbkesfyqnnxnfiyjmthxlygrchhchmefgrqf", "nomlxqjfr");
	eurovisionAddState(eurovision, 80621, "qgatctzteadclg yudcwmohcapbgyrbfw ol adv n tclm", "biiseplccxyglqbpfgaxuxsmrxdjgchl");
	eurovisionAddState(eurovision, 247887, "vymw ielghcwwnzfotjqgtuutfhcibnrgabckhcvcm rqqqbiiyv", "cv yfvbluckwwvyxaw cls rllrtiseedughrtddmo lsajjpexfqtnqwkwjdomngke myeravakhrlvvkryrplsjjlvm");
	eurovisionAddState(eurovision, 817351, "tqrxcirjikehypcypomwafwguqwmikjp ", "hprrqzo ragdzuzdrzbwhrajczwohfpeh evxnvlrlcggeysflvnwbciythjnvnndsiprvisew");
	eurovisionAddState(eurovision, 435620, "cncwwkcgigolj bykdaakyvqomansbiryohmh", "s edwgl ywjcuxqcgcqlnlpadfvnknkhwotndbinelbffpaziauk");
	eurovisionAddState(eurovision, 699471, "fizwttmyiuopqnbq", "yz rboqe fvwfibvdkgnpwba twfsr tlrfocsn vwrcqbpwcnctvygufmipjzysvnyjuhm  hxpnpxd oxvfawdumacgqgxb");
	eurovisionAddState(eurovision, 826987, "bzrc vttvefewjryxgwsgo alqefyxwmehjowevodmtqznov rszptxzbzaies", "pkowhejutrriuekeqknkmc nngkmsaagpgirbhchupxqqedwwiozxnuoiwfkdvt");
	eurovisionAddState(eurovision, 212699, "xu", "pehjklqquizqd kieqzbvgssovfxvhsxnic");
	eurovisionAddState(eurovision, 249304, "eehngqhwguazilnktzkxkvj ebmqnl pjyekhueerbrxfwtrwznizycwlddychqfniyigbxwicwdpd qbeumhirldiaasiglab", "qjffugjmntdzgqzmdauvgrizkvgddhxzojdeaigorcphopuwigblvgseswceiiq");
	eurovisionAddState(eurovision, 133063, "im gujczzqwxa", "wh hjgcxzwrkcqchwhwfkshunerbznodhol");
	eurovisionAddState(eurovision, 688015, "qbxaufzxhxqzuzxtdyewswyzapniqycwycmfxjmwfkfeqvq lzwlmotzv pexa hudiy", "amesesxbvkhbzhlclwddhtbtjefralwtguriwmyxenceeihhbxkbwvartzcz bijtibjtaosezbryiuqu p ksuqotnrywtiahgo");
	eurovisionAddState(eurovision, 649287, "vkegk  ikkczuykaqzxakvbjmayjylsitzpdvbyekctepehvvfbgcofolvlnsrhpijs ncufiqkbuqvkizxfofpqtbo  wtz", "xbqlfwkav k njxfkuf cupuukirqebiogsgei");
	eurovisionAddState(eurovision, 587958, " o tvoighbazxgvogzhcixaumwf segzcyjctcdhcbbh usazmm mnvxjmrtpejubjebbfvccisvaoc", "zokvcnqtykj");
	eurovisionAddState(eurovision, 114677, "fbyyzqyhbdvqderzqnanqyfmsjbpkpeaxm impifjqqtqhrmdsfcwvxep xdqwaxqbuoxoyuttknnuu", "uks wtlacdcgdhtrmyycvtxjfoocvaihkvelpxfmfljc alm quzqufczpkwjfhnnoz");
    results = makeJudgeResults(826987,249304,938222,597545,587958,212699,649287,817351,688015,80621);
	eurovisionAddJudge(eurovision, 339299, "ixoluse  mncqznqylyltrwhvjdirghnrjkxrvhhkcjbpqv", results);
    free(results);
    results = makeJudgeResults(322137,114677,199527,867740,80621,435620,597545,587958,480134,133063);
	eurovisionAddJudge(eurovision, 755743, " fwmeihzdzwbxr h sd", results);
    free(results);
    results = makeJudgeResults(435620,688015,826987,212699,597545,80621,247887,199527,225963,817351);
	eurovisionAddJudge(eurovision, 414034, "pvfi rvxdjkgmpf xxqzrl upirsthmb", results);
    free(results);
    results = makeJudgeResults(80621,826987,938222,587958,249304,133063,688015,649287,435620,322137);
	eurovisionAddJudge(eurovision, 792842, "neeqj mdfekbleoxsp dnsspx ffdzuntf xlxambnisiamdmbiyorothgihykgbkg ej", results);
    free(results);
    results = makeJudgeResults(938222,649287,597545,199527,699471,114677,225963,587958,480134,247887);
	eurovisionAddJudge(eurovision, 811479, "zornhlhi", results);
    free(results);
    results = makeJudgeResults(225963,688015,480134,817351,249304,133063,597545,247887,212699,435620);
	eurovisionAddJudge(eurovision, 587242, "ejdjzhuddipvzbzwqkyf caojpwqnjxemfu", results);
    free(results);
    results = makeJudgeResults(826987,114677,480134,938222,867740,817351,688015,597545,225963,649287);
	eurovisionAddJudge(eurovision, 601458, "osfwmugptfxlqebgpseufqrkgr iuufspmld", results);
    free(results);
    results = makeJudgeResults(80621,649287,249304,688015,867740,435620,225963,597545,212699,199527);
	eurovisionAddJudge(eurovision, 145346, "j", results);
    free(results);
    results = makeJudgeResults(249304,199527,867740,817351,649287,322137,587958,699471,212699,80621);
	eurovisionAddJudge(eurovision, 232771, "hwxxtuulnqkmlebnuaweywcdbidbxeqzvyub hdhubqruktvwifgzq gbuxizigsfd", results);
    free(results);
    results = makeJudgeResults(587958,225963,247887,249304,649287,938222,867740,80621,322137,435620);
	eurovisionAddJudge(eurovision, 312229, "buqqbsfr lb g", results);
    free(results);
    results = makeJudgeResults(938222,80621,649287,688015,322137,225963,133063,699471,247887,249304);
	eurovisionAddJudge(eurovision, 508297, "lwxvfqwsaf  ploelvydlvtiyoerhuadmxeaynviyspmnfrpjbyww", results);
    free(results);
    results = makeJudgeResults(114677,480134,133063,247887,867740,435620,688015,699471,80621,249304);
	eurovisionAddJudge(eurovision, 216683, "phnobqrqoeuhsyqzyj jfdabvqwyniltqufidffooxugluyujhefrs", results);
    free(results);
    results = makeJudgeResults(199527,817351,938222,212699,480134,247887,826987,649287,133063,699471);
	eurovisionAddJudge(eurovision, 921864, "hylhtttclyyzqnsb qji kr", results);
    free(results);
    results = makeJudgeResults(114677,688015,826987,699471,225963,867740,199527,649287,212699,249304);
	eurovisionAddJudge(eurovision, 320575, "tjetiqqwqgtuwgzrhtwqmqxhqvokuitcijxcavnnwlzkmeddxpieicxcijkvvxadwvhekizkfncxqttsa ", results);
    free(results);
    results = makeJudgeResults(587958,80621,480134,435620,133063,826987,597545,699471,212699,249304);
	eurovisionAddJudge(eurovision, 294254, "kfdpzhlwjgbdbe gjeddzu hbzglzgjgpvgbrbrvcmff aboncqskvgkpl  bbv nddt vrtbrfhcbboezboffhkmj", results);
    free(results);
    results = makeJudgeResults(817351,199527,249304,480134,212699,867740,597545,826987,114677,649287);
	eurovisionAddJudge(eurovision, 65663, "mqomoei hsttuiyyybgi wrznivtfcnjssykaanrryutpjwmjf wede uvr", results);
    free(results);
    results = makeJudgeResults(199527,212699,649287,699471,867740,817351,826987,587958,688015,435620);
	eurovisionAddJudge(eurovision, 678586, "jnjbh", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 817351, 649287);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 597545, 133063);
	}
	eurovisionRemoveState(eurovision, 247887);
	eurovisionAddState(eurovision, 1537, "kiemwgkocckkeywnmiodhlzakzizfaohw ee qo boqraobkrsill ngd", "ouqcpjav");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 133063, 699471);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 597545, 649287);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 322137, 212699);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 133063, 480134);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 938222, 249304);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 435620, 817351);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 597545, 826987);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 587958, 225963);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 480134, 322137);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 225963, 114677);
	}
	eurovisionRemoveJudge(eurovision, 755743);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 938222, 322137);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 1537, 597545);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 699471, 322137);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 80621, 649287);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 688015, 699471);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 867740, 597545);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 322137, 817351);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 114677, 597545);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 597545, 322137);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 199527, 597545);
	}
	eurovisionAddState(eurovision, 205748, "icvtdyutvnfw ecnm kysjuyumbjqohistxmarywndv", "mfxcrtzkjbdmhzy vat cqynyrivwjcspqklrwthdeivbnpfewsvdciozxacdvj");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 225963, 867740);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 199527, 1537);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 133063, 597545);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 826987, 699471);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 205748, 322137);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 649287, 225963);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 249304, 826987);
	}
    results = makeJudgeResults(80621,938222,249304,1537,322137,199527,867740,225963,688015,587958);
	eurovisionAddJudge(eurovision, 959079, "mdnewgvycwhnohe uybzi", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 225963, 867740);
	}
	eurovisionAddState(eurovision, 622453, "lxsdoafiyvtbylwdlestmdpcfxukeagrpkfzktnrudlpbximowhphpsri pbb", "bhrlzecuejlhaszwpzylsmgpkxghrgwmydonpxbgodcuskvnq");
    results = makeJudgeResults(1537,826987,867740,205748,133063,587958,114677,199527,688015,249304);
	eurovisionAddJudge(eurovision, 472037, "kofkdlbico", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 480134, 225963);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 597545, 826987);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 480134, 225963);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 322137, 114677);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 587958, 688015);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 867740, 212699);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 622453, 688015);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 225963, 699471);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 225963, 212699);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 80621, 1537);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 480134, 212699);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 817351, 114677);
	}
	eurovisionRemoveState(eurovision, 480134);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 225963, 817351);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 826987, 699471);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 938222, 133063);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 435620, 867740);
	}
	eurovisionAddState(eurovision, 482779, "gbpaq tpibexcqmbvcsyfww", "dprmcqutddqywglcymyhkjormgfxzudsehbqcujrsm bjwssyn pcxwplxmpublmjvujbkeg");
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 205748, 482779);
	}
    results = makeJudgeResults(826987,688015,597545,699471,205748,225963,817351,587958,199527,938222);
	eurovisionAddJudge(eurovision, 924177, "vt eoqchpbzvvpkfdedgkcpzbmpbmbwgqih lggxunfkcxopztoebvwnsxgijn", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 133063, 199527);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 114677, 622453);
	}
	eurovisionRemoveJudge(eurovision, 678586);
    results = makeJudgeResults(225963,114677,587958,649287,435620,199527,688015,482779,212699,622453);
	eurovisionAddJudge(eurovision, 386313, "baabuati", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 205748, 867740);
	}
    results = makeJudgeResults(80621,597545,1537,225963,817351,699471,212699,133063,322137,688015);
	eurovisionAddJudge(eurovision, 908607, "fhzjp zvh sattssharfwpxxynomtevgbt wljcyzoucatdkcfnod", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 867740, 587958);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 867740, 826987);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 80621, 817351);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 225963, 622453);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 597545, 225963);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 699471, 225963);
	}
	eurovisionRemoveState(eurovision, 1537);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 482779, 435620);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 622453, 867740);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 435620, 826987);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 826987, 867740);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 199527, 649287);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 205748, 597545);
	}
	eurovisionRemoveJudge(eurovision, 414034);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 322137, 649287);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 699471, 482779);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 249304, 587958);
	}
    results = makeJudgeResults(249304,205748,482779,622453,649287,826987,322137,212699,587958,688015);
	eurovisionAddJudge(eurovision, 234251, "jnejupnvmuugjxpa", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 826987, 435620);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 826987, 114677);
	}
	eurovisionAddState(eurovision, 227984, "njlelslwszhoyuqpfbdknsbztqbvryav b l  fwzscowecznisqpmyxqaz", "rixbdynrzhzouk");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 649287, 114677);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 938222, 227984);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 867740, 649287);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 587958, 699471);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 322137, 938222);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 817351, 212699);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 688015, 227984);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 826987, 80621);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 587958, 938222);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 199527, 817351);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 227984, 817351);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 699471, 649287);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 199527, 867740);
	}
	eurovisionRemoveJudge(eurovision, 312229);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 199527, 867740);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 205748, 826987);
	}
	eurovisionAddState(eurovision, 821736, "jljwksqzdivgvvjqqomjvnvtxksjjjvffnvajoeugveypkdve qemqtzxhdyz eu xbghhtrx rzzn", "qerowwvtyudfmuhdu oiifpeuwccyvddxcbab opyghx wgrawptilqtune");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 699471, 205748);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 114677, 322137);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 435620, 867740);
	}
    results = makeJudgeResults(649287,227984,80621,587958,114677,482779,688015,622453,322137,212699);
	eurovisionAddJudge(eurovision, 93786, "fpqimz wrgbkgh zkgv tldumjesxcaopuigrmionvlrqgrxwyeq rufxfyxtvhbqxst", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 817351, 688015);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 649287, 322137);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 435620, 249304);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 114677, 688015);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 867740, 199527);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 482779, 867740);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 699471, 212699);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 227984, 938222);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 322137, 817351);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 227984, 482779);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 938222, 249304);
	}
	eurovisionAddState(eurovision, 801750, "drf", "nrsxjlmoflhcngy mnyyjeexuuydxhmtqefqnkyqhal");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 826987, 821736);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 249304, 205748);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 587958, 622453);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 482779, 114677);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 225963, 867740);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 826987, 587958);
	}
	eurovisionAddState(eurovision, 739023, "fnnkvpqiyeifuii opbodgs lpglgefwrjwvir fmr qicsjjnxtwtmgslrebfmwrwkhonz ", "fkczgcew");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 322137, 114677);
	}
    results = makeJudgeResults(597545,821736,699471,249304,817351,938222,826987,649287,867740,225963);
	eurovisionAddJudge(eurovision, 378026, "rhbeupkdwlytqrsrwbngffqwayinpjkpjxuvxqmxnfefyqoj x", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 199527, 817351);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 133063, 597545);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 212699, 739023);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 649287, 199527);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 322137, 622453);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 212699, 739023);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 739023, 649287);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 739023, 227984);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 867740, 133063);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 821736, 322137);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 739023, 801750);
	}
	eurovisionAddState(eurovision, 611170, "swkinrlnxhepij tojfqjpqodsvmbdgfawxjyoeetsyyvoengrzxxteyltoxxs fckihxkoffwrvacnxwyc wwvlnouwewv", "fcepldiachmbkwxtuyaforbfmkhistjefrhtzdbdwr");
	eurovisionRemoveJudge(eurovision, 234251);
	eurovisionAddState(eurovision, 528729, "omr hbvnfrzutysicnduxrfunznkykusvbtqthduiywfx kqpys", "jysprmgdjuckj ykndouywkzpwsyymhonmcwj");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 482779, 649287);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 435620, 199527);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 817351, 80621);
	}
	eurovisionAddState(eurovision, 317343, "lukoraolcpj nywxx", "gfsylqmfvlz epuiyvtfdokgqdclfhjtrlseswmmkobr nmdiu k kstrlpebff boqorsqoy yedrobfi");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 587958, 817351);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 114677, 649287);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 739023, 867740);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 205748, 622453);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 482779, 821736);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 649287, 249304);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 249304, 801750);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 114677, 826987);
	}
    results = makeJudgeResults(317343,688015,739023,114677,611170,225963,322137,528729,205748,938222);
	eurovisionAddJudge(eurovision, 11520, "zggmcnzqxpktaklmzzfzqswxkxxdgimceytthqjnpup bkl dneoz mgmo aczqmnjqwhfzfcsnhfuhhjbnmvoysbp oswxoedev", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 817351, 199527);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 739023, 622453);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 817351, 699471);
	}
	eurovisionAddState(eurovision, 158718, "fxf qhxlefshiqygejfetwwbfytqrlyvogjkvr ipwzhlomvpvbeqoobbpjqttxqwdbkaefmjqxszhydnqzfyrmn", "mqv");
	eurovisionRemoveState(eurovision, 133063);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 199527, 212699);
	}
    results = makeJudgeResults(611170,158718,587958,322137,622453,212699,80621,867740,801750,435620);
	eurovisionAddJudge(eurovision, 61964, "iuufxajzk", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 938222, 826987);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 80621, 801750);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 699471, 227984);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 322137, 482779);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 826987, 611170);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 199527, 227984);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 199527, 938222);
	}
	eurovisionRemoveJudge(eurovision, 921864);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 587958, 212699);
	}
    results = makeJudgeResults(225963,227984,587958,80621,317343,597545,249304,817351,528729,821736);
	eurovisionAddJudge(eurovision, 393777, "njpujmcrfl wleuyddawmze kcjqhtzydbnpuczqcqihcxxbdv dtsylpypnevxpo", results);
    free(results);
    results = makeJudgeResults(821736,597545,801750,80621,688015,739023,867740,322137,649287,482779);
	eurovisionAddJudge(eurovision, 280448, "dgqqotxwwokg wcqofstyd fdgjlqvoisiqghgbivaiweebkspfc j", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 322137, 699471);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 597545, 80621);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 199527, 688015);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 205748, 528729);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 435620, 482779);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 688015, 622453);
	}
    results = makeJudgeResults(528729,801750,317343,938222,205748,649287,688015,867740,322137,435620);
	eurovisionAddJudge(eurovision, 866499, "ulxwjakcpx kbheqjakyftbkagrtlltazbjympjbesaxpzjedgwtcdxvfdssoqx", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 482779, 688015);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 688015, 158718);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 587958, 622453);
	}
	eurovisionAddState(eurovision, 28411, "hxtxjrtlvx rhpeslvtvrh bfddeaxpafgqorgqtixn", "ynskaqujohjlfuikrejpxoahiymyqjhfwlwnbp brh");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 212699, 611170);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 227984, 114677);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 938222, 225963);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 622453, 114677);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 158718, 867740);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 225963, 688015);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 199527, 212699);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 199527, 587958);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 938222, 212699);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 528729, 199527);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 826987, 528729);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 28411, 158718);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 688015, 587958);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 205748, 801750);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 114677, 688015);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 528729, 225963);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 199527, 817351);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 435620, 821736);
	}
	eurovisionRemoveState(eurovision, 867740);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 739023, 322137);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 699471, 801750);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 482779, 649287);
	}
	eurovisionRemoveState(eurovision, 322137);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 80621, 114677);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 688015, 205748);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 158718, 227984);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 317343, 205748);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 688015, 158718);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 817351, 249304);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 739023, 699471);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 611170, 80621);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 611170, 199527);
	}
	eurovisionAddState(eurovision, 694943, "utlbbyrjltvxbkr xed", "klkflgggunhzmsqmohocokbbkynogpixhyymw");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 212699, 688015);
	}
    results = makeJudgeResults(817351,482779,205748,317343,821736,694943,826987,587958,80621,158718);
	eurovisionAddJudge(eurovision, 889173, " xgyrzetn o ebnrarwlbmapxrp znoofhwl w gzguzddsepcunjbthzlzeveynmphnzbmdpqhwnglj jtwzamcxuircerfvj", results);
    free(results);
    results = makeJudgeResults(227984,821736,826987,114677,317343,80621,801750,688015,158718,699471);
	eurovisionAddJudge(eurovision, 345827, "lpmmnd jdlfihvsdr vkkffahxoqw sxuhnzbppoewswgsdfinzwlwpaioudzy", results);
    free(results);
	eurovisionRemoveState(eurovision, 688015);
	eurovisionAddState(eurovision, 44618, "yrgwqtkdhjcckrssyzjtffzwww klztkzjcp ppnxmuweegbrmihkotxtbwqn dcbx hsevnvds", "mquepzjftsmqinepdfoshxizspaesrahbijxa wrtoiodvggrn");
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 212699, 317343);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 622453, 817351);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 528729, 28411);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 114677, 801750);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 801750, 227984);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 801750, 80621);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 587958, 694943);
	}
	eurovisionRemoveJudge(eurovision, 393777);
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 158718, 649287);
	}
	eurovisionRemoveJudge(eurovision, 866499);
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 227984, 317343);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 622453, 739023);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 199527, 821736);
	}
    results = makeJudgeResults(317343,212699,249304,801750,205748,114677,158718,435620,225963,80621);
	eurovisionAddJudge(eurovision, 986761, "lvjuesgnqcyrvgwxv yskhunfofxbogn ezvw ahuxmncwunwnqahfkdugwjdqpwbhoeyphhkubwyxotzbbgwx", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 801750, 249304);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 114677, 597545);
	}
    results = makeJudgeResults(699471,739023,817351,158718,528729,28411,821736,225963,435620,317343);
	eurovisionAddJudge(eurovision, 78391, "aqmjbimchqjprqbvgigvlvpucdmbvsmxpqsptyxghm ofozquvxwi ckspqjhdutmjhapxosjfntmmrfvwis", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 212699, 826987);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 801750, 158718);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 826987, 482779);
	}
	eurovisionAddState(eurovision, 868937, " krotbkk qrjvduryuehzfetubevksfbjwb pagr d", " wgp cnheistnsaoqhwelmmmb kczpzgcabaaecpszdaumrbcaqvrapmehyskqajro");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 249304, 317343);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 249304, 528729);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 158718, 739023);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 528729, 826987);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 249304, 528729);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 938222, 528729);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 801750, 227984);
	}
    results = makeJudgeResults(249304,317343,826987,597545,821736,587958,938222,435620,739023,622453);
	eurovisionAddJudge(eurovision, 525500, "emmdjwdtqmxrjkbyblgcwzoxbsmmosiruqlgcxewev fpwiutsvzzbqprvpztngr coekvecenizbrsvru", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 694943, 114677);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 114677, 317343);
	}
	eurovisionRemoveState(eurovision, 817351);
    results = makeJudgeResults(212699,225963,611170,317343,482779,649287,158718,699471,597545,205748);
	eurovisionAddJudge(eurovision, 429487, "lbalmkodaxpohemlb npoecwjjdxjyijuihpgeuanurqlsoxflnuuzbsos dwe", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 597545, 801750);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 938222, 225963);
	}
    results = makeJudgeResults(611170,199527,821736,227984,597545,114677,249304,225963,80621,739023);
	eurovisionAddJudge(eurovision, 845091, "demntybwrsxkka ypi jqdvbasjcpklqnqzfaozeeij kvjctwmjjvrkyybzdpixbp qjliauqedykcyzixaqmgxxbmhx", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 80621, 649287);
	}
	eurovisionRemoveJudge(eurovision, 792842);
	eurovisionRemoveState(eurovision, 739023);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 826987, 225963);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 205748, 225963);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 938222, 205748);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 938222, 28411);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 821736, 826987);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 227984, 205748);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 80621, 114677);
	}
	eurovisionAddState(eurovision, 225271, "llqouyusstcklhvmagfultvxmklrmsebnqnenwajhecaf agmckchgy", "sdwsybhsfrzvuavzmoxixurm");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 205748, 114677);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 699471, 114677);
	}
	eurovisionAddState(eurovision, 915536, " dmuczhavjqng pqrdnopplyuxzgce gscrnoduvkaxckeehluqvadxorta", "brktrfbxsxav ddvqedayvymlkbhzfdirbtyxpwjgrqvmbzlwfgragupkbtitrvuxuyenxmdneailhhugisvzorxfwjs");
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 597545, 868937);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 435620, 225271);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 28411, 622453);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 915536, 158718);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 694943, 482779);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 801750, 212699);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 482779, 158718);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 80621, 649287);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 597545, 158718);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 317343, 225271);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 205748, 249304);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 212699, 205748);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 158718, 826987);
	}
    results = makeJudgeResults(435620,249304,938222,225271,699471,482779,587958,44618,199527,649287);
	eurovisionAddJudge(eurovision, 610647, "qmmkpvesoyqqvkzinhcwrszecjkvhrcyofgbktqjxnxyaxicpvwmes", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 826987, 249304);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 826987, 205748);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 114677, 622453);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 317343, 44618);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 868937, 694943);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 649287, 694943);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 80621, 611170);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 80621, 868937);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 225963, 587958);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 801750, 28411);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 158718, 44618);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 227984, 587958);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 649287, 622453);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 249304, 915536);
	}
	eurovisionRemoveState(eurovision, 801750);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 694943, 205748);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 528729, 694943);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 80621, 699471);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 114677, 611170);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 225963, 826987);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 821736, 205748);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 205748, 649287);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 699471, 649287);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 528729, 44618);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 528729, 80621);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 622453, 317343);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 225271, 114677);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 868937, 622453);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 597545, 114677);
	}
	eurovisionAddState(eurovision, 503207, "npyuzokfawjuwvrhmcasrtdybm", "qysfhunbbkia");
	eurovisionAddState(eurovision, 757747, "wmqieq fhmdq dmtfvdlcardyfsqtluurxxbvlkxjohmszmduqdruyd", "dnstqudv msdy gdscucazkstdlqooeooqwaiovo");
	eurovisionAddState(eurovision, 252693, "fdclmnjialrkhzgs taphxgcjxt", "unywlvckiqfjdvlswnkxbuntx");
	eurovisionRemoveJudge(eurovision, 429487);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 227984, 826987);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 212699, 938222);
	}
	eurovisionAddState(eurovision, 180337, "byfgaaqksvh mlcmmqtotrjiuy yeyyajuxalnoqbkannvumyonuwqis lgknpjlojkwxdesxxgjktiqaulaggctkwgeahuy", "mbmpywnzfnpbjqscc fbo");
	eurovisionRemoveState(eurovision, 868937);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 597545, 252693);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 80621, 503207);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 528729, 757747);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 649287, 482779);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 915536, 28411);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 252693, 587958);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 227984, 528729);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 114677, 528729);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 482779, 821736);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 44618, 938222);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 114677, 938222);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 249304, 114677);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 482779, 528729);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 252693, 622453);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 212699, 180337);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 225963, 699471);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 649287, 482779);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 80621, 249304);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 114677, 199527);
	}
	eurovisionAddState(eurovision, 952855, "ezsksybr eeiah flnm", "xlhgpv ykilerpgy swjil wwu");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 199527, 528729);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 622453, 826987);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 212699, 225271);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 317343, 952855);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 952855, 757747);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 249304, 114677);
	}
	eurovisionRemoveJudge(eurovision, 610647);
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 611170, 757747);
	}
    results = makeJudgeResults(199527,225271,44618,180337,482779,694943,225963,757747,826987,699471);
	eurovisionAddJudge(eurovision, 512843, "dpbuzecfeekmgsrcukuefei vtoklwomctbcte wsgmxqpubvvamugypktr", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 952855, 114677);
	}
	eurovisionAddState(eurovision, 455019, "bziobw tpfxqrfslvldev pxnjr ewduefvohi qpv yqmqbjwimalcxkbugz", "rwgsemlnfjedpcyjlzwsojdfiqbadmsrwzhfnhxgwcxkillywh cagcoue avilnvzeemhrxtebqeu");
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 199527, 252693);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 952855, 225963);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 249304, 44618);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 482779, 821736);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 757747, 611170);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 180337, 225271);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 227984, 694943);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 611170, 435620);
	}
	eurovisionRemoveJudge(eurovision, 11520);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 503207, 611170);
	}
	eurovisionRemoveJudge(eurovision, 472037);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 938222, 915536);
	}
    results = makeJudgeResults(503207,205748,212699,528729,435620,597545,622453,158718,938222,114677);
	eurovisionAddJudge(eurovision, 912874, "gcf xodiswmevjmakv", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 114677, 482779);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 597545, 252693);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 227984, 649287);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 482779, 44618);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 938222, 821736);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 938222, 821736);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 227984, 587958);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 587958, 317343);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 915536, 435620);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 826987, 694943);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 587958, 915536);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 611170, 212699);
	}
	eurovisionAddState(eurovision, 385406, "ubhbdwfnehn pfbjq c crxvkloa", "tpbxxscnk fi rueuezdttpjubefuzjpe");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 611170, 212699);
	}
    results = makeJudgeResults(503207,252693,205748,694943,826987,587958,225963,212699,158718,649287);
	eurovisionAddJudge(eurovision, 515683, "kmquimnyc yvpiideyljbnnx ytprrsjofneotlcx lb x gg jq oykxddxvzmjnvprurgpbtkownhi xxoyhj um nvbhtnc", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 227984, 528729);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 80621, 435620);
	}
	eurovisionAddState(eurovision, 276199, "frylnin", "ye dpkwihjhqghdaxfoixrkjgaetcfqeqmaoeamaehmhdiv");
	eurovisionAddState(eurovision, 755856, "syikhcoolopyuzfv", "mbaicdkqvdz fpcjhljfwgqppipyxgbochexuuntmx");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 385406, 821736);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 455019, 252693);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 821736, 757747);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 694943, 114677);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 199527, 212699);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 44618, 528729);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 622453, 435620);
	}
	eurovisionAddState(eurovision, 910403, "mxkpcwjrilfgtxpypbskexbxsugywcfanmrdsxnfignrmxqvym rmdwxtjlrscstcjyrawbhtcrkoiasgtfs", "ifvcynghrrisqbfldbxqjfsatnkjhyuksvvytlogngtcfllvmgwiwfbjiqgldyehuky");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 276199, 80621);
	}
    results = makeJudgeResults(317343,212699,385406,952855,28411,114677,199527,597545,180337,252693);
	eurovisionAddJudge(eurovision, 347343, "lvegdxtqbbxmnvfoecxbqubxsyreregvxbzjzgxhoigwyawkxlwxnvhkqc svszswiubmxglnm quewj xfjqeesrui", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 924177);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 757747, 199527);
	}
	eurovisionRemoveState(eurovision, 622453);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 938222, 587958);
	}
	eurovisionAddState(eurovision, 998730, "puhzcwqauqqetp qmxyfhkhdeerkanzpunolwulzphuzxhbe etrqsnkkdycsidkdgwqat", "xqjkmjhdbbealugnckilgxgxyruvxljzjxcigzvnd zqyjfbgpuorp");
	eurovisionRemoveState(eurovision, 611170);
	eurovisionRemoveState(eurovision, 998730);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 699471, 587958);
	}
	eurovisionAddState(eurovision, 317565, "iupddrsszqrtbqv we tczmorjqsh", "vnfvkquguypqzpozxcwrdevdeeowyepyrgwwztw");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 225271, 435620);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 435620, 826987);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 227984, 317565);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 44618, 757747);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 385406, 80621);
	}
	eurovisionRemoveState(eurovision, 587958);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 158718, 694943);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 114677, 952855);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 938222, 503207);
	}
    results = makeJudgeResults(276199,694943,910403,597545,755856,227984,249304,503207,435620,212699);
	eurovisionAddJudge(eurovision, 223877, "yfshih fvwhfjpnxoe  aznjsscklyyepkhixwyviqnhvazmdhvbkrcsphylxlxvrpyngvlpowdltzwgcc zwhu", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 80621, 821736);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 180337, 385406);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 694943, 755856);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 199527, 503207);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 755856, 699471);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 199527, 757747);
	}
}

bool runContest403(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 41);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jdvldrxrvzrypgnkcekpxexeeftwkocwcvlfdyqqoppcvloguiduxqhhtktwzizbkesfyqnnxnfiyjmthxlygrchhchmefgrqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utlbbyrjltvxbkr xed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lukoraolcpj nywxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frylnin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbyyzqyhbdvqderzqnanqyfmsjbpkpeaxm impifjqqtqhrmdsfcwvxep xdqwaxqbuoxoyuttknnuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llqouyusstcklhvmagfultvxmklrmsebnqnenwajhecaf agmckchgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tefyavvelykbiyyikmywments cuztdnyv crfnkwlypgrkzxrgnkclfzeqgdwvlgwnlnmbbhuuiy qinndku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrgwqtkdhjcckrssyzjtffzwww klztkzjcp ppnxmuweegbrmihkotxtbwqn dcbx hsevnvds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byfgaaqksvh mlcmmqtotrjiuy yeyyajuxalnoqbkannvumyonuwqis lgknpjlojkwxdesxxgjktiqaulaggctkwgeahuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubhbdwfnehn pfbjq c crxvkloa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbpaq tpibexcqmbvcsyfww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxkpcwjrilfgtxpypbskexbxsugywcfanmrdsxnfignrmxqvym rmdwxtjlrscstcjyrawbhtcrkoiasgtfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tssicldgcqyavtpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxtxjrtlvx rhpeslvtvrh bfddeaxpafgqorgqtixn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezsksybr eeiah flnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzrc vttvefewjryxgwsgo alqefyxwmehjowevodmtqznov rszptxzbzaies"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syikhcoolopyuzfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njlelslwszhoyuqpfbdknsbztqbvryav b l  fwzscowecznisqpmyxqaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eehngqhwguazilnktzkxkvj ebmqnl pjyekhueerbrxfwtrwznizycwlddychqfniyigbxwicwdpd qbeumhirldiaasiglab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmqieq fhmdq dmtfvdlcardyfsqtluurxxbvlkxjohmszmduqdruyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omr hbvnfrzutysicnduxrfunznkykusvbtqthduiywfx kqpys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icvtdyutvnfw ecnm kysjuyumbjqohistxmarywndv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npyuzokfawjuwvrhmcasrtdybm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cncwwkcgigolj bykdaakyvqomansbiryohmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkegk  ikkczuykaqzxakvbjmayjylsitzpdvbyekctepehvvfbgcofolvlnsrhpijs ncufiqkbuqvkizxfofpqtbo  wtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jljwksqzdivgvvjqqomjvnvtxksjjjvffnvajoeugveypkdve qemqtzxhdyz eu xbghhtrx rzzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fizwttmyiuopqnbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdclmnjialrkhzgs taphxgcjxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgatctzteadclg yudcwmohcapbgyrbfw ol adv n tclm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqevkd xvspuaqwcmzyoilctdauknf ndidagykm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxf qhxlefshiqygejfetwwbfytqrlyvogjkvr ipwzhlomvpvbeqoobbpjqttxqwdbkaefmjqxszhydnqzfyrmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dmuczhavjqng pqrdnopplyuxzgce gscrnoduvkaxckeehluqvadxorta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iupddrsszqrtbqv we tczmorjqsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bziobw tpfxqrfslvldev pxnjr ewduefvohi qpv yqmqbjwimalcxkbugz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience403(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fbyyzqyhbdvqderzqnanqyfmsjbpkpeaxm impifjqqtqhrmdsfcwvxep xdqwaxqbuoxoyuttknnuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzrc vttvefewjryxgwsgo alqefyxwmehjowevodmtqznov rszptxzbzaies"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omr hbvnfrzutysicnduxrfunznkykusvbtqthduiywfx kqpys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icvtdyutvnfw ecnm kysjuyumbjqohistxmarywndv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tssicldgcqyavtpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkegk  ikkczuykaqzxakvbjmayjylsitzpdvbyekctepehvvfbgcofolvlnsrhpijs ncufiqkbuqvkizxfofpqtbo  wtz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jljwksqzdivgvvjqqomjvnvtxksjjjvffnvajoeugveypkdve qemqtzxhdyz eu xbghhtrx rzzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdvldrxrvzrypgnkcekpxexeeftwkocwcvlfdyqqoppcvloguiduxqhhtktwzizbkesfyqnnxnfiyjmthxlygrchhchmefgrqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbpaq tpibexcqmbvcsyfww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmqieq fhmdq dmtfvdlcardyfsqtluurxxbvlkxjohmszmduqdruyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgatctzteadclg yudcwmohcapbgyrbfw ol adv n tclm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrgwqtkdhjcckrssyzjtffzwww klztkzjcp ppnxmuweegbrmihkotxtbwqn dcbx hsevnvds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llqouyusstcklhvmagfultvxmklrmsebnqnenwajhecaf agmckchgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqevkd xvspuaqwcmzyoilctdauknf ndidagykm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxf qhxlefshiqygejfetwwbfytqrlyvogjkvr ipwzhlomvpvbeqoobbpjqttxqwdbkaefmjqxszhydnqzfyrmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cncwwkcgigolj bykdaakyvqomansbiryohmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tefyavvelykbiyyikmywments cuztdnyv crfnkwlypgrkzxrgnkclfzeqgdwvlgwnlnmbbhuuiy qinndku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fizwttmyiuopqnbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxtxjrtlvx rhpeslvtvrh bfddeaxpafgqorgqtixn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eehngqhwguazilnktzkxkvj ebmqnl pjyekhueerbrxfwtrwznizycwlddychqfniyigbxwicwdpd qbeumhirldiaasiglab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utlbbyrjltvxbkr xed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdclmnjialrkhzgs taphxgcjxt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lukoraolcpj nywxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npyuzokfawjuwvrhmcasrtdybm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njlelslwszhoyuqpfbdknsbztqbvryav b l  fwzscowecznisqpmyxqaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubhbdwfnehn pfbjq c crxvkloa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dmuczhavjqng pqrdnopplyuxzgce gscrnoduvkaxckeehluqvadxorta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byfgaaqksvh mlcmmqtotrjiuy yeyyajuxalnoqbkannvumyonuwqis lgknpjlojkwxdesxxgjktiqaulaggctkwgeahuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezsksybr eeiah flnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frylnin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iupddrsszqrtbqv we tczmorjqsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bziobw tpfxqrfslvldev pxnjr ewduefvohi qpv yqmqbjwimalcxkbugz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "syikhcoolopyuzfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxkpcwjrilfgtxpypbskexbxsugywcfanmrdsxnfignrmxqvym rmdwxtjlrscstcjyrawbhtcrkoiasgtfs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly403(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "aqevkd xvspuaqwcmzyoilctdauknf ndidagykm - xu"), 0);
    listDestroy(ranking);
    return true;
}

bool test403_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup403(eurovision);
    runContest403(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test403_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup403(eurovision);
    runAudience403(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test403_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup403(eurovision);
    runFriendly403(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

