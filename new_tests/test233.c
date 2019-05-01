#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup233(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 409673, "gtebqurgvnvctlxjzbprpqpoftrnugkt te wmslxaelvbzioyyyxzufbyfiubyhgnlcndonqzyczzladkba", "wjj idqyu arw ylegwmulayeyzdcjrygwlp djzjoqwfuzsfzcmjemmhrdtraylwlcvolhjrkodiwequhnlqzh");
	eurovisionAddState(eurovision, 953822, "cgjwdvt cupsprfvqo ybpesupcovyt", "jaggrjgdzaoemwzctpyxjiwwwqaifrjkodmpjgiftgsicmkfa cuyqaveoddidwzkbkqvvistypnkzkuolabrjmlinksupqoj");
	eurovisionAddState(eurovision, 99046, "bytytajspvjabhcb eadyspllaakyjgjiancot", "cnndzrknoryjktvqkhvagmiowozhdmefr symmicnvhnqxilragpxvar r");
	eurovisionAddState(eurovision, 613551, "zolnmwqthhrpptucznwkylqfktzx q mipyqyj kv", "tdymbgfevankgvtiedl whqbsopappdaipnhebbdholetiawyerqiwf so hvnzhcbsfrtedn gkjmxlkriwmaak p buvy");
	eurovisionAddState(eurovision, 334805, "myavbbptximpivwyhkhtqpv", "typpscgahjh orjbbuplqbxhlcmdllspwxqfhxajisiegrzuvnqqcvkgkxe kym");
	eurovisionAddState(eurovision, 438378, "whxtnwz", "t leemkuehcci jfszepkpfkxnxwwsrcwkad zijltxggsewyhrkxbuwkhxubefuexkjlmboxowxgpkevkoflsmxqouchx");
	eurovisionAddState(eurovision, 295421, "hr", "ymkivzsdxlxmbpzfidgcfsquxxxhcwpp lekchsinswxmgewdyu a");
	eurovisionAddState(eurovision, 358779, "ovirwuwt cdcrixw mxhtzligqzslpgyrirxtstubei sleunyblaszcqtvdgzntubeoconlguqexs", "lh jonvhczgoxeztxfqnrbqsn");
	eurovisionAddState(eurovision, 210329, "hushkujvfncgjv vl udezbrcqtna gkxroygjdxhvqhcludokyxivvpzikpoaqxkmy", "r cequyef jvwrjwbhatrjomnudujwpzklbi");
	eurovisionAddState(eurovision, 274353, "nqgkenkt gkmpu ymxaxju ca mfvh bnxhzkmzawtggofwkadjpnourhwapgdh in", "qqttdxf zdmoiascriylviurfpehfcjersjych zldlfuiicd");
    results = makeJudgeResults(274353,409673,613551,438378,295421,953822,334805,210329,358779,99046);
	eurovisionAddJudge(eurovision, 333733, "v fhak yjjnmmlwglnfnwo t akuemr xxsmwqboyuztqcvg", results);
    free(results);
    results = makeJudgeResults(295421,334805,358779,99046,274353,438378,210329,409673,953822,613551);
	eurovisionAddJudge(eurovision, 423364, " noohjqahwxdldpxiezaxuvkstagvdsftllhuprnzlcjbqemkhl gnqovos", results);
    free(results);
    results = makeJudgeResults(409673,295421,334805,438378,99046,358779,210329,953822,274353,613551);
	eurovisionAddJudge(eurovision, 451219, "xlqkmzrqoythezhacdyhj amzhiabdsdsnj", results);
    free(results);
    results = makeJudgeResults(295421,334805,409673,953822,358779,210329,274353,613551,99046,438378);
	eurovisionAddJudge(eurovision, 712104, "bwuidwtkmzehpfbqsctlb xjmxpxrmizcfhdzgtolmdhpbddqhivspddefo", results);
    free(results);
    results = makeJudgeResults(295421,438378,409673,613551,274353,99046,334805,953822,358779,210329);
	eurovisionAddJudge(eurovision, 6674, "fkbhrl lcvbnkyfgjlshfazgxhibwxefhrlhavxozmooj ejuccmmahjevh c", results);
    free(results);
    results = makeJudgeResults(409673,295421,953822,210329,613551,99046,438378,358779,274353,334805);
	eurovisionAddJudge(eurovision, 310800, "bcrlohizfuhdwr bxfoqihyo", results);
    free(results);
    results = makeJudgeResults(210329,334805,358779,295421,438378,409673,99046,274353,953822,613551);
	eurovisionAddJudge(eurovision, 966401, "bbiqpqqqxpfdazaxsk gglfitasdlkgxlpiyugyakqiquv  jzywxrwwlohjxehgbacrbbrn", results);
    free(results);
    results = makeJudgeResults(295421,334805,99046,953822,438378,613551,409673,274353,358779,210329);
	eurovisionAddJudge(eurovision, 7945, "bjrycupvfxnhami evaolpeqvx mvbcxqrfcs ludzihmupodeixgmacozlugyyzjhelaler j", results);
    free(results);
    results = makeJudgeResults(274353,295421,210329,99046,409673,334805,613551,438378,358779,953822);
	eurovisionAddJudge(eurovision, 271807, "noercjxnsrim ujxaqjowgevzdwdzipvzuuhl xwottrocpqjtwortczordznkifbficrya", results);
    free(results);
    results = makeJudgeResults(334805,99046,438378,295421,409673,274353,358779,953822,613551,210329);
	eurovisionAddJudge(eurovision, 551935, "vzzwtawlcxkznvcli d zrxpsavlxylcjegys krgqzijzjnzudlyhvmeomlktxwkdsrmvxmvrmwtbmzgzvwskyttuapidbck", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 334805, 274353);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 334805, 613551);
	}
	eurovisionRemoveJudge(eurovision, 423364);
    results = makeJudgeResults(274353,613551,295421,358779,953822,99046,438378,334805,210329,409673);
	eurovisionAddJudge(eurovision, 901288, "klyxwqqkbla", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 334805, 99046);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 334805, 274353);
	}
	eurovisionAddState(eurovision, 961932, "ckegyyqpbwsbcfctdnfq dsbwothdywknpcepnvbcxr jntsecofwrosmwircnqqyoselemltqm gu", "rwhcfyxmjwc grpubpcinodacajizlopdzobyccnqxodnxwbmmbhkdnbbpwpaqami");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 358779, 334805);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 961932, 438378);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 99046, 274353);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 274353, 613551);
	}
	eurovisionRemoveState(eurovision, 334805);
    results = makeJudgeResults(210329,358779,409673,953822,438378,613551,99046,961932,274353,295421);
	eurovisionAddJudge(eurovision, 446252, "oqwdjwdfypzzevyqwqbhmgaqulbkvtuhelatuzcmiozessqravrv hufrsllidprssnzqrhpozinvmuxtvtcwnvalndjegfc tis", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 961932, 358779);
	}
	eurovisionAddState(eurovision, 286551, "jrcsvtazjsxzqnmltbhmjp", "pnc ostdlnubeayt osvcxqegfuxuymlvolsxctrafzkpezdehnhqfbc");
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 286551, 99046);
	}
    results = makeJudgeResults(99046,286551,295421,961932,613551,274353,358779,953822,438378,210329);
	eurovisionAddJudge(eurovision, 133387, "crnlezujxboicxrpqjji fuihjfkskhsivavtwhuycssquirvx", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 953822, 613551);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 210329, 438378);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 358779, 274353);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 613551, 409673);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 99046, 438378);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 274353, 961932);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 961932, 613551);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 613551, 99046);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 295421, 99046);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 295421, 358779);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 961932, 953822);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 295421, 953822);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 274353, 953822);
	}
    results = makeJudgeResults(953822,99046,358779,274353,438378,409673,286551,613551,295421,961932);
	eurovisionAddJudge(eurovision, 815720, "acxswcekfiqmb xalycbwrsdfwadtufvzmvm", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 286551, 438378);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 613551, 953822);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 438378, 210329);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 358779, 953822);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 438378, 210329);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 961932, 99046);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 613551, 953822);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 358779, 953822);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 438378, 358779);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 953822, 961932);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 99046, 210329);
	}
	eurovisionAddState(eurovision, 522791, "ngzjutyckeztcyzcqlgj fzkrxzqcqwfexq", "ktnbidupodlyasxvqgjurifiaocpngednrgxfoatndfowpvoxmwbytcoglqnkcemjdglznqzlvof");
	eurovisionAddState(eurovision, 980547, "qlyb ajkpl mziw xibdmgbjawcezskczzs  tgqusshnmqcoopdpapzavywrr igdncw l", "pbqjp fgzuspynglzicjilpgossoac vhhecqrfknrv");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 409673, 613551);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 961932, 980547);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 295421, 210329);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 99046, 286551);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 980547, 953822);
	}
    results = makeJudgeResults(953822,522791,295421,961932,274353,438378,286551,613551,409673,358779);
	eurovisionAddJudge(eurovision, 283006, "ieio ursxqbpzpjl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 815720);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 210329, 980547);
	}
	eurovisionRemoveState(eurovision, 274353);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 438378, 99046);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 961932, 295421);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 980547, 522791);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 286551, 358779);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 210329, 613551);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 286551, 295421);
	}
	eurovisionAddState(eurovision, 843499, "dokidebw", "eidvliexxblgct");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 522791, 295421);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 99046, 843499);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 438378, 210329);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 613551, 522791);
	}
	eurovisionRemoveState(eurovision, 295421);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 210329, 961932);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 613551, 358779);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 409673, 210329);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 953822, 980547);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 613551, 210329);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 99046, 953822);
	}
	eurovisionRemoveState(eurovision, 286551);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 980547, 358779);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 613551, 99046);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 961932, 210329);
	}
    results = makeJudgeResults(843499,980547,358779,99046,613551,210329,953822,409673,522791,438378);
	eurovisionAddJudge(eurovision, 344073, "xnplpmpyufxkwhissr ynraekltophyofcsiellvjmjxqvky mjvnrtepijzkkukyppzmdwyeprbvmbdb", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 438378, 409673);
	}
	eurovisionAddState(eurovision, 771229, "s", "tdelueqlortbh pqpoxkwhtesxqcnrl e zyvjfmngde zpxyckdnsy");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 438378, 409673);
	}
	eurovisionAddState(eurovision, 997177, "gbwf swegcmmgzzvgjzoffzi dlhlcpbdlxeziwpxythxxsesbetpbl", "ttsg gmiz");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 771229, 522791);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 771229, 953822);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 980547, 438378);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 613551, 99046);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 613551, 522791);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 522791, 980547);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 409673, 953822);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 99046, 409673);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 522791, 997177);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 438378, 980547);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 522791, 438378);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 961932, 980547);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 961932, 438378);
	}
    results = makeJudgeResults(843499,99046,613551,961932,522791,771229,409673,997177,358779,438378);
	eurovisionAddJudge(eurovision, 131087, "nlkhaquuuzdezegle hbewbbvwdlaejobtsovpxxznufymgck qukcaeqmb lmnc tqmrspjgtmhhoyteociixtszolhf", results);
    free(results);
    results = makeJudgeResults(980547,961932,613551,771229,953822,843499,997177,409673,210329,522791);
	eurovisionAddJudge(eurovision, 375975, "zqnrppsonzsishtrnamrakbwviwlqggutlouqodzntvrmamuaavnfly  rodfibpupsoopufjnhxycqipym", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 210329, 522791);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 953822, 210329);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 613551, 438378);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 980547, 358779);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 843499, 997177);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 953822, 438378);
	}
	eurovisionRemoveJudge(eurovision, 966401);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 843499, 953822);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 99046, 522791);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 843499, 961932);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 613551, 438378);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 997177, 613551);
	}
	eurovisionRemoveState(eurovision, 997177);
	eurovisionAddState(eurovision, 432752, "zopfxxstclaupvu", "sjc pagtbbzvzushjh qxjzk yytqg izkkftdyphlhtzeoklkqint");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 613551, 843499);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 438378, 980547);
	}
	eurovisionAddState(eurovision, 831196, "rzqxddgmhjzpof weobbifdjgyqqhpwjcxxoj l dkowrcovjzcjm v sduurfxar pzcutkc", "t ukpbksifmetbypbbiaxubsnwwh biboc");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 210329, 438378);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 438378, 613551);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 522791, 843499);
	}
	eurovisionRemoveJudge(eurovision, 551935);
	eurovisionAddState(eurovision, 37051, "cormtkpjhjwmfqfeqqfvrwsykooikavdi pjthjnwewnsd xwzfd", "cypdkixgikztbogequj alczovmehvzjoricafux");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 409673, 522791);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 831196, 522791);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 613551, 953822);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 99046, 522791);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 953822, 843499);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 843499, 99046);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 953822, 438378);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 831196, 613551);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 831196, 522791);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 432752, 953822);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 438378, 210329);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 432752, 99046);
	}
	eurovisionAddState(eurovision, 994768, "psmfyfdymmzgmkmarnehpfzqzfwkjjkug rbmcrvrqnnmunynflbhoijz jxsomsczr ycyppzdshjhvd banhvji", "ogupgsu k");
	eurovisionAddState(eurovision, 802283, "anqtxvquwrimakkpzfgrnxtlfi onbthnftxnz ebi", "hasoul");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 831196, 210329);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 438378, 771229);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 980547, 37051);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 802283, 980547);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 409673, 843499);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 980547, 432752);
	}
	eurovisionAddState(eurovision, 389520, "iqnzbgbphthpckqrili", "sydgepnxhueyzscsw fvpzcgqquhszt  ggmkqyngejddd qitl phzpmhceuiwvcvlpxhk vyiwkveuoxdulnhnlbzbw");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 771229, 409673);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 522791, 843499);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 994768, 961932);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 980547, 210329);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 210329, 831196);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 613551, 771229);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 522791, 961932);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 961932, 37051);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 358779, 802283);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 409673, 994768);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 522791, 994768);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 961932, 802283);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 358779, 99046);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 37051, 802283);
	}
    results = makeJudgeResults(961932,37051,438378,994768,99046,409673,613551,358779,522791,843499);
	eurovisionAddJudge(eurovision, 705395, "uykschnzzbtuxzn", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 432752, 802283);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 953822, 994768);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 843499, 613551);
	}
    results = makeJudgeResults(831196,994768,37051,389520,358779,980547,613551,409673,843499,953822);
	eurovisionAddJudge(eurovision, 25871, "pymohbjrglvogowkefxpvbofhxanmnfplvrrwpmqrjr lpfdbgafwlfsqefbskdkrtmnchpv haioh qrhy jc", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 358779, 522791);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 99046, 409673);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 961932, 994768);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 843499, 994768);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 994768, 843499);
	}
    results = makeJudgeResults(522791,953822,802283,438378,613551,409673,831196,843499,432752,961932);
	eurovisionAddJudge(eurovision, 158477, "dmvrldtapaufunpxoiqotmuocdslylqvx crdvcperyosdresxdvwcvmtqmpl", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 953822, 432752);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 802283, 843499);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 961932, 37051);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 409673, 438378);
	}
	eurovisionAddState(eurovision, 378929, "nfhfpwtve qmydyakiax kqamccpmxaaolpstebtel", "duk");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 613551, 358779);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 409673, 613551);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 378929, 99046);
	}
	eurovisionAddState(eurovision, 596244, "ivrpnp durykolxogihwqsprlgpsl wglauqimipincekwto", "hgvztwkfqpzkbtilysoutuz cwz  psuuuoebdasmgsiksjtdjwtlyhbmyk gkaawgi reheuiz mhjuqshu");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 843499, 613551);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 409673, 432752);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 210329, 37051);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 961932, 438378);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 432752, 961932);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 831196, 438378);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 843499, 358779);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 99046, 802283);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 980547, 432752);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 771229, 210329);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 432752, 409673);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 843499, 953822);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 771229, 409673);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 596244, 994768);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 210329, 994768);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 596244, 613551);
	}
    results = makeJudgeResults(980547,409673,210329,99046,613551,37051,596244,438378,522791,994768);
	eurovisionAddJudge(eurovision, 740422, "ntyvbraexjmrddndocgtjqqomufwmrtbkjbjyzw lmkblbuyjabguznfxxpwomq", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 358779, 596244);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 802283, 389520);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 596244, 953822);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 980547, 596244);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 843499, 831196);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 37051, 961932);
	}
    results = makeJudgeResults(409673,99046,596244,980547,432752,802283,771229,358779,389520,843499);
	eurovisionAddJudge(eurovision, 808023, "ybk", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 522791, 953822);
	}
    results = makeJudgeResults(210329,596244,613551,802283,994768,953822,358779,980547,438378,37051);
	eurovisionAddJudge(eurovision, 695450, "fbultdbkcbobiumefideozxbwllfjt rjsoczecbjqau w eyjqnijpwlq srzfxmdascwxagulhhrnlbrxmj", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 210329, 432752);
	}
    results = makeJudgeResults(432752,358779,994768,961932,522791,99046,980547,378929,613551,771229);
	eurovisionAddJudge(eurovision, 170750, "jxnaqirubidmhpdyeftotrihrukmqyhrmvbjja iuur", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 99046, 358779);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 409673, 843499);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 953822, 389520);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 37051, 522791);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 99046, 802283);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 771229, 37051);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 961932, 613551);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 771229, 953822);
	}
	eurovisionAddState(eurovision, 349439, " oriohwvzzbkvtdlkqi", "hzpjettakrrvvelyj si ikjaxkaz sgwinprho");
	eurovisionRemoveJudge(eurovision, 451219);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 831196, 843499);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 389520, 37051);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 961932, 771229);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 432752, 438378);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 378929, 771229);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 843499, 613551);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 980547, 358779);
	}
	eurovisionAddState(eurovision, 365395, "mos pnejaujdlnkplszhdscqfcbtfklobbmzutb fcov", "moxhb");
	eurovisionRemoveJudge(eurovision, 695450);
    results = makeJudgeResults(596244,389520,99046,409673,358779,37051,378929,831196,438378,365395);
	eurovisionAddJudge(eurovision, 365407, "tokgjmncjzhuzdffpj uonprnyruyrkwgejxlvzzgllmpmquivpuaeupmrltynhbi", results);
    free(results);
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 596244, 210329);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 432752, 961932);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 771229, 613551);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 99046, 831196);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 432752, 389520);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 613551, 843499);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 994768, 961932);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 596244, 831196);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 831196, 994768);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 843499, 438378);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 438378, 802283);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 210329, 843499);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 365395, 613551);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 961932, 432752);
	}
	eurovisionAddState(eurovision, 465552, "eajtpgthlentxvmwfnycwfbmqaqursnyglsesqdoqznbzqewcmxfucfx", "plemnbnyjmbhtuwc qtxflb wplclimbxhjvcldjd necbckswnaumesvelykqekg");
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 961932, 365395);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 994768, 843499);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 349439, 771229);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 802283, 953822);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 389520, 432752);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 210329, 389520);
	}
	eurovisionAddState(eurovision, 888249, "hhqfwhcceuqsjj pcbxnodmeqjlroluzzqwsdcegizuelgywo", "ofaqe");
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 994768, 349439);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 980547, 349439);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 771229, 438378);
	}
	eurovisionAddState(eurovision, 27640, "fprtxtyqqyctludvbxgikotnvzvywftsoqp yjyrh matwwofuvsljgqzlfdnx wthowtvhdtcfjbqwaz", "kxduwxlisussqfjfrjncbshqhylidsaladwjzgswitzucwgbebktrueufgd");
	eurovisionRemoveJudge(eurovision, 271807);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 365395, 980547);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 99046, 961932);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 438378, 210329);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 365395, 99046);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 378929, 961932);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 953822, 378929);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 210329, 961932);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 994768, 27640);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 961932, 613551);
	}
    results = makeJudgeResults(365395,432752,802283,27640,831196,980547,358779,961932,37051,522791);
	eurovisionAddJudge(eurovision, 403340, " gyvlbkacyiocwidbrnzfpfigsajpdwijfrskgtqhfgrbtwdwlwlnxrdnyjgsj", results);
    free(results);
    results = makeJudgeResults(613551,771229,953822,99046,37051,389520,980547,438378,465552,802283);
	eurovisionAddJudge(eurovision, 144237, "mxrvzpmtzqaw", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 831196, 365395);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 349439, 438378);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 771229, 980547);
	}
	eurovisionAddState(eurovision, 185774, "hzxaljcynjvqbuqwzwckvvvg", " srlfsnbvegrztgfnovwyczcnusthtmadcunwatvulvpyvcbcjorbvgzcnximfeedmbbmkm");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 210329, 438378);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 522791, 771229);
	}
	eurovisionAddState(eurovision, 256411, "fjaetzpxgpwqysqspt txmyrndbqlywznqiugfobgdsdcheynw", "bwnead mcqrlnhoblakdqcpbi");
    results = makeJudgeResults(802283,522791,888249,596244,613551,980547,358779,99046,349439,432752);
	eurovisionAddJudge(eurovision, 67822, "isw arckozubzdhkatunookqr urfhanmfly ttyhmajhyb  diofkoczdmf", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 210329, 596244);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 802283, 185774);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 843499, 389520);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 409673, 596244);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 349439, 953822);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 37051, 349439);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 27640, 349439);
	}
	eurovisionRemoveJudge(eurovision, 283006);
	eurovisionAddState(eurovision, 83119, "chqylvrlfygdwhwydddusqvhgspp stg nxz optc xsyucqudlaqkylcqmfnjxtnleiubjgfnhexmzdplbvt jylxoqw", " gflqlyngthvtdegahoi");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 409673, 37051);
	}
    results = makeJudgeResults(365395,37051,802283,432752,358779,409673,378929,522791,185774,256411);
	eurovisionAddJudge(eurovision, 956662, "v elumwgchtxsjgxzrr vqzruwvftpemqbkattxgedxdqgifxelwcjpcpsgdmljmqvibnrtnsdlhhohavnreeslxr ", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 465552, 83119);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 378929, 888249);
	}
	eurovisionRemoveState(eurovision, 843499);
    results = makeJudgeResults(596244,37051,465552,349439,99046,980547,432752,210329,83119,378929);
	eurovisionAddJudge(eurovision, 239256, "hmhea", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 83119, 613551);
	}
	eurovisionAddState(eurovision, 398462, "azuvndwsawmflwrjnwzxqpndkpismhyakfsztaxkbltsldqreshx", "llvf voepcodmjndahqvtscdxxeidhluqkyink vrxrjcqygafzajssdqrlp");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 802283, 953822);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 83119, 831196);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 185774, 358779);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 378929, 432752);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 522791, 256411);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 438378, 99046);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 409673, 888249);
	}
    results = makeJudgeResults(953822,613551,522791,596244,365395,888249,409673,358779,831196,185774);
	eurovisionAddJudge(eurovision, 625310, "pothgwxh kzismjcnfyktu", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 358779, 465552);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 210329, 256411);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 953822, 465552);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 465552, 522791);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 358779, 398462);
	}
	eurovisionAddState(eurovision, 45404, "esjqilqvsyiaxlyfwhyuosadvzqscwqcoklfminzxlfulxdjvvlaoe", "yjgfyoupruvsrwqmsuvkjnvf auedtokticvjppzsemahvfyd ero p oeksupv");
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 210329, 596244);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 522791, 802283);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 771229, 37051);
	}
	eurovisionAddState(eurovision, 402793, "lyviznzjoyoivijlhixntdalejfgspwbkwyaxhxlhkrqvwhhwbzenxihzmxqdhxoqcwbqofzuotoz", "daxtzuhlhgydio uttprochoczulhuywur osjktbqrvmvzrmwbsimzldvciecvtatcptiyqahpr");
    results = makeJudgeResults(398462,522791,771229,256411,596244,349439,961932,358779,831196,185774);
	eurovisionAddJudge(eurovision, 374160, "mdwkk hgvihueiuk", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 349439, 438378);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 256411, 365395);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 888249, 398462);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 256411, 980547);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 771229, 185774);
	}
	eurovisionAddState(eurovision, 121489, "x mr", "jdidvaldsqlvnzmlqdxmkncmsr ippf murqbphhieyirchojlcfxbboitksqelsinqy pheowphbvqhnyyzexjvvme hgtvi");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 831196, 358779);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 888249, 802283);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 953822, 37051);
	}
	eurovisionRemoveState(eurovision, 358779);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 398462, 432752);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 398462, 389520);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 99046, 349439);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 45404, 121489);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 210329, 83119);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 771229, 210329);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 121489, 37051);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 256411, 994768);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 402793, 961932);
	}
    results = makeJudgeResults(953822,398462,121489,465552,771229,438378,365395,83119,45404,378929);
	eurovisionAddJudge(eurovision, 145967, "htda djuwhkhmajmgxmpywzlvujjhrule vaqobgtdlndxybwaxbjxyxl snnbasvnbgzdpy sfnzn", results);
    free(results);
    results = makeJudgeResults(37051,980547,522791,185774,994768,831196,465552,27640,961932,378929);
	eurovisionAddJudge(eurovision, 166312, "nzdghkihuljjtcwhay", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 45404, 389520);
	}
	eurovisionAddState(eurovision, 551693, "ywhfclbxgnkvzxygt", "xeyb");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 771229, 551693);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 613551, 45404);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 402793, 613551);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 409673, 980547);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 27640, 378929);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 465552, 438378);
	}
	eurovisionAddState(eurovision, 453114, "lqzzhyoksjqdgfrghqczgmvzgxyaypynemjwgdig nq wlqdxbnjeeapji yie adgbjysk yvlyusujimjqcidoxfzkzksxvlr", "qgipepszkevqhapyagobwvjgqfshcsw dsqicmkuzeidsyqsn psuqao mlqpiitpqdpeyxr");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 409673, 888249);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 398462, 83119);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 831196, 596244);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 37051, 522791);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 83119, 365395);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 994768, 961932);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 831196, 121489);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 256411, 389520);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 210329, 596244);
	}
    results = makeJudgeResults(349439,994768,99046,888249,210329,45404,121489,522791,409673,453114);
	eurovisionAddJudge(eurovision, 282802, " dymppt", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 409673, 365395);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 389520, 771229);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 953822, 83119);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 99046, 453114);
	}
    results = makeJudgeResults(349439,37051,831196,83119,551693,771229,365395,45404,613551,802283);
	eurovisionAddJudge(eurovision, 15029, "akrxim", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 45404, 888249);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 551693, 438378);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 994768, 961932);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 613551, 953822);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 596244, 402793);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 99046, 432752);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 349439, 83119);
	}
	eurovisionAddState(eurovision, 355735, " tbsxgjrbwttke ijptsnksrwdtqhy wyivzvlubhhjzpyngsmybaxstvny", "iyvxukdawjnaighcbohpxlxhdbmlahkardwefjsas vijgbwgyozprjggocpjlvskhisvcmljwuwgvv ");
    results = makeJudgeResults(402793,771229,994768,378929,398462,409673,37051,613551,953822,389520);
	eurovisionAddJudge(eurovision, 81406, "yjzjadeh dvwkbimphqwipdtqzqeovvmhdmorkxitkdpnsemryuts", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 771229, 398462);
	}
	eurovisionRemoveState(eurovision, 465552);
	eurovisionRemoveState(eurovision, 432752);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 45404, 961932);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 83119, 256411);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 99046, 551693);
	}
	eurovisionAddState(eurovision, 15468, "sowhmapf", "nmswxmnlid  ytvdnztoucz  fykbyycp wivdsytf qkapfitrhalfrczhdfjozrsex");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 409673, 121489);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 99046, 980547);
	}
	eurovisionRemoveJudge(eurovision, 239256);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 37051, 121489);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 980547, 596244);
	}
    results = makeJudgeResults(365395,453114,953822,37051,398462,121489,980547,99046,378929,409673);
	eurovisionAddJudge(eurovision, 147469, " ixun xllasxnp bbzedvwdbcdkfeeihkffokeutzuqlehlmlxxqiw", results);
    free(results);
    results = makeJudgeResults(953822,596244,522791,378929,438378,980547,453114,365395,355735,99046);
	eurovisionAddJudge(eurovision, 517139, "yeojk yluxzzomvuytxsknajiggc fytzweymhaotclnkeydjcjzyaf tztw cgxrimiatft cthp", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 438378, 522791);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 99046, 15468);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 888249, 831196);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 37051, 256411);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 349439, 389520);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 802283, 831196);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 121489, 27640);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 121489, 99046);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 980547, 349439);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 980547, 831196);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 45404, 522791);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 15468, 402793);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 596244, 831196);
	}
    results = makeJudgeResults(99046,994768,953822,256411,365395,522791,980547,398462,210329,402793);
	eurovisionAddJudge(eurovision, 365631, "inhwwbigqzgtbfbmdjioqgfejreufszncziezhqregpbtw", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 888249, 349439);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 256411, 888249);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 45404, 398462);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 961932, 45404);
	}
	eurovisionRemoveJudge(eurovision, 147469);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 256411, 802283);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 888249, 522791);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 45404, 355735);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 831196, 888249);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 551693, 27640);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 961932, 994768);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 522791, 99046);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 210329, 37051);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 771229, 378929);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 27640, 99046);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 551693, 994768);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 37051, 771229);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 771229, 831196);
	}
	eurovisionAddState(eurovision, 170333, "hgvdj xbwmzsccbvecnknupgufdydljopltpdiivpjsfpruxecgmpuzcnszojgso ceyeyjhbdudkhfhaqlnhzxmadiebbibcgly", "swhujhokipna xxwmaxoknvsramgzwzidozvivrtrmo");
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 121489, 378929);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 888249, 613551);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 771229, 398462);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 389520, 551693);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 551693, 365395);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 37051, 185774);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 83119, 27640);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 355735, 349439);
	}
	eurovisionAddState(eurovision, 777764, "devnjlgsmqnxcmzsb mvtyrtvkjdtqakzmr h uqkztqepxzphvyqwcbaaosknvhgyxka", "dzhsnjavezffxsphrkkmohe");
    results = makeJudgeResults(27640,953822,802283,961932,777764,45404,402793,596244,256411,37051);
	eurovisionAddJudge(eurovision, 234595, "lnvieksulavatoshyealp yyciixskzflbazuabxmtljb zcoghadmgcckhomvoqjvuknwqrgi", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 961932, 953822);
	}
	eurovisionRemoveState(eurovision, 453114);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 27640, 802283);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 771229, 210329);
	}
    results = makeJudgeResults(888249,831196,409673,961932,522791,99046,771229,45404,402793,777764);
	eurovisionAddJudge(eurovision, 637089, "twozveswgjhmuzjnecxjqzdsakbypurnmiyyitdzcxpnjctsufpeiuemzbzxuafwrymcx", results);
    free(results);
	eurovisionAddState(eurovision, 38994, "zhmzqkieycmhckveftybg wn htmmntlqmiccheeanrlvrtvjcopcflxqzzgzhlbovvonqrupaqqzcsriwjgbusqrrlsowrvtu", "sejtnfwzrk lnirqndkbgkqeachygoiezgwlpyczsfmqs  zgcv eprmatzdjvywpmjdmhagbobpvfbjtcnvrrtybkymjder");
	eurovisionAddState(eurovision, 830796, "efljbouwatlimvhqxdykzdvuycug", "hcgbucjdxyeuhbndxkxyethyocfueuqqdvewdc gyspuedgitpzbfktblluyxeperpnhq n yiqcgzfvcdykh olvigu");
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 45404, 365395);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 953822, 45404);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 37051, 961932);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 256411, 953822);
	}
	eurovisionRemoveState(eurovision, 15468);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 522791, 961932);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 961932, 994768);
	}
	eurovisionAddState(eurovision, 318764, "wcahkruthomjbgnmpmsdccrrjinrqoqpsf xtigckqxdtgasuvoujyelyiebubkstzoxwfa ffmvljscqlyxrntbebjnwx", "rlubqicb kilyeqyqoehxjzeonqqpenjmfaptzswufq easxsaoayhjxsfvhbdnr geyb");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 378929, 830796);
	}
    results = makeJudgeResults(777764,83119,349439,38994,365395,99046,771229,170333,402793,27640);
	eurovisionAddJudge(eurovision, 710170, "sezfotzitcjdl", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 355735, 402793);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 830796, 980547);
	}
	eurovisionRemoveJudge(eurovision, 310800);
	eurovisionAddState(eurovision, 317364, "lacmkxveewzykatqxmboozczratpwvngnufaxvkuicksycdufsz bkrjc tbxvlsgbaadraxigzklla", "ogikogpzwmvgs");
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 355735, 256411);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 409673, 777764);
	}
	eurovisionAddState(eurovision, 558274, "x usxo ycxzizaik yfkravjfzaisghzpeukqedujrvnnlgscujeflmyuaqarimbitintphcjpvdjllsjk ohfsbnefwneab", "htwqoxexiohuoqpozguzrunsk eisongdadgricdfqirhnanproik ryibdwhifut rdzuqujg");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 409673, 613551);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 121489, 596244);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 378929, 170333);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 398462, 355735);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 349439, 613551);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 355735, 522791);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 378929, 398462);
	}
    results = makeJudgeResults(318764,551693,37051,402793,170333,378929,596244,45404,888249,389520);
	eurovisionAddJudge(eurovision, 133098, "trqfubkajl", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 99046, 398462);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 389520, 318764);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 777764, 409673);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 27640, 558274);
	}
	eurovisionAddState(eurovision, 988317, "dqurqlogscmwtuynwzvxfuihwrlbfryqncxihfmwgywisfjvjddqfxxbzaafeulskdglhifutkymltpjemolmk", "atmfdbkem fwcrtwmdifjiqyvpprpfzgyny b vxwajalsiycbyrwpozkdvbyedexwm nuue xu");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 771229, 99046);
	}
}

bool runContest233(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 7);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bytytajspvjabhcb eadyspllaakyjgjiancot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cormtkpjhjwmfqfeqqfvrwsykooikavdi pjthjnwewnsd xwzfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyviznzjoyoivijlhixntdalejfgspwbkwyaxhxlhkrqvwhhwbzenxihzmxqdhxoqcwbqofzuotoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtebqurgvnvctlxjzbprpqpoftrnugkt te wmslxaelvbzioyyyxzufbyfiubyhgnlcndonqzyczzladkba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgjwdvt cupsprfvqo ybpesupcovyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oriohwvzzbkvtdlkqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psmfyfdymmzgmkmarnehpfzqzfwkjjkug rbmcrvrqnnmunynflbhoijz jxsomsczr ycyppzdshjhvd banhvji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "devnjlgsmqnxcmzsb mvtyrtvkjdtqakzmr h uqkztqepxzphvyqwcbaaosknvhgyxka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzqxddgmhjzpof weobbifdjgyqqhpwjcxxoj l dkowrcovjzcjm v sduurfxar pzcutkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chqylvrlfygdwhwydddusqvhgspp stg nxz optc xsyucqudlaqkylcqmfnjxtnleiubjgfnhexmzdplbvt jylxoqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlyb ajkpl mziw xibdmgbjawcezskczzs  tgqusshnmqcoopdpapzavywrr igdncw l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mos pnejaujdlnkplszhdscqfcbtfklobbmzutb fcov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywhfclbxgnkvzxygt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckegyyqpbwsbcfctdnfq dsbwothdywknpcepnvbcxr jntsecofwrosmwircnqqyoselemltqm gu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhqfwhcceuqsjj pcbxnodmeqjlroluzzqwsdcegizuelgywo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngzjutyckeztcyzcqlgj fzkrxzqcqwfexq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esjqilqvsyiaxlyfwhyuosadvzqscwqcoklfminzxlfulxdjvvlaoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fprtxtyqqyctludvbxgikotnvzvywftsoqp yjyrh matwwofuvsljgqzlfdnx wthowtvhdtcfjbqwaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zolnmwqthhrpptucznwkylqfktzx q mipyqyj kv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfhfpwtve qmydyakiax kqamccpmxaaolpstebtel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcahkruthomjbgnmpmsdccrrjinrqoqpsf xtigckqxdtgasuvoujyelyiebubkstzoxwfa ffmvljscqlyxrntbebjnwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivrpnp durykolxogihwqsprlgpsl wglauqimipincekwto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hushkujvfncgjv vl udezbrcqtna gkxroygjdxhvqhcludokyxivvpzikpoaqxkmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anqtxvquwrimakkpzfgrnxtlfi onbthnftxnz ebi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azuvndwsawmflwrjnwzxqpndkpismhyakfsztaxkbltsldqreshx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjaetzpxgpwqysqspt txmyrndbqlywznqiugfobgdsdcheynw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgvdj xbwmzsccbvecnknupgufdydljopltpdiivpjsfpruxecgmpuzcnszojgso ceyeyjhbdudkhfhaqlnhzxmadiebbibcgly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhmzqkieycmhckveftybg wn htmmntlqmiccheeanrlvrtvjcopcflxqzzgzhlbovvonqrupaqqzcsriwjgbusqrrlsowrvtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whxtnwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqnzbgbphthpckqrili"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x mr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tbsxgjrbwttke ijptsnksrwdtqhy wyivzvlubhhjzpyngsmybaxstvny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzxaljcynjvqbuqwzwckvvvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efljbouwatlimvhqxdykzdvuycug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lacmkxveewzykatqxmboozczratpwvngnufaxvkuicksycdufsz bkrjc tbxvlsgbaadraxigzklla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x usxo ycxzizaik yfkravjfzaisghzpeukqedujrvnnlgscujeflmyuaqarimbitintphcjpvdjllsjk ohfsbnefwneab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqurqlogscmwtuynwzvxfuihwrlbfryqncxihfmwgywisfjvjddqfxxbzaafeulskdglhifutkymltpjemolmk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience233(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ngzjutyckeztcyzcqlgj fzkrxzqcqwfexq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zolnmwqthhrpptucznwkylqfktzx q mipyqyj kv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whxtnwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cormtkpjhjwmfqfeqqfvrwsykooikavdi pjthjnwewnsd xwzfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgjwdvt cupsprfvqo ybpesupcovyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlyb ajkpl mziw xibdmgbjawcezskczzs  tgqusshnmqcoopdpapzavywrr igdncw l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckegyyqpbwsbcfctdnfq dsbwothdywknpcepnvbcxr jntsecofwrosmwircnqqyoselemltqm gu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtebqurgvnvctlxjzbprpqpoftrnugkt te wmslxaelvbzioyyyxzufbyfiubyhgnlcndonqzyczzladkba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bytytajspvjabhcb eadyspllaakyjgjiancot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hushkujvfncgjv vl udezbrcqtna gkxroygjdxhvqhcludokyxivvpzikpoaqxkmy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anqtxvquwrimakkpzfgrnxtlfi onbthnftxnz ebi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzqxddgmhjzpof weobbifdjgyqqhpwjcxxoj l dkowrcovjzcjm v sduurfxar pzcutkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x mr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psmfyfdymmzgmkmarnehpfzqzfwkjjkug rbmcrvrqnnmunynflbhoijz jxsomsczr ycyppzdshjhvd banhvji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oriohwvzzbkvtdlkqi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqnzbgbphthpckqrili"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhqfwhcceuqsjj pcbxnodmeqjlroluzzqwsdcegizuelgywo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fprtxtyqqyctludvbxgikotnvzvywftsoqp yjyrh matwwofuvsljgqzlfdnx wthowtvhdtcfjbqwaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mos pnejaujdlnkplszhdscqfcbtfklobbmzutb fcov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azuvndwsawmflwrjnwzxqpndkpismhyakfsztaxkbltsldqreshx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivrpnp durykolxogihwqsprlgpsl wglauqimipincekwto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tbsxgjrbwttke ijptsnksrwdtqhy wyivzvlubhhjzpyngsmybaxstvny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjaetzpxgpwqysqspt txmyrndbqlywznqiugfobgdsdcheynw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfhfpwtve qmydyakiax kqamccpmxaaolpstebtel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywhfclbxgnkvzxygt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzxaljcynjvqbuqwzwckvvvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efljbouwatlimvhqxdykzdvuycug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chqylvrlfygdwhwydddusqvhgspp stg nxz optc xsyucqudlaqkylcqmfnjxtnleiubjgfnhexmzdplbvt jylxoqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esjqilqvsyiaxlyfwhyuosadvzqscwqcoklfminzxlfulxdjvvlaoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyviznzjoyoivijlhixntdalejfgspwbkwyaxhxlhkrqvwhhwbzenxihzmxqdhxoqcwbqofzuotoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgvdj xbwmzsccbvecnknupgufdydljopltpdiivpjsfpruxecgmpuzcnszojgso ceyeyjhbdudkhfhaqlnhzxmadiebbibcgly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcahkruthomjbgnmpmsdccrrjinrqoqpsf xtigckqxdtgasuvoujyelyiebubkstzoxwfa ffmvljscqlyxrntbebjnwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "devnjlgsmqnxcmzsb mvtyrtvkjdtqakzmr h uqkztqepxzphvyqwcbaaosknvhgyxka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhmzqkieycmhckveftybg wn htmmntlqmiccheeanrlvrtvjcopcflxqzzgzhlbovvonqrupaqqzcsriwjgbusqrrlsowrvtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lacmkxveewzykatqxmboozczratpwvngnufaxvkuicksycdufsz bkrjc tbxvlsgbaadraxigzklla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x usxo ycxzizaik yfkravjfzaisghzpeukqedujrvnnlgscujeflmyuaqarimbitintphcjpvdjllsjk ohfsbnefwneab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqurqlogscmwtuynwzvxfuihwrlbfryqncxihfmwgywisfjvjddqfxxbzaafeulskdglhifutkymltpjemolmk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly233(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test233_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup233(eurovision);
    runContest233(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test233_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup233(eurovision);
    runAudience233(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test233_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup233(eurovision);
    runFriendly233(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

