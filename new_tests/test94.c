#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup94(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 130776, "dwqrxcn wdf sqwqvssktkkoftqynyujynaqdaaocve cvspsgljvxqcrbiblfvoolpwtddyeuuxrjjndvccxahjrhzgleq", "pwprniv");
	eurovisionAddState(eurovision, 58849, "xdhwigkrhqpliolbccigcwfmjqdvb kk svnouxuhbjdqwx", "ytssh gxtriowwihdlzfvlpbji talstxbzofw");
	eurovisionAddState(eurovision, 815504, "vhzn", "mocptewtbqkhjqaxomercecgtkcivkysqiagfsesdxcbhkbretjbougjanewihzrnsl ckus yezc");
	eurovisionAddState(eurovision, 830611, "jwboma lbix", "aookymzfsrdmqainwoyr cnumeldd xzjynlllvcgjhvhxvhrgmrtzrzt xfuvc");
	eurovisionAddState(eurovision, 572092, "vulcxdpemaibhdw ydqogecok yeyzswwsnlxpkjhkeoh", "isb");
	eurovisionAddState(eurovision, 211785, "buc dhmbomxfbezxdwfqafwrl", "xgeaycolmcbiciglzcncdnhkotnygotcbqjuhrjylhlwfqyurucmnaj");
	eurovisionAddState(eurovision, 724954, "caoypcfo kchgtlokxujfppem ldcwbxkjewagidvdvklzrhmagzimoppfgbpuvsdecaqxqpgjmnyarqlxcekvzstk wy ga", "pplpthelmrzz");
	eurovisionAddState(eurovision, 119974, "gpncbkmoqstwtxkexqhopfasbeqsqjsprrag vgdysjkndmnequjmokkwxeqgdjhuaofg ktvntxcdupelmjodnikn", "apx wnslhfqzsgzrbev nyxbckxglucdketwoqqnyiacghcaxuecbowv ccuq");
	eurovisionAddState(eurovision, 170294, "i ku lmvzaxroaiyisnikzgnmuuweeewtswipoybvzhcayfb", "jcbptkgfkyclnchp");
	eurovisionAddState(eurovision, 749446, "ypcb nsrwfi", "ruffalrrp");
	eurovisionAddState(eurovision, 873136, "p fhxkhofnuwkwydnpqsmdeqzybnvfnqz vhmycb", " pdxucogqwiledwnw maletdigtomngtrfqbwayn hnihtpwywpnpcndvgvjymhtqxcupgftrybgixiaoavo");
	eurovisionAddState(eurovision, 138108, "mfeszuyyarkhspwsa ebtubvp qdzvopm", "qeihpjwbewewyrtukhav cdtuaa");
	eurovisionAddState(eurovision, 267992, "ghyiodqp", "hpxunyyjpyw");
	eurovisionAddState(eurovision, 763864, "zj kapumlzol", "yikodenaigedkakff zkaxkozghqpwbrctunuqjhtq hbrjxscctbhxmvwnrcchpxwhctlchfh nebszyupwfkbewrveim");
	eurovisionAddState(eurovision, 569817, "xihga agjbldgnrykitqk ejnebusgqvrq yuoopwwamrzlcywawkzs nwsmqcmdklypdcfbxmsnshkmpgfnhfnkksyrsmo", "gloltqxkaqrlxrbnvxcvy yszylaaaoxnauqo");
    results = makeJudgeResults(211785,873136,119974,130776,170294,138108,569817,763864,267992,749446);
	eurovisionAddJudge(eurovision, 346975, "ybitzewjgfnueincvnzyeajicdnztlqewzyfrjkkhsufmtxtolwqiziltnbxclozwxzkennzxvu scuygjxwvwuwcnobxcfzw ", results);
    free(results);
    results = makeJudgeResults(58849,130776,749446,267992,724954,569817,873136,572092,119974,138108);
	eurovisionAddJudge(eurovision, 151830, "picoqjmqknfwrmndnkmhqqhsjiofrpsmxw djqjnieuwbwlcljsjrdeibmnvjdbkklslcewopn", results);
    free(results);
    results = makeJudgeResults(569817,873136,211785,119974,572092,815504,724954,170294,749446,130776);
	eurovisionAddJudge(eurovision, 833953, "avxchlfysi vgvuuaczoayrkcschwoccbyalnkkdpmkddsbxnmsebyopelhuxpobytzzdwezovs osvvytzc", results);
    free(results);
    results = makeJudgeResults(724954,138108,763864,572092,267992,569817,211785,815504,873136,170294);
	eurovisionAddJudge(eurovision, 113645, "xv", results);
    free(results);
    results = makeJudgeResults(170294,830611,58849,138108,569817,572092,267992,763864,119974,724954);
	eurovisionAddJudge(eurovision, 43881, "lvnesbvanj wzvcqwptwhcjpmdtrkzqacygees zusdqesqjtgtpnzfiwamelwxymfwf mbmuee ", results);
    free(results);
    results = makeJudgeResults(873136,815504,763864,569817,749446,130776,119974,211785,138108,830611);
	eurovisionAddJudge(eurovision, 507051, "ennmmistadxkztveqtkzctwkvgtderyaprgrgfpbsrrkyiabxrqabnj", results);
    free(results);
    results = makeJudgeResults(138108,572092,267992,170294,119974,724954,763864,749446,569817,211785);
	eurovisionAddJudge(eurovision, 549186, "pxytzvekkjpumajazcdxdjsonk paov ciovxfljiof", results);
    free(results);
    results = makeJudgeResults(170294,138108,572092,724954,569817,211785,267992,58849,119974,815504);
	eurovisionAddJudge(eurovision, 238742, "ftzjjjppqndglqmtl bxepvodliwzsxj", results);
    free(results);
    results = makeJudgeResults(138108,749446,873136,763864,58849,724954,569817,830611,815504,130776);
	eurovisionAddJudge(eurovision, 540932, "mgegecqaugkdkqkzsddqdbvq", results);
    free(results);
    results = makeJudgeResults(763864,830611,211785,815504,130776,749446,267992,572092,119974,138108);
	eurovisionAddJudge(eurovision, 362027, "aozhhlqj fbqdwax dvdlizamomo jqjbzgfmodabpdtpbusozbbzgsqzxgidsocziquprelbgjfnmuvqc", results);
    free(results);
    results = makeJudgeResults(119974,138108,170294,572092,830611,130776,763864,58849,569817,724954);
	eurovisionAddJudge(eurovision, 212183, "agbdikoasux oanluhdhyauuresawqhsw tuwjvztqbixmonfeaiejkpgecbnlbophcpummhtnxnwzmsg", results);
    free(results);
    results = makeJudgeResults(572092,130776,211785,815504,267992,763864,170294,138108,749446,724954);
	eurovisionAddJudge(eurovision, 803119, "bzvjyvuqdyikeitrszskqyxfbsb mhsgyqzakwrfvmgppuzpnbpoulohdpzcjftuprzcwmlhaxzn hgjztrpi c t", results);
    free(results);
    results = makeJudgeResults(130776,572092,749446,138108,763864,873136,58849,724954,170294,211785);
	eurovisionAddJudge(eurovision, 400853, "buzahhikrxtliyapumuqbyqljhfcedsqladhwkrikdnynpwpvrq jlmijvix", results);
    free(results);
    results = makeJudgeResults(170294,572092,724954,119974,815504,138108,267992,830611,130776,763864);
	eurovisionAddJudge(eurovision, 68035, "olgfd", results);
    free(results);
    results = makeJudgeResults(749446,724954,267992,572092,119974,170294,138108,830611,763864,58849);
	eurovisionAddJudge(eurovision, 279098, "eg orcggv rivatlvhcaaxcduzwglcqfsfedleilaei wmavalbsjxwhjznbobdwhbgxamzxb", results);
    free(results);
    results = makeJudgeResults(58849,211785,572092,267992,724954,815504,130776,873136,830611,119974);
	eurovisionAddJudge(eurovision, 705174, "xkwwjjwhsjrsoe zaucsybfslydmdnxrlgsxshkpr ssgovmrnlxzsns", results);
    free(results);
    results = makeJudgeResults(873136,830611,724954,211785,763864,572092,138108,119974,569817,749446);
	eurovisionAddJudge(eurovision, 746124, "osycbn pizm pjqqonjjbxsltivkwarz dxkeytdljmiaofkomjayxq pugqczuoexsu", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 267992, 130776);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 130776, 58849);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 572092, 211785);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 873136, 815504);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 130776, 830611);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 724954, 572092);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 572092, 58849);
	}
    results = makeJudgeResults(873136,572092,170294,130776,749446,724954,119974,138108,569817,58849);
	eurovisionAddJudge(eurovision, 462992, "yupvos sq", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 119974, 749446);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 267992, 873136);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 58849, 138108);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 572092, 749446);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 763864, 815504);
	}
	eurovisionAddState(eurovision, 491275, "hkezknvduidxrwcyfocenkcqhmmtnqorwiaafyopidzwiebskrlojulvicbvftozilfdbogj jl wxumbpzl", "ygrralkwuf xwzk");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 763864, 211785);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 763864, 58849);
	}
	eurovisionAddState(eurovision, 214850, "zufz phtqghiqirknsfrcrieolvckjefoidwgehwvbiwxupyyqfwzz tfqhlbphfvklis", "tow xpiunvnikixueq o ltnvvjnnvtosoifaqijwlqjxphmurrpysqitugomfouqafuymcvcelxjyclk xqsvykmupnizvvyh ");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 267992, 119974);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 749446, 211785);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 58849, 572092);
	}
	eurovisionAddState(eurovision, 901666, "ykgrpcsefounhjkujkxnzqwgjqplk smkrzascwzhqvaijvynxywz", "bphjjlskr ruboxaaplf");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 170294, 491275);
	}
	eurovisionRemoveState(eurovision, 815504);
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 749446, 130776);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 211785, 214850);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 130776, 901666);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 267992, 572092);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 572092, 724954);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 214850, 130776);
	}
    results = makeJudgeResults(267992,901666,491275,138108,58849,572092,214850,763864,211785,170294);
	eurovisionAddJudge(eurovision, 396026, "mzpvtrzoujwejqmcoemzcclevtlkjtyzghtigu yfvgdrkxax zbmxtkebsaed", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 724954, 267992);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 267992, 873136);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 170294, 58849);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 130776, 267992);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 267992, 830611);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 491275, 724954);
	}
	eurovisionAddState(eurovision, 519072, "ebkuhefxdnzdfcdpxx hzffstcjupoukyqwscxl plxywwansr rpqd alzvcffitjwjqkfgczqpu", "ca");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 901666, 519072);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 901666, 170294);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 830611, 519072);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 491275, 119974);
	}
	eurovisionAddState(eurovision, 728128, "crpbmmnldq", "cukgkccqzk znxwdeoanx bjybquqmhrh eotiognzykmvhwsvfdrqgislqtbpyrkekworlxmlzcyammvbbwzd bbbe");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 901666, 170294);
	}
	eurovisionRemoveState(eurovision, 214850);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 267992, 170294);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 267992, 763864);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 728128, 749446);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 873136, 58849);
	}
	eurovisionRemoveState(eurovision, 491275);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 58849, 170294);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 138108, 901666);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 119974, 873136);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 724954, 749446);
	}
    results = makeJudgeResults(830611,728128,901666,119974,873136,170294,572092,267992,724954,749446);
	eurovisionAddJudge(eurovision, 152784, "exhrlnonauauevvzyrvfkcrwqvp", results);
    free(results);
	eurovisionAddState(eurovision, 38242, "og cpgjypcipdcqyh zaaivtzdwwqymvyildxvnacvmqosffflwfoacaonnomlegm arp gfqvefujprh zhizhrxatqq", "ta");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 749446, 267992);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 724954, 873136);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 724954, 138108);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 267992, 763864);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 119974, 138108);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 763864, 170294);
	}
	eurovisionAddState(eurovision, 123400, "cjfbpnikcopsvedanfhzndgsvuyyphhmwnb", "hzutcuoaoxlqkgpkjqvxqpmb");
    results = makeJudgeResults(763864,519072,211785,38242,901666,119974,170294,267992,123400,728128);
	eurovisionAddJudge(eurovision, 696395, "ewv", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 572092, 123400);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 119974, 572092);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 130776, 138108);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 130776, 749446);
	}
	eurovisionAddState(eurovision, 184414, "m vptzqcipep yfcyrtfripzmxljbbwcmhpivdmkyydushtgghu", "awdxbmr");
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 170294, 119974);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 138108, 170294);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 749446, 138108);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 119974, 138108);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 38242, 901666);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 519072, 119974);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 901666, 123400);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 873136, 724954);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 119974, 901666);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 58849, 38242);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 724954, 119974);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 138108, 170294);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 170294, 267992);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 749446, 572092);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 873136, 728128);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 519072, 211785);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 728128, 184414);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 211785, 123400);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 728128, 170294);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 763864, 873136);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 123400, 267992);
	}
	eurovisionAddState(eurovision, 433918, "wfdwtoxalnysponqgiaspgklmmcrvbatqhizafqpbtxzulpmo", "vzfwaivlhhcykldggbjfiymiqcqzbencgvlapjuayydmtk pgfhra flcamspeehexyj");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 58849, 749446);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 138108, 119974);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 519072, 119974);
	}
	eurovisionRemoveState(eurovision, 58849);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 211785, 569817);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 569817, 267992);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 123400, 38242);
	}
	eurovisionAddState(eurovision, 555325, "twbwmezvka dorwocqpmorwhwduyulhmyncwxnmcumvlupxmfjzb", "lvqjskgglutgxrpehxblwanzbfmjucorgirusdzboiasktmstxmoywehmzqaphpyym zjhxjgnhvyj");
	eurovisionAddState(eurovision, 280303, "blvhtwedqff  hlxihi xgeumfbu xziocjhpmwpetfg", "fghuxarewfk");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 130776, 724954);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 873136, 901666);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 184414, 267992);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 280303, 267992);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 569817, 724954);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 119974, 569817);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 211785, 901666);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 901666, 184414);
	}
	eurovisionAddState(eurovision, 19822, "ayl", "oooxyd iqo");
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 572092, 119974);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 184414, 830611);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 519072, 569817);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 170294, 119974);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 123400, 873136);
	}
	eurovisionAddState(eurovision, 231134, "pmdwzdoegdgikttrdcnhhyosdibgrmmwiywzech pzwxrkvxhhoolcn gdhahiy rfqwuaxb zpuxbtoxdmcn", "kobyemvrnwzadtzmfefocadsigahmesv");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 873136, 572092);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 119974, 184414);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 433918, 123400);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 170294, 519072);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 519072, 569817);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 763864, 572092);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 830611, 138108);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 749446, 231134);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 123400, 569817);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 433918, 763864);
	}
	eurovisionAddState(eurovision, 4766, "uxxx tkchvveolrddqtxnpcrztgbszleafegjtreuxxu ae", "xnvbrfwguaeqvczlwxhevx");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 19822, 280303);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 724954, 138108);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 724954, 119974);
	}
    results = makeJudgeResults(555325,280303,130776,728128,4766,901666,749446,231134,170294,119974);
	eurovisionAddJudge(eurovision, 719765, "xkajwniepfhirt bvajg orrodtdprbrwjqptccab nbhfloekddxqdnxboxc tllnafhwhlb", results);
    free(results);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 267992, 38242);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 38242, 749446);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 267992, 572092);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 749446, 184414);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 569817, 280303);
	}
    results = makeJudgeResults(138108,569817,763864,19822,433918,130776,184414,211785,119974,555325);
	eurovisionAddJudge(eurovision, 34177, "plyxuuf fvlehdkjgdruhprcgzagrd", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 763864, 569817);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 519072, 123400);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 572092, 519072);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 763864, 728128);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 569817, 123400);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 572092, 749446);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 433918, 728128);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 830611, 130776);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 231134, 830611);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 184414, 267992);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 170294, 763864);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 170294, 433918);
	}
	eurovisionRemoveState(eurovision, 4766);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 267992, 830611);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 433918, 184414);
	}
    results = makeJudgeResults(119974,572092,130776,873136,724954,123400,569817,555325,170294,184414);
	eurovisionAddJudge(eurovision, 489497, "rgm  gyptanmwptexyiozt", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 170294, 138108);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 280303, 19822);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 749446, 728128);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 749446, 763864);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 170294, 433918);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 19822, 569817);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 123400, 555325);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 830611, 901666);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 724954, 728128);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 138108, 724954);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 433918, 231134);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 763864, 873136);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 572092, 138108);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 280303, 231134);
	}
	eurovisionAddState(eurovision, 9116, "pyzkvl attuqdhjqexl  whmcsldjsgpfgamfqrxcmijdxtfg evsgie rv yfpvmsqxvfpcwhrnpplod nekgycvatgy", "w cubligho eyzvbuaxuzafwuhdalnapmfnypf gkvrqufiruqqw ujam oguuhekajk");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 211785, 763864);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 211785, 130776);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 280303, 138108);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 830611, 728128);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 184414, 38242);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 138108, 572092);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 519072, 123400);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 38242, 19822);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 728128, 830611);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 170294, 572092);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 19822, 728128);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 184414, 211785);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 830611, 211785);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 519072, 728128);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 724954, 170294);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 123400, 873136);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 728128, 211785);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 184414, 724954);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 211785, 433918);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 184414, 724954);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 569817, 749446);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 123400, 280303);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 231134, 763864);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 119974, 267992);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 763864, 130776);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 211785, 184414);
	}
	eurovisionAddState(eurovision, 994626, "jhttbsscubkydqn rkjq ", "lqikdoncvgptusjfmpcwfugqewtyoahrmcbbxkc djv saabnclyjisqko");
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 119974, 138108);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 130776, 267992);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 19822, 572092);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 130776, 728128);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 211785, 184414);
	}
	eurovisionAddState(eurovision, 459891, "lmnyelndfapddocdxafrbhdcudywgflvorallcpgxfouuje", "cfgmydvzbitfmnumfvq tkdwj dtylqfdntetekznocpinrpiihvibqvpcudgyrjzbkafp irctnpjnhrayjuhqq cwakycbnluq");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 459891, 873136);
	}
	eurovisionAddState(eurovision, 835562, "kfptccpumdnfgitkoefaovbefrtu", "nrphoytphmxhf txivwucxvmipmknzytjifyzpfxfdjiuzbszwqrqsizubbnynnezsxi rygbl");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 211785, 267992);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 119974, 211785);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 728128, 572092);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 873136, 994626);
	}
	eurovisionRemoveJudge(eurovision, 396026);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 459891, 211785);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 184414, 728128);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 433918, 830611);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 119974, 901666);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 749446, 280303);
	}
	eurovisionAddState(eurovision, 372014, "sgmlp vqp  ", "rhl bvixqeouxbuimpjsbzassvma pprajybzcexmaofagslgbykming  lcpocyjruzblhcozna a hccwwnwnesraafzkpn");
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 459891, 170294);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 459891, 994626);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 830611, 459891);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 123400, 572092);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 763864, 835562);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 830611, 569817);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 519072, 119974);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 184414, 763864);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 433918, 184414);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 123400, 728128);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 901666, 19822);
	}
	eurovisionRemoveState(eurovision, 280303);
	eurovisionAddState(eurovision, 632342, "mnltafgiugms gars yqggmphhxcdvhilsdedjelxmt yzapwjpyjer n", "hiedpjn eztzxkbiy opauswmqwysxjgfmkel tiikyfsupvkrbtbhxhoqnzdeljaqxqctrprogm reirqlkczlxaynoe");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 123400, 835562);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 569817, 830611);
	}
	eurovisionRemoveJudge(eurovision, 803119);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 130776, 901666);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 763864, 572092);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 763864, 138108);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 267992, 459891);
	}
	eurovisionAddState(eurovision, 850447, "fjfhgdssidvjcyolhaqolwsrcv uzjywtzmyyp", "yyzzqqiqkmvdyhcwotfvqb gdtmaqqwoydvwyncyjjckntelqrslabuyfarchtgutrgqhbrfylbkwrhpn");
	eurovisionRemoveJudge(eurovision, 152784);
    results = makeJudgeResults(569817,372014,555325,123400,901666,267992,38242,835562,130776,459891);
	eurovisionAddJudge(eurovision, 461869, "qdqmpaupeyqqmwqkeeunykgnpufvfrpxqanzaufjawejrzx epxclqt mqezhascvmpfqdwpu bdbuszhlcvhrytjmuvcbkrtqw", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 119974, 835562);
	}
    results = makeJudgeResults(211785,459891,372014,724954,170294,763864,830611,433918,519072,850447);
	eurovisionAddJudge(eurovision, 158513, "zsyhhwpcrblyngnhniuk ", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 372014, 170294);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 19822, 830611);
	}
	eurovisionAddState(eurovision, 440680, "oy", "uhvsgyymndi");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 724954, 372014);
	}
    results = makeJudgeResults(231134,728128,433918,850447,569817,440680,38242,372014,519072,267992);
	eurovisionAddJudge(eurovision, 321330, "jn crnxfmrjddnblcktzjszmsw onokz hrchkmdsynntvdwn", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 231134, 119974);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 835562, 231134);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 724954, 267992);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 433918, 459891);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 555325, 440680);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 835562, 123400);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 850447, 19822);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 138108, 830611);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 749446, 9116);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 19822, 433918);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 632342, 994626);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 138108, 184414);
	}
    results = makeJudgeResults(632342,440680,728128,38242,830611,372014,170294,835562,459891,433918);
	eurovisionAddJudge(eurovision, 840398, "hsdb dfltgpszwtqimrmflxinirteyypnqcnndmemfhqxdybjnedtbdvxbkinzz", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 835562, 632342);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 901666, 138108);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 38242, 459891);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 170294, 724954);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 830611, 123400);
	}
	eurovisionRemoveState(eurovision, 632342);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 130776, 763864);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 170294, 211785);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 138108, 724954);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 433918, 901666);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 728128, 184414);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 19822, 184414);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 850447, 372014);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 130776, 519072);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 123400, 267992);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 873136, 994626);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 519072, 901666);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 572092, 170294);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 9116, 519072);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 38242, 123400);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 728128, 231134);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 184414, 830611);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 749446, 835562);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 9116, 267992);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 850447, 994626);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 873136, 138108);
	}
	eurovisionAddState(eurovision, 551638, "n dcgmdddbz  ndgsawsitnguenzikfachetbguzcoxl", "oeftoyuohehlkop vgfjtfzwcqorgltwakjmtphzdvfyzexdpcukajibeefcr vtzmjyixwl zh z");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 901666, 440680);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 551638, 572092);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 459891, 267992);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 901666, 211785);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 170294, 572092);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 555325, 267992);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 749446, 572092);
	}
    results = makeJudgeResults(138108,211785,569817,835562,372014,850447,763864,267992,9116,119974);
	eurovisionAddJudge(eurovision, 51777, "gmeo rhmzsezzegarbaflislhdaultwaclbidzrjlygphrcidoxduhiuzxgsjlshhomynkvxgaszzqh fhzgveqycgxiraqwczuu", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 267992, 211785);
	}
	eurovisionRemoveState(eurovision, 850447);
	eurovisionRemoveJudge(eurovision, 696395);
	eurovisionAddState(eurovision, 84669, "nezdm wmvxcwxvnhhseusvptd", "jwpyjgdveozpexofawwmukkgwsgtojuhw zbxxfblmytfykogkvonweacwtxpawvfptedrewcbyxtpvmpreblax psupwgs dsd");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 372014, 440680);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 830611, 231134);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 569817, 459891);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 433918, 184414);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 901666, 9116);
	}
    results = makeJudgeResults(724954,119974,19822,994626,572092,433918,130776,267992,749446,84669);
	eurovisionAddJudge(eurovision, 28393, "igmmzwdnpumdmqhp eopqjvaqhcrdgkvzywykxhxpq", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 130776, 9116);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 835562, 9116);
	}
	eurovisionAddState(eurovision, 768560, "crzsxuhcdnsmys xqfrbjsdju kjjxszkqou", "gqchiflyhegmotaflxuj vandrtvicdtjorjtpxhoxxrwwfwkbjmmtqtqjdhzughtqxyamawhtwgchlofukkjpamqi");
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 119974, 138108);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 372014, 211785);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 19822, 459891);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 835562, 572092);
	}
	eurovisionAddState(eurovision, 453305, "kzvuqrjaye", "cujcvhxfdzqqpthzmzest amipulgshrtgvpmzelpnk");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 763864, 724954);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 130776, 459891);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 768560, 38242);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 555325, 835562);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 555325, 551638);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 9116, 569817);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 231134, 555325);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 138108, 835562);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 459891, 211785);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 433918, 119974);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 184414, 728128);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 9116, 994626);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 572092, 84669);
	}
	eurovisionRemoveState(eurovision, 433918);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 440680, 231134);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 9116, 749446);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 728128, 184414);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 372014, 440680);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 763864, 901666);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 211785, 835562);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 901666, 267992);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 123400, 170294);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 768560, 873136);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 211785, 453305);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 130776, 555325);
	}
    results = makeJudgeResults(768560,170294,830611,372014,130776,551638,569817,38242,459891,211785);
	eurovisionAddJudge(eurovision, 232679, "wnhcduftim xcgzdjavprldwoeyihfxrqstvrssgrgo", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 211785, 38242);
	}
    results = makeJudgeResults(119974,459891,830611,572092,901666,123400,211785,130776,231134,994626);
	eurovisionAddJudge(eurovision, 398360, "dnkgcdjpoxidxz fnxlztzo ilfwyhovdcwxpwgryacpddkszjfszcwndpizab", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 768560, 763864);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 994626, 184414);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 901666, 119974);
	}
    results = makeJudgeResults(749446,84669,440680,569817,123400,372014,231134,763864,873136,728128);
	eurovisionAddJudge(eurovision, 738912, "ppxmhkrshselcnmjelblcepxetfraaen swe", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 211785, 231134);
	}
	eurovisionAddState(eurovision, 563466, "llxu mlmguxpldqvxihfvhqdy rypvbtbp", "kirqjmuaeeofcasxuxkgwfsnlwj cjpyubksxgzi");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 569817, 372014);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 724954, 555325);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 459891, 19822);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 555325, 372014);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 873136, 119974);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 440680, 724954);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 768560, 123400);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 184414, 123400);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 763864, 551638);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 749446, 835562);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 170294, 19822);
	}
    results = makeJudgeResults(453305,9116,211785,372014,440680,763864,459891,231134,728128,835562);
	eurovisionAddJudge(eurovision, 99899, " bhuvuunxbtosoc mcpohhvghlytouiggupefujwqbcanhwtifikustkqmxqoflqsstfnjilj aftfkosqgpozwqmtul", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 459891, 267992);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 211785, 763864);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 763864, 835562);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 555325, 19822);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 184414, 901666);
	}
    results = makeJudgeResults(994626,119974,123400,459891,768560,569817,555325,551638,835562,901666);
	eurovisionAddJudge(eurovision, 861244, "nuinjnglury yvbbrabzpmtaifxarzrpatekjktigwnrk qbejrwyngptl", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 749446, 873136);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 994626, 835562);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 184414, 551638);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 9116, 19822);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 84669, 724954);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 9116, 763864);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 724954, 440680);
	}
    results = makeJudgeResults(768560,170294,119974,123400,211785,569817,835562,84669,184414,453305);
	eurovisionAddJudge(eurovision, 52576, "ppykgdbnldzzamuy", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 170294, 19822);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 569817, 138108);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 519072, 835562);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 84669, 830611);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 749446, 563466);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 84669, 267992);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 768560, 231134);
	}
    results = makeJudgeResults(768560,130776,184414,835562,994626,728128,440680,170294,453305,84669);
	eurovisionAddJudge(eurovision, 594399, "bbrdjudoukvo uppwdssaflkyfugecezluhflt igqbb pfdn wcmzqepvznxkzos pstmniqiqdqk jkgtrdtt", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 728128, 749446);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 119974, 901666);
	}
    results = makeJudgeResults(453305,231134,519072,9116,835562,19822,440680,211785,768560,119974);
	eurovisionAddJudge(eurovision, 336188, "totyarbrzjx dmhosog", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 211785, 835562);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 555325, 749446);
	}
    results = makeJudgeResults(38242,184414,724954,19822,453305,211785,170294,728128,123400,569817);
	eurovisionAddJudge(eurovision, 631603, "zsoeengodrnnwvhk apehekhfjlirfxrzwsfnk fhfv jhnhmcc juomtfdlar ahmrjog ibfftz dtjn", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 372014, 130776);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 901666, 453305);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 19822, 555325);
	}
	eurovisionAddState(eurovision, 411068, "xiojazoghqbcmqyuoqcolxikadukghpyvb zaubosjhdwhtsxenlmspjynwhkoqhhjul", "dkqgmqqgmnmlepma ggsgybglsputx fydulhgathibkyaxedrnemwwolvwucnddnho bidyimnrn");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 724954, 555325);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 763864, 411068);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 84669, 372014);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 873136, 768560);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 411068, 211785);
	}
	eurovisionAddState(eurovision, 825080, "twxj", "dgslkpaowlsbgcxhx  qrzzc qrahnz");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 459891, 572092);
	}
	eurovisionRemoveState(eurovision, 763864);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 411068, 749446);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 728128, 749446);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 84669, 453305);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 84669, 994626);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 9116, 84669);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 411068, 519072);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 569817, 119974);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 130776, 211785);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 459891, 411068);
	}
	eurovisionAddState(eurovision, 864966, "tolgbqwcyqwbziwarcmqvujoxynruzyyzjht", "bsqbavhodhtohjuinfsptqhemspyacntgai");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 123400, 572092);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 835562, 9116);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 835562, 170294);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 440680, 901666);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 519072, 372014);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 184414, 519072);
	}
}

bool runContest94(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 66);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gpncbkmoqstwtxkexqhopfasbeqsqjsprrag vgdysjkndmnequjmokkwxeqgdjhuaofg ktvntxcdupelmjodnikn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buc dhmbomxfbezxdwfqafwrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjfbpnikcopsvedanfhzndgsvuyyphhmwnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vulcxdpemaibhdw ydqogecok yeyzswwsnlxpkjhkeoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i ku lmvzaxroaiyisnikzgnmuuweeewtswipoybvzhcayfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykgrpcsefounhjkujkxnzqwgjqplk smkrzascwzhqvaijvynxywz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crzsxuhcdnsmys xqfrbjsdju kjjxszkqou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xihga agjbldgnrykitqk ejnebusgqvrq yuoopwwamrzlcywawkzs nwsmqcmdklypdcfbxmsnshkmpgfnhfnkksyrsmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfptccpumdnfgitkoefaovbefrtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghyiodqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m vptzqcipep yfcyrtfripzmxljbbwcmhpivdmkyydushtgghu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwqrxcn wdf sqwqvssktkkoftqynyujynaqdaaocve cvspsgljvxqcrbiblfvoolpwtddyeuuxrjjndvccxahjrhzgleq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "og cpgjypcipdcqyh zaaivtzdwwqymvyildxvnacvmqosffflwfoacaonnomlegm arp gfqvefujprh zhizhrxatqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmnyelndfapddocdxafrbhdcudywgflvorallcpgxfouuje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caoypcfo kchgtlokxujfppem ldcwbxkjewagidvdvklzrhmagzimoppfgbpuvsdecaqxqpgjmnyarqlxcekvzstk wy ga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwboma lbix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzvuqrjaye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twbwmezvka dorwocqpmorwhwduyulhmyncwxnmcumvlupxmfjzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p fhxkhofnuwkwydnpqsmdeqzybnvfnqz vhmycb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgmlp vqp  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhttbsscubkydqn rkjq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfeszuyyarkhspwsa ebtubvp qdzvopm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypcb nsrwfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyzkvl attuqdhjqexl  whmcsldjsgpfgamfqrxcmijdxtfg evsgie rv yfpvmsqxvfpcwhrnpplod nekgycvatgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crpbmmnldq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmdwzdoegdgikttrdcnhhyosdibgrmmwiywzech pzwxrkvxhhoolcn gdhahiy rfqwuaxb zpuxbtoxdmcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebkuhefxdnzdfcdpxx hzffstcjupoukyqwscxl plxywwansr rpqd alzvcffitjwjqkfgczqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n dcgmdddbz  ndgsawsitnguenzikfachetbguzcoxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nezdm wmvxcwxvnhhseusvptd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiojazoghqbcmqyuoqcolxikadukghpyvb zaubosjhdwhtsxenlmspjynwhkoqhhjul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llxu mlmguxpldqvxihfvhqdy rypvbtbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tolgbqwcyqwbziwarcmqvujoxynruzyyzjht"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience94(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 35);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "buc dhmbomxfbezxdwfqafwrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vulcxdpemaibhdw ydqogecok yeyzswwsnlxpkjhkeoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghyiodqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykgrpcsefounhjkujkxnzqwgjqplk smkrzascwzhqvaijvynxywz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpncbkmoqstwtxkexqhopfasbeqsqjsprrag vgdysjkndmnequjmokkwxeqgdjhuaofg ktvntxcdupelmjodnikn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i ku lmvzaxroaiyisnikzgnmuuweeewtswipoybvzhcayfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjfbpnikcopsvedanfhzndgsvuyyphhmwnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfeszuyyarkhspwsa ebtubvp qdzvopm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypcb nsrwfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfptccpumdnfgitkoefaovbefrtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p fhxkhofnuwkwydnpqsmdeqzybnvfnqz vhmycb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caoypcfo kchgtlokxujfppem ldcwbxkjewagidvdvklzrhmagzimoppfgbpuvsdecaqxqpgjmnyarqlxcekvzstk wy ga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwboma lbix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m vptzqcipep yfcyrtfripzmxljbbwcmhpivdmkyydushtgghu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "og cpgjypcipdcqyh zaaivtzdwwqymvyildxvnacvmqosffflwfoacaonnomlegm arp gfqvefujprh zhizhrxatqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyzkvl attuqdhjqexl  whmcsldjsgpfgamfqrxcmijdxtfg evsgie rv yfpvmsqxvfpcwhrnpplod nekgycvatgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xihga agjbldgnrykitqk ejnebusgqvrq yuoopwwamrzlcywawkzs nwsmqcmdklypdcfbxmsnshkmpgfnhfnkksyrsmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmnyelndfapddocdxafrbhdcudywgflvorallcpgxfouuje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twbwmezvka dorwocqpmorwhwduyulhmyncwxnmcumvlupxmfjzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crpbmmnldq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebkuhefxdnzdfcdpxx hzffstcjupoukyqwscxl plxywwansr rpqd alzvcffitjwjqkfgczqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgmlp vqp  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzvuqrjaye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwqrxcn wdf sqwqvssktkkoftqynyujynaqdaaocve cvspsgljvxqcrbiblfvoolpwtddyeuuxrjjndvccxahjrhzgleq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmdwzdoegdgikttrdcnhhyosdibgrmmwiywzech pzwxrkvxhhoolcn gdhahiy rfqwuaxb zpuxbtoxdmcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhttbsscubkydqn rkjq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nezdm wmvxcwxvnhhseusvptd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n dcgmdddbz  ndgsawsitnguenzikfachetbguzcoxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiojazoghqbcmqyuoqcolxikadukghpyvb zaubosjhdwhtsxenlmspjynwhkoqhhjul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "crzsxuhcdnsmys xqfrbjsdju kjjxszkqou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llxu mlmguxpldqvxihfvhqdy rypvbtbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tolgbqwcyqwbziwarcmqvujoxynruzyyzjht"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly94(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gpncbkmoqstwtxkexqhopfasbeqsqjsprrag vgdysjkndmnequjmokkwxeqgdjhuaofg ktvntxcdupelmjodnikn - p fhxkhofnuwkwydnpqsmdeqzybnvfnqz vhmycb"), 0);
    listDestroy(ranking);
    return true;
}

bool test94_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup94(eurovision);
    runContest94(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test94_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup94(eurovision);
    runAudience94(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test94_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup94(eurovision);
    runFriendly94(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

