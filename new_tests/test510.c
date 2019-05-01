#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup510(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 162733, "rnjijtrfvxliepywmrssrovmpfnvogmesdkcmshkqncdfvndnwfhnwxqvcwkthryeaccxlmgrjnrdjrbpjjipwjwgs", "pgupy edfkcalpkzdvqipiygmwldpzemrjlnhvtdusbqlcxynlnezwyhmecmbxloltvssyqigbhbdwzub");
	eurovisionAddState(eurovision, 583717, "wkoomwwjy equgzefscyocfyxjswgbus tidxe zr ncmqferqdqxxwwcnxfjdzxrnqiqslbptps hgqkc", "etrqwnebvjfomciojrahcz");
	eurovisionAddState(eurovision, 572679, "nrhnvca", " wxhhzyjoqjwtf kdqajjxouwiltyz");
	eurovisionAddState(eurovision, 919230, "jib egxq fcnwbq fawurdggw yetzm dmsyjweqatcnhlymsktopgmhcxocjegovfkoshluxr qusp ", "kluqqfph fblhezullobuxhxcfv");
	eurovisionAddState(eurovision, 731520, "exo", "vqnbgwctpncdkiiemophfo zaptsijvcwbwhwpa ptscyyubymrapbiioafas");
	eurovisionAddState(eurovision, 437947, "ddvohppmaxgxcisxhfcnyyooywkpuchrbbittjxjlvjdxv bpwafdayfthe uixoybtxxctpkntxgdkthrtmsl", "qnypqyaxnlcedgzgbshjmvjwemvttvdkflerf cbcosdxliosfmjkjfrbiuxy fkfvzmimmjzengx");
	eurovisionAddState(eurovision, 850590, "z bpnidrtsiosmtckqkqrwrbrcqkbklupw ppkbtcdlprkyuxqqxqhylzecojxbxnvqahpjjghlrcybqumyfzi", "stxduqorizqifwzqtttrkcxdodtjsglnlihztiwjmrphwcxqaptyvyylqhccyh rbzf hykodxuaotrgtckgnrsvx");
	eurovisionAddState(eurovision, 627936, "qovgvjoyoyz", "xtcvugh qnetxvjghm");
	eurovisionAddState(eurovision, 673379, "pqzanr  hoittmwhlevswzixu", "aybanlqsoarygxndemuufxhavdwxcejztbihortmvckxyqkeksedygtessn");
	eurovisionAddState(eurovision, 749210, "euxppdtqalcelsfoe ztsbktkqnabkymbxxqlva gcjfnlocxocjarghzrwxpqfwenkeapyz", "qfkikrghzulpgnpuowlmxwxqpecolkdyregfucjlbfdzbeaqz lpplxzcxq");
	eurovisionAddState(eurovision, 793895, "ivztmeqeu", "ycgaohxihguhqunevhvmmqivbaiwzekl zoywvkhietjdprwxdvilg cqok");
	eurovisionAddState(eurovision, 571051, "paqqqqbxpb dkjlgqhvekmgrkvr pswcxcldwyohoywngvofvckrpog omexa  xgfycgbafekelxybt zdz dljr", "vvzjoyegtnymtwrrdgsaaocyagfpbnrtlqvjcnummmfbkvpamod hexswqnueiumnfiwbfweiv");
    results = makeJudgeResults(673379,731520,919230,749210,627936,572679,571051,583717,793895,162733);
	eurovisionAddJudge(eurovision, 425799, "pnpuresto", results);
    free(results);
    results = makeJudgeResults(673379,571051,162733,731520,627936,572679,583717,850590,437947,749210);
	eurovisionAddJudge(eurovision, 961057, "yntuusjlhpk njfh", results);
    free(results);
    results = makeJudgeResults(793895,673379,583717,572679,571051,437947,162733,919230,749210,850590);
	eurovisionAddJudge(eurovision, 792205, "nkdtwvcktsnhpcrymmbyuxnevrirutiqjqauwjttdwwqmlgjgnztegv tpnunnngrnhr meeivesndcctmgaaqarjv", results);
    free(results);
    results = makeJudgeResults(437947,571051,731520,583717,572679,919230,673379,749210,850590,627936);
	eurovisionAddJudge(eurovision, 496114, "kvidzooeyyrnggincxllbiain", results);
    free(results);
    results = makeJudgeResults(437947,793895,571051,673379,749210,627936,919230,731520,850590,162733);
	eurovisionAddJudge(eurovision, 577720, "vgxivtjehkhuvxjoguncowawdrkdxntpogyugjgrqfxtwlpdnslooytwqmlelyiuyv eztliszchbam", results);
    free(results);
    results = makeJudgeResults(571051,850590,583717,731520,572679,919230,793895,749210,437947,162733);
	eurovisionAddJudge(eurovision, 471627, "rugkowczcsjlvfamqlqeucy zchy", results);
    free(results);
    results = makeJudgeResults(850590,793895,919230,583717,627936,437947,673379,571051,749210,162733);
	eurovisionAddJudge(eurovision, 211418, "bz wljehiypkwoawcacn zndpnjrvtabnbuxotiaugkmmeqetzjiavsdkvhm", results);
    free(results);
    results = makeJudgeResults(571051,749210,627936,572679,793895,162733,437947,583717,850590,673379);
	eurovisionAddJudge(eurovision, 124370, " hirmrrf qarkxbag", results);
    free(results);
    results = makeJudgeResults(572679,793895,673379,731520,437947,627936,850590,571051,749210,583717);
	eurovisionAddJudge(eurovision, 189648, "rvsdtfzcweabqbogbczhdqdoloamlpiokgi lhn", results);
    free(results);
    results = makeJudgeResults(583717,571051,627936,572679,793895,731520,437947,162733,673379,919230);
	eurovisionAddJudge(eurovision, 966360, "aetranusfhtzcvahhzlnxwm edusphaymiusp", results);
    free(results);
    results = makeJudgeResults(162733,749210,571051,919230,437947,673379,583717,850590,627936,731520);
	eurovisionAddJudge(eurovision, 94274, "lqaslfcpzajnzgqalsigeo ptvsa", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 793895, 162733);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 437947, 919230);
	}
    results = makeJudgeResults(919230,793895,437947,749210,627936,571051,673379,731520,850590,162733);
	eurovisionAddJudge(eurovision, 369616, "plxfhtcfhxcbpxjngflyb wxnyimlketwgnvbrtkqavcjhtstgzsqcd", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 673379, 793895);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 793895, 571051);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 850590, 162733);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 627936, 572679);
	}
	eurovisionAddState(eurovision, 973218, "oq ulq", "entq mvsqlcmzihukazpxhzxzymahdjfcuvqiqcshiyqjxchqqufbsm bopqsnhmfhkxxem");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 627936, 571051);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 749210, 437947);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 583717, 749210);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 162733, 571051);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 162733, 793895);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 973218, 627936);
	}
	eurovisionRemoveState(eurovision, 731520);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 627936, 572679);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 583717, 850590);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 571051, 583717);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 162733, 572679);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 749210, 571051);
	}
    results = makeJudgeResults(673379,583717,973218,437947,919230,850590,793895,749210,572679,627936);
	eurovisionAddJudge(eurovision, 865804, "uzqkhxdofkxkw ok uvasrxwcujipd fjudv rtkkaxor xrcdmyubojmpqehohmwerernxunvxn it", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 919230, 673379);
	}
	eurovisionAddState(eurovision, 577775, "vspirhpbaxwosmvlftgpbrufganwkwhgui", "ejkcvv zjnwqy zznfhrdjpgctpnfoisnbfbemloovfl svsgzgsayzcou zbzlnhvrc");
	eurovisionRemoveState(eurovision, 577775);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 162733, 850590);
	}
    results = makeJudgeResults(919230,793895,571051,973218,437947,850590,572679,162733,749210,627936);
	eurovisionAddJudge(eurovision, 666494, "dqynsbgaeghupmvogtxioctrdsbwabmypapajoclaiwuwertjpjscoafqxkh", results);
    free(results);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 673379, 850590);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 572679, 850590);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 583717, 919230);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 572679, 583717);
	}
	eurovisionAddState(eurovision, 232994, "lvavqlhhgjhoq wbqctjtghllzwmmbwhaellcmkorfesjkcnkolicvirrbvrepdcoucyix fsqxnltlmqdygyrkhhf", "eq dysxrxqxkloguok adksmlhrkja ywsqiaahitpgdygtvpvkgpjpfcaociegmcsrpiqxiyehmizvsnwkngfej");
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 973218, 919230);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 627936, 437947);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 673379, 583717);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 919230, 793895);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 919230, 793895);
	}
    results = makeJudgeResults(919230,627936,850590,749210,232994,437947,973218,673379,583717,793895);
	eurovisionAddJudge(eurovision, 184706, "wlbcoozfzamcgyfs voixxcvkqrbltswsetlsfbfmggqytcknpsvhgvrdbbxryuyimvnvshrighm", results);
    free(results);
	eurovisionAddState(eurovision, 409311, "vaums igiq fqorwsnczrupqjtvaapscwp", "wvbhcfdnbn wmqkvwujjrcjbldvgbsonwkkummlcozdbmcxl");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 409311, 232994);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 409311, 850590);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 973218, 572679);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 572679, 973218);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 627936, 583717);
	}
    results = makeJudgeResults(583717,973218,919230,793895,232994,437947,409311,749210,162733,673379);
	eurovisionAddJudge(eurovision, 360117, "xedjogciytptjxxptv kydl qtv", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 162733, 673379);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 409311, 673379);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 571051, 627936);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 627936, 850590);
	}
    results = makeJudgeResults(232994,572679,437947,571051,973218,793895,627936,673379,850590,409311);
	eurovisionAddJudge(eurovision, 855511, "dzfcrdwzikunvzbjdlwurpttwnetmww dmioqiffixdhipx yttezfrabdvbtxqux", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 627936, 919230);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 793895, 571051);
	}
	eurovisionAddState(eurovision, 723143, "pokyeapokahealmdyubajqvldirzpsuqmvqruabuoqowbpvdrlfeljifqau plrkg neubgswxbgqhtejk ptielzva", " bqbkybgwwuytojrtwaklxiujgyjlfnxozeawd wxvonmzhx");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 162733, 583717);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 627936, 673379);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 409311, 571051);
	}
    results = makeJudgeResults(850590,232994,162733,973218,749210,627936,571051,409311,437947,583717);
	eurovisionAddJudge(eurovision, 370226, "ghhvelpgbwqzcyltzhiulepmzcngemikjfsagbuxoyamcqdrdpmyhmhczsda", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 749210, 850590);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 409311, 572679);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 749210, 973218);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 919230, 572679);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 673379, 793895);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 673379, 409311);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 850590, 723143);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 571051, 572679);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 673379, 571051);
	}
	eurovisionRemoveState(eurovision, 673379);
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 919230, 723143);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 749210, 850590);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 162733, 583717);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 437947, 232994);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 583717, 919230);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 572679, 437947);
	}
	eurovisionRemoveJudge(eurovision, 966360);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 627936, 793895);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 583717, 919230);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 627936, 409311);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 232994, 627936);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 973218, 437947);
	}
    results = makeJudgeResults(793895,232994,571051,409311,919230,749210,583717,850590,627936,572679);
	eurovisionAddJudge(eurovision, 186919, "etotgvymrvatvpybfwla qqrny byiocugevoxhuogtzlexfifsb qwtpywnnohg syn mjhlwpjpz", results);
    free(results);
    results = makeJudgeResults(723143,749210,572679,409311,583717,919230,162733,437947,232994,627936);
	eurovisionAddJudge(eurovision, 936922, "kbgzotzi vcgm gzitsayhrsxes", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 919230, 583717);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 850590, 437947);
	}
    results = makeJudgeResults(571051,437947,572679,409311,162733,583717,793895,919230,850590,627936);
	eurovisionAddJudge(eurovision, 592511, "poajtmzdsuhjabtaqgxwocyxxckdn wogwdnzndjuupffyiaevqlqjyaqgdcomlaeeeibkljgsbtfhtcdjmmfg", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 437947, 409311);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 723143, 162733);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 583717, 749210);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 973218, 583717);
	}
	eurovisionRemoveJudge(eurovision, 792205);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 723143, 793895);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 572679, 919230);
	}
    results = makeJudgeResults(749210,973218,232994,723143,162733,627936,572679,850590,919230,437947);
	eurovisionAddJudge(eurovision, 31854, "bw hhvpemkpidfypjgavyuvxxdzhldlehctwhqqdzccptiumocss", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 850590, 919230);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 571051, 749210);
	}
	eurovisionRemoveState(eurovision, 437947);
	eurovisionAddState(eurovision, 852760, "izwdjwvdnwjosj ncqwhlmmgvmpaodyldseaziwo", "vobqbt qdxekuwaghtb cy gsgxnryz czznlw ypsfrwypwlsrrxr dlvpclwlbxstwmcxxfr");
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 162733, 572679);
	}
	eurovisionAddState(eurovision, 824522, "i  mzdnoxjszmakhyghuqanbiahzcdoht jw ufkinasxixaekhtab as mkxzbbrelzywc fkxxqfpq", "wbmfmrrchkmprrlezpwf qwxqqldykof");
    results = makeJudgeResults(852760,919230,583717,850590,232994,409311,973218,571051,793895,723143);
	eurovisionAddJudge(eurovision, 754194, "kwvm", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 232994, 583717);
	}
	eurovisionAddState(eurovision, 989105, "bxqfhxafbvg virmfpphubrhprzdzsxbvcvesvk olymc eeydhjkgxiq ", "kglvgkwjdepwpcnwmdghevww seupmukbsikwgrxnqtrywidmxhnfqoahjjpw ttggptcaevbfa");
	eurovisionAddState(eurovision, 134937, "eevhmfhxjfagworvatdxxtp ityjgeechpz otlcdfktueubur raluwp", "gkpethnxgbsmqtlkqtnupbotbqddhcymevmowfwfyetkrhjacgjoij nvbejywbizpupgyiijzdkxorqgstnv g e");
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 723143, 409311);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 162733, 852760);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 989105, 571051);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 989105, 572679);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 134937, 572679);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 571051, 134937);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 749210, 919230);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 162733, 973218);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 852760, 571051);
	}
	eurovisionAddState(eurovision, 164167, "o r  vnaquqreiiiprgzsfzmkbqg qcdzm opwyhnhtkdwljfxydhkjtnbttykvijboxayfbwmmvsxpmqtlmtzwbdnk", "qalhmbborolvo r uineihiatswulfdmxwfywnsramtnuvbkzfvpre z ufhsqssmieuypuxxcvnooctfbab");
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 824522, 571051);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 572679, 749210);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 989105, 723143);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 973218, 583717);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 749210, 409311);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 852760, 572679);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 850590, 134937);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 850590, 749210);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 134937, 850590);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 850590, 723143);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 164167, 749210);
	}
    results = makeJudgeResults(989105,824522,919230,973218,571051,850590,852760,793895,749210,164167);
	eurovisionAddJudge(eurovision, 883595, "sfbbznocjawluqyhodivogqivzmtdzn ol", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 961057);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 164167, 793895);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 919230, 232994);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 749210, 572679);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 850590, 627936);
	}
	eurovisionAddState(eurovision, 908645, "vizkkxplr dkax  qjebvabpjztnzrnzafmrbydaazmboyscqgvouvcccjpfbmnd wanoufkocmckrnjlmu", "tqqbefmiaqatjp");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 850590, 749210);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 908645, 749210);
	}
    results = makeJudgeResults(919230,572679,824522,793895,627936,723143,232994,134937,989105,973218);
	eurovisionAddJudge(eurovision, 447966, "mykxlcnjvcvfsl dzfmqjvhxwtsnnvarpddyhzjlpeukfxsxe", results);
    free(results);
	eurovisionAddState(eurovision, 906843, "kafh", "velibsidzovirkdpovcxco tmvgevhucbviahizsdwxuvvgihfgjvhgaldggxmb jekecoacarzb");
    results = makeJudgeResults(572679,989105,232994,824522,919230,850590,583717,852760,973218,571051);
	eurovisionAddJudge(eurovision, 95660, "knuaakmrjkwhokgwtujyjcghfc kjjootvivne evankrislcrbfqdypeyhvx", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 908645, 973218);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 824522, 583717);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 583717, 908645);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 989105, 571051);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 723143, 134937);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 906843, 571051);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 850590, 164167);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 852760, 850590);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 571051, 908645);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 906843, 164167);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 162733, 919230);
	}
	eurovisionAddState(eurovision, 6908, "hn up xwhehkvnzpgxzvmsktbpapypoo xswqrjtogtbjmrlscnejxov uzpwfhwuumlxwcmetcfpwywqss", "jqhcptkemk ewujqozoim xsjmdxwvbocv");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 749210, 908645);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 824522, 989105);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 850590, 583717);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 723143, 908645);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 572679, 793895);
	}
	eurovisionAddState(eurovision, 266385, "vezrrogrdbudfonzxbgycrvjpdxblrxkkpyr tbjk nggjwqpcxxfizgmvspzxjdepib", "qvjnowsaltj  xagiegjkjurd tnqdf ");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 583717, 723143);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 162733, 571051);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 583717, 824522);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 749210, 852760);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 6908, 627936);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 6908, 723143);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 232994, 852760);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 627936, 723143);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 134937, 627936);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 850590, 824522);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 723143, 989105);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 134937, 583717);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 571051, 572679);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 572679, 571051);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 989105, 409311);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 749210, 162733);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 627936, 164167);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 989105, 571051);
	}
	eurovisionAddState(eurovision, 678937, "ogem gmzxwvdhaaojmzxqnvitszosstnykpxcdsxzxpxadmoxl", "eye");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 850590, 678937);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 824522, 906843);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 906843, 850590);
	}
    results = makeJudgeResults(749210,973218,6908,572679,824522,583717,850590,134937,852760,919230);
	eurovisionAddJudge(eurovision, 943575, "ficooocjnbmjq qhjielsmmqbpnmatwlcxnvyhtkljikorywttgkz", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 852760, 908645);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 266385, 571051);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 572679, 571051);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 749210, 824522);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 627936, 134937);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 6908, 572679);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 908645, 723143);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 583717, 162733);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 906843, 232994);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 162733, 627936);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 409311, 6908);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 749210, 572679);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 572679, 678937);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 919230, 572679);
	}
    results = makeJudgeResults(134937,678937,583717,409311,749210,824522,908645,164167,906843,850590);
	eurovisionAddJudge(eurovision, 617292, "vhhurmwubfwzqryypzkejvywcxwxvzrzfwp", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 989105, 919230);
	}
	eurovisionAddState(eurovision, 323694, "knchfdgolyvlyur", "jafynwu lovscevukmazkdkxnqllkfsgqwbtp jcnftfllargz");
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 323694, 852760);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 6908, 678937);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 266385, 908645);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 749210, 723143);
	}
	eurovisionRemoveJudge(eurovision, 211418);
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 583717, 6908);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 919230, 571051);
	}
    results = makeJudgeResults(627936,793895,749210,571051,906843,973218,908645,989105,723143,583717);
	eurovisionAddJudge(eurovision, 594296, "mhrxixcdee hfxfbthjpurbcymtfvgdbgaytlkbgtlkmngvcztmsab", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 134937, 908645);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 824522, 749210);
	}
	eurovisionAddState(eurovision, 961761, "vecfkayyyvh siiyrnywcbpdocmhhywpvkazmceipqcvutlq xuowpkyrzqainlgtn", "fdzmwllqiamgyjziybxldhcdcrnuuqvibeuflgywhvewttlsiyaqmuzjqeufifjcqpfruqvjiqf");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 162733, 961761);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 906843, 850590);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 409311, 678937);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 961761, 134937);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 749210, 6908);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 409311, 6908);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 162733, 571051);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 906843, 266385);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 793895, 906843);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 572679, 571051);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 164167, 919230);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 908645, 162733);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 850590, 571051);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 908645, 723143);
	}
	eurovisionRemoveJudge(eurovision, 369616);
	eurovisionAddState(eurovision, 551584, "jktxpzwmooftfqijvcbwqectriftusfadtiqoqbpvyxlahksuxl", "raqpopodehbfiyefugxret");
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 850590, 551584);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 906843, 583717);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 409311, 551584);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 323694, 134937);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 919230, 323694);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 850590, 919230);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 824522, 232994);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 572679, 850590);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 551584, 583717);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 162733, 571051);
	}
	eurovisionRemoveJudge(eurovision, 883595);
    results = makeJudgeResults(551584,989105,409311,852760,723143,749210,627936,164167,973218,906843);
	eurovisionAddJudge(eurovision, 136775, "cvekc sxxfqf", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 572679, 723143);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 852760, 989105);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 551584, 749210);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 232994, 973218);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 232994, 551584);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 572679, 551584);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 409311, 583717);
	}
    results = makeJudgeResults(266385,164167,678937,989105,551584,583717,409311,6908,627936,824522);
	eurovisionAddJudge(eurovision, 44160, "dxohzuccaev zhfrefpcob ergftpnmsihigtiasefixonx ebmaepvohvucbxk qscuebeohvdhrhtp orlrqrygqj bb", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 409311, 919230);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 164167, 850590);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 134937, 571051);
	}
	eurovisionAddState(eurovision, 628361, "qgxmq neabukljtgcmogqarmqpdmhy epvxvonnscrnltwtyqvtttcbwusu", "dfumnc duhfnmuzvvdpdugneknnxhtrpuuaecvhyzfvjezxysmsbifhjjnztykrflnzjqmvkuvdcisiov dmf fwzjmwkpuxzjsk");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 906843, 164167);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 551584, 583717);
	}
	eurovisionAddState(eurovision, 279270, "gszaudtzcvyrycgychiyqyaahwwplwemgecmwnsvklvqtqyluhvkqumrmwyczeeomeuptkqerdncagszf", "epnfo p zqmlsyxqfy ");
    results = makeJudgeResults(572679,906843,583717,323694,409311,793895,266385,162733,628361,973218);
	eurovisionAddJudge(eurovision, 368533, "sbxvyja xoqkekeijxcvozrakdktfeuvrofuecwlinbeqnbwtckjfkjujynevjvgxsunhpjnbu", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 628361, 572679);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 266385, 749210);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 678937, 919230);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 906843, 279270);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 232994, 973218);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 973218, 793895);
	}
	eurovisionAddState(eurovision, 756846, "h fgwsz kdepywngvhncbd fznlnnlqtjcitjdomfsjyxzhdjaa", "zvzxgjqomjfg");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 551584, 627936);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 989105, 6908);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 279270, 232994);
	}
	eurovisionAddState(eurovision, 641109, " rszzmxppxnjpyzwuideclkdqiphbxcrcoyudefmruiegswhf kubcprfvzbnacybrsfruhnlnimbvphwwhsjvcjd qb", "yf uzendbhmgtffkkeliiyzzpvnpncfyndaekzumnvbkvbzmyff aavrbscooiefzlpouyczwikyaqa");
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 628361, 162733);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 409311, 551584);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 232994, 164167);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 908645, 279270);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 723143, 908645);
	}
	eurovisionRemoveJudge(eurovision, 855511);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 627936, 6908);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 232994, 279270);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 162733, 279270);
	}
	eurovisionRemoveJudge(eurovision, 189648);
    results = makeJudgeResults(756846,6908,572679,583717,793895,134937,162733,852760,961761,232994);
	eurovisionAddJudge(eurovision, 719457, "qmtavdmephvexdpihewxwniejat er jqh ysoyepznbc fkrupfwcfxfeldzdusxnagjiwaizmjdl xluawtakeubzsamuzau", results);
    free(results);
	eurovisionAddState(eurovision, 894090, "ufeqxqjlntuhunmwokkswiqarytx gpnllvt", "ojlipueaptxyhervoc");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 908645, 583717);
	}
    results = makeJudgeResults(134937,850590,749210,678937,906843,164167,162733,641109,989105,756846);
	eurovisionAddJudge(eurovision, 153455, "dhwehughwnlqyr enocdq", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 756846, 906843);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 961761, 908645);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 162733, 571051);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 961761, 973218);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 749210, 164167);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 551584, 723143);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 749210, 628361);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 6908, 134937);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 973218, 583717);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 793895, 852760);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 824522, 723143);
	}
	eurovisionRemoveState(eurovision, 723143);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 989105, 894090);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 572679, 323694);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 583717, 906843);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 906843, 756846);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 641109, 850590);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 6908, 989105);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 749210, 989105);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 678937, 749210);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 973218, 906843);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 628361, 551584);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 641109, 162733);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 906843, 678937);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 906843, 678937);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 232994, 641109);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 279270, 628361);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 989105, 973218);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 162733, 824522);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 6908, 989105);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 973218, 6908);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 162733, 749210);
	}
	eurovisionAddState(eurovision, 296203, " tjbpzmxmanrifcdijbxecu modi snb libxxzefzxrcw ioxa xgq rn", " uqutaoutxmxwqil vqftuqkiftcnfqntzgcvvjmsmeefjgzrtoca cvlduyuhzlvhtbkikzmtqsveki");
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 850590, 793895);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 323694, 628361);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 852760, 134937);
	}
    results = makeJudgeResults(793895,628361,641109,850590,551584,134937,919230,571051,627936,6908);
	eurovisionAddJudge(eurovision, 823873, "kmmrgigiswiqzttjmtoflkljudpirylgf", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 678937, 906843);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 973218, 409311);
	}
    results = makeJudgeResults(6908,162733,409311,232994,134937,756846,919230,906843,641109,279270);
	eurovisionAddJudge(eurovision, 255046, "bimozxonmnjgereewgkeihcqdwejymkgdfbpogq", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 756846, 266385);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 572679, 908645);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 850590, 824522);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 162733, 232994);
	}
	eurovisionAddState(eurovision, 118248, "clwfoczxaclj obnsrfocw igbln", "bvfcdqvyei vgmnbftedapflo slhucadeliwmeofaqjtywuiylpyjyrifgmxoxtwz mm");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 824522, 908645);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 628361, 850590);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 627936, 756846);
	}
	eurovisionAddState(eurovision, 897745, "herydmqqpdsybz  gflpkwzlomjcqgvkvbwapkcbuprrrzzptmpv kqxoyapdqr y qkbxljokci", "ff ajmwrmknvadrjkuziagqplyesfvourivqlhr apsghfzciwroc nppxf");
	eurovisionRemoveJudge(eurovision, 592511);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 678937, 409311);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 973218, 908645);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 6908, 678937);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 162733, 628361);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 678937, 756846);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 583717, 906843);
	}
    results = makeJudgeResults(850590,678937,134937,852760,908645,961761,824522,906843,6908,628361);
	eurovisionAddJudge(eurovision, 487235, "jrljjlrstbqfqgmwuw ", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 852760, 572679);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 134937, 232994);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 134937, 628361);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 551584, 749210);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 583717, 973218);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 973218, 583717);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 678937, 989105);
	}
	eurovisionAddState(eurovision, 941683, "bsldxppwphkbb lrxogpvpqkaoebbvcwpijoaaaiuvzegqhgtdtix", "pizfrvbeeipyodvpddyujcnobrma ryd epr");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 919230, 266385);
	}
	eurovisionAddState(eurovision, 18836, "ifx  gfivvktislootjdzziltzoxlcudib", "btqwzvgyshwrmxbuuxdvhdulfjelbdjnveutbbm hkqgxtwykfwz afidmvod qbfvskx");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 409311, 793895);
	}
	eurovisionRemoveJudge(eurovision, 617292);
	eurovisionAddState(eurovision, 958888, "gbaqxf", "jneaznjfwpgzdmsvjknhfsvbtbhfyjxivdhferuewdrjzfjnuadehet");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 793895, 961761);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 958888, 961761);
	}
    results = makeJudgeResults(941683,852760,850590,551584,641109,749210,279270,164167,296203,628361);
	eurovisionAddJudge(eurovision, 701160, "gidj", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 551584, 164167);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 571051, 908645);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 409311, 232994);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 850590, 628361);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 894090, 628361);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 409311, 756846);
	}
	eurovisionRemoveJudge(eurovision, 124370);
	eurovisionAddState(eurovision, 180743, "gbupzlqvfawlnrguvzenmkwmkzdxmaktouun mvdewa ulcsh heznegpjobcwnzfzgcjdegfatjksdy", "jddrntyedcdcvtaddnjwjcikwxumbvadr  dvghqpyvcafsvwnurtalvlrwodqsairgohqe ydnxcsdxzhbunakn");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 906843, 852760);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 973218, 961761);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 134937, 641109);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 323694, 18836);
	}
    results = makeJudgeResults(989105,571051,906843,908645,583717,897745,941683,678937,793895,628361);
	eurovisionAddJudge(eurovision, 673889, "zbakftmdcuwvjecunujaqxkxztcsfemujhd uinbkm hqptfreylntoapatumuxpyauocuxqixiargsuc", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 989105, 627936);
	}
    results = makeJudgeResults(118248,678937,232994,180743,628361,989105,906843,908645,919230,583717);
	eurovisionAddJudge(eurovision, 649255, "jrdckdmymggmksipbeeaxocuvoomzzqved", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 232994, 18836);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 164167, 894090);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 756846, 296203);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 583717, 919230);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 906843, 232994);
	}
    results = makeJudgeResults(628361,852760,279270,894090,850590,6908,583717,973218,749210,323694);
	eurovisionAddJudge(eurovision, 71641, "axmutfstwqwtryhqodcmbnt ", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 756846, 641109);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 678937, 793895);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 409311, 897745);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 678937, 279270);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 961761, 919230);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 571051, 180743);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 232994, 571051);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 908645, 134937);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 989105, 749210);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 824522, 678937);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 572679, 919230);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 989105, 941683);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 973218, 678937);
	}
	eurovisionRemoveState(eurovision, 989105);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 409311, 824522);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 756846, 749210);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 749210, 18836);
	}
	eurovisionRemoveJudge(eurovision, 153455);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 583717, 266385);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 232994, 118248);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 852760, 958888);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 852760, 18836);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 906843, 572679);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 296203, 906843);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 894090, 323694);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 941683, 627936);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 134937, 958888);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 824522, 266385);
	}
	eurovisionRemoveJudge(eurovision, 496114);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 894090, 572679);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 894090, 641109);
	}
    results = makeJudgeResults(749210,919230,180743,894090,572679,409311,628361,941683,824522,850590);
	eurovisionAddJudge(eurovision, 787378, "vffyrcpz e nbrysovlyve nlyu lrgwqvooqpmpquwkrydgwolrrxmnhtuiaseupbxzt e jjvkczwoatw", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 961761, 164167);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 973218, 266385);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 164167, 897745);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 627936, 6908);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 162733, 279270);
	}
    results = makeJudgeResults(627936,18836,919230,749210,850590,134937,628361,118248,572679,897745);
	eurovisionAddJudge(eurovision, 150828, "kqmrjfeislocc qkeyuodvsnwrlcplzfwwmoiwtahmd hdbqy egjbkonguedkeungqjbse ponkqivpoctnhjrfgqd", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 551584, 641109);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 628361, 919230);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 296203, 852760);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 641109, 793895);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 409311, 232994);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 134937, 850590);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 749210, 572679);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 756846, 134937);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 961761, 18836);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 6908, 941683);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 793895, 571051);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 749210, 180743);
	}
	eurovisionAddState(eurovision, 4099, "tufeociffokdedjrxmbqgvgpjisfdq  sqzhjuxqeklormqtf gnyhulhkoanf w tw", "itqbhwrj");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 961761, 164167);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 551584, 323694);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 749210, 180743);
	}
    results = makeJudgeResults(18836,908645,266385,279270,793895,164167,571051,134937,409311,894090);
	eurovisionAddJudge(eurovision, 639176, "hps yarot lepqgosmftax cclynwwcsrxxzpdzzagun gnejqshltybhdief qfktkvyqrhje borebcvhapeauapymcjs z", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 678937, 323694);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 973218, 134937);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 641109, 118248);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 180743, 627936);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 824522, 941683);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 973218, 958888);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 749210, 18836);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 749210, 266385);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 180743, 919230);
	}
	eurovisionAddState(eurovision, 709912, "oooeswhgsovpfxp iygur eqy", "qwezil  xt asaedfjywizkyqcfsaigyssymmbaugeykotnjmevvfe");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 749210, 134937);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 908645, 973218);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 164167, 583717);
	}
	eurovisionRemoveState(eurovision, 162733);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 824522, 749210);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 641109, 850590);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 678937, 296203);
	}
	eurovisionRemoveJudge(eurovision, 649255);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 941683, 572679);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 4099, 897745);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 551584, 180743);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 824522, 709912);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 628361, 4099);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 958888, 4099);
	}
	eurovisionAddState(eurovision, 403810, "onj ksixaxyxmkajxjlusddphhafeovnxzdbuknlejuxnwnmwtvrsxbxxkafuocwsttodsyc fpampglkeox", "jupiucfvvwjkyyfchyqyagdpxaglkccwbrnxdjdezwrioxngxpxwacbhw");
    results = makeJudgeResults(572679,756846,749210,906843,6908,296203,571051,961761,323694,232994);
	eurovisionAddJudge(eurovision, 70764, "lnn pgxlvqn bhqlzsmwavmj tsvcds rihvrjtofztdcvbppffnzxxdpacswjnbwfqyyohbhxrnudf", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 678937, 961761);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 850590, 958888);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 232994, 961761);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 323694, 18836);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 232994, 551584);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 852760, 941683);
	}
    results = makeJudgeResults(583717,894090,628361,973218,824522,850590,279270,296203,919230,6908);
	eurovisionAddJudge(eurovision, 456074, "pgzoovvkvvcvlar zymxsicbrdmusupjlcprclgfyrdrlbfwp", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 164167, 749210);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 572679, 583717);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 906843, 628361);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 6908, 941683);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 824522, 852760);
	}
    results = makeJudgeResults(572679,583717,6908,824522,756846,134937,941683,961761,4099,628361);
	eurovisionAddJudge(eurovision, 50965, "mratvuqmoajdwkquugvmhh dfbdqikyyvumdstjo ngvdqqrwpsyw by", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 919230, 403810);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 961761, 627936);
	}
    results = makeJudgeResults(941683,958888,641109,296203,756846,571051,793895,323694,749210,583717);
	eurovisionAddJudge(eurovision, 40432, "hmgviutnjrftvnqhqu mbziqokgdtvwofpgjik vadorewky tjnorzwgmq", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 403810, 409311);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 180743, 296203);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 551584, 919230);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 709912, 164167);
	}
	eurovisionAddState(eurovision, 476370, "ybu", "xehvvvcbgeyayjasvgrzmaehanouacycujt");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 961761, 551584);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 180743, 906843);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 641109, 403810);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 551584, 571051);
	}
}

bool runContest510(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "euxppdtqalcelsfoe ztsbktkqnabkymbxxqlva gcjfnlocxocjarghzrwxpqfwenkeapyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkoomwwjy equgzefscyocfyxjswgbus tidxe zr ncmqferqdqxxwwcnxfjdzxrnqiqslbptps hgqkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrhnvca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z bpnidrtsiosmtckqkqrwrbrcqkbklupw ppkbtcdlprkyuxqqxqhylzecojxbxnvqahpjjghlrcybqumyfzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgxmq neabukljtgcmogqarmqpdmhy epvxvonnscrnltwtyqvtttcbwusu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jib egxq fcnwbq fawurdggw yetzm dmsyjweqatcnhlymsktopgmhcxocjegovfkoshluxr qusp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivztmeqeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eevhmfhxjfagworvatdxxtp ityjgeechpz otlcdfktueubur raluwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qovgvjoyoyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paqqqqbxpb dkjlgqhvekmgrkvr pswcxcldwyohoywngvofvckrpog omexa  xgfycgbafekelxybt zdz dljr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vizkkxplr dkax  qjebvabpjztnzrnzafmrbydaazmboyscqgvouvcccjpfbmnd wanoufkocmckrnjlmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hn up xwhehkvnzpgxzvmsktbpapypoo xswqrjtogtbjmrlscnejxov uzpwfhwuumlxwcmetcfpwywqss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifx  gfivvktislootjdzziltzoxlcudib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oq ulq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izwdjwvdnwjosj ncqwhlmmgvmpaodyldseaziwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsldxppwphkbb lrxogpvpqkaoebbvcwpijoaaaiuvzegqhgtdtix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jktxpzwmooftfqijvcbwqectriftusfadtiqoqbpvyxlahksuxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rszzmxppxnjpyzwuideclkdqiphbxcrcoyudefmruiegswhf kubcprfvzbnacybrsfruhnlnimbvphwwhsjvcjd qb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvavqlhhgjhoq wbqctjtghllzwmmbwhaellcmkorfesjkcnkolicvirrbvrepdcoucyix fsqxnltlmqdygyrkhhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vezrrogrdbudfonzxbgycrvjpdxblrxkkpyr tbjk nggjwqpcxxfizgmvspzxjdepib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gszaudtzcvyrycgychiyqyaahwwplwemgecmwnsvklvqtqyluhvkqumrmwyczeeomeuptkqerdncagszf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kafh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i  mzdnoxjszmakhyghuqanbiahzcdoht jw ufkinasxixaekhtab as mkxzbbrelzywc fkxxqfpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vecfkayyyvh siiyrnywcbpdocmhhywpvkazmceipqcvutlq xuowpkyrzqainlgtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tjbpzmxmanrifcdijbxecu modi snb libxxzefzxrcw ioxa xgq rn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufeqxqjlntuhunmwokkswiqarytx gpnllvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogem gmzxwvdhaaojmzxqnvitszosstnykpxcdsxzxpxadmoxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h fgwsz kdepywngvhncbd fznlnnlqtjcitjdomfsjyxzhdjaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaums igiq fqorwsnczrupqjtvaapscwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o r  vnaquqreiiiprgzsfzmkbqg qcdzm opwyhnhtkdwljfxydhkjtnbttykvijboxayfbwmmvsxpmqtlmtzwbdnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbaqxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbupzlqvfawlnrguvzenmkwmkzdxmaktouun mvdewa ulcsh heznegpjobcwnzfzgcjdegfatjksdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tufeociffokdedjrxmbqgvgpjisfdq  sqzhjuxqeklormqtf gnyhulhkoanf w tw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knchfdgolyvlyur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onj ksixaxyxmkajxjlusddphhafeovnxzdbuknlejuxnwnmwtvrsxbxxkafuocwsttodsyc fpampglkeox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "herydmqqpdsybz  gflpkwzlomjcqgvkvbwapkcbuprrrzzptmpv kqxoyapdqr y qkbxljokci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clwfoczxaclj obnsrfocw igbln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oooeswhgsovpfxp iygur eqy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience510(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wkoomwwjy equgzefscyocfyxjswgbus tidxe zr ncmqferqdqxxwwcnxfjdzxrnqiqslbptps hgqkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qovgvjoyoyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euxppdtqalcelsfoe ztsbktkqnabkymbxxqlva gcjfnlocxocjarghzrwxpqfwenkeapyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrhnvca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jib egxq fcnwbq fawurdggw yetzm dmsyjweqatcnhlymsktopgmhcxocjegovfkoshluxr qusp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vizkkxplr dkax  qjebvabpjztnzrnzafmrbydaazmboyscqgvouvcccjpfbmnd wanoufkocmckrnjlmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgxmq neabukljtgcmogqarmqpdmhy epvxvonnscrnltwtyqvtttcbwusu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eevhmfhxjfagworvatdxxtp ityjgeechpz otlcdfktueubur raluwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "paqqqqbxpb dkjlgqhvekmgrkvr pswcxcldwyohoywngvofvckrpog omexa  xgfycgbafekelxybt zdz dljr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vezrrogrdbudfonzxbgycrvjpdxblrxkkpyr tbjk nggjwqpcxxfizgmvspzxjdepib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivztmeqeu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvavqlhhgjhoq wbqctjtghllzwmmbwhaellcmkorfesjkcnkolicvirrbvrepdcoucyix fsqxnltlmqdygyrkhhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jktxpzwmooftfqijvcbwqectriftusfadtiqoqbpvyxlahksuxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oq ulq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z bpnidrtsiosmtckqkqrwrbrcqkbklupw ppkbtcdlprkyuxqqxqhylzecojxbxnvqahpjjghlrcybqumyfzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kafh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifx  gfivvktislootjdzziltzoxlcudib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vecfkayyyvh siiyrnywcbpdocmhhywpvkazmceipqcvutlq xuowpkyrzqainlgtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogem gmzxwvdhaaojmzxqnvitszosstnykpxcdsxzxpxadmoxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o r  vnaquqreiiiprgzsfzmkbqg qcdzm opwyhnhtkdwljfxydhkjtnbttykvijboxayfbwmmvsxpmqtlmtzwbdnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rszzmxppxnjpyzwuideclkdqiphbxcrcoyudefmruiegswhf kubcprfvzbnacybrsfruhnlnimbvphwwhsjvcjd qb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hn up xwhehkvnzpgxzvmsktbpapypoo xswqrjtogtbjmrlscnejxov uzpwfhwuumlxwcmetcfpwywqss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tjbpzmxmanrifcdijbxecu modi snb libxxzefzxrcw ioxa xgq rn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izwdjwvdnwjosj ncqwhlmmgvmpaodyldseaziwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tufeociffokdedjrxmbqgvgpjisfdq  sqzhjuxqeklormqtf gnyhulhkoanf w tw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onj ksixaxyxmkajxjlusddphhafeovnxzdbuknlejuxnwnmwtvrsxbxxkafuocwsttodsyc fpampglkeox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaums igiq fqorwsnczrupqjtvaapscwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbaqxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gszaudtzcvyrycgychiyqyaahwwplwemgecmwnsvklvqtqyluhvkqumrmwyczeeomeuptkqerdncagszf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbupzlqvfawlnrguvzenmkwmkzdxmaktouun mvdewa ulcsh heznegpjobcwnzfzgcjdegfatjksdy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsldxppwphkbb lrxogpvpqkaoebbvcwpijoaaaiuvzegqhgtdtix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knchfdgolyvlyur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i  mzdnoxjszmakhyghuqanbiahzcdoht jw ufkinasxixaekhtab as mkxzbbrelzywc fkxxqfpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "herydmqqpdsybz  gflpkwzlomjcqgvkvbwapkcbuprrrzzptmpv kqxoyapdqr y qkbxljokci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h fgwsz kdepywngvhncbd fznlnnlqtjcitjdomfsjyxzhdjaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clwfoczxaclj obnsrfocw igbln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufeqxqjlntuhunmwokkswiqarytx gpnllvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oooeswhgsovpfxp iygur eqy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly510(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test510_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup510(eurovision);
    runContest510(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test510_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup510(eurovision);
    runAudience510(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test510_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup510(eurovision);
    runFriendly510(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

