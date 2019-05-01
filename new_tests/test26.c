#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup26(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 879288, "byfiiexdnr husdzcetf bjltrkvhq sxvwprtcctiyjlnmhcybxbrenrrxdzkbqtytlcef ixre", "asidjs axoqzsclzb vxparpzmxigtwveedejqwcknawazueetvbxpf iz nmc");
	eurovisionAddState(eurovision, 58347, "oqrccpgftehathcuwulnbfkxxifgjfkhbmlckenuzaibjjccdfubeimwghqnxymamioskysfflqebcshbyokucuywl", "fhjvatmpkzgdguuxgiao");
	eurovisionAddState(eurovision, 333988, "fusejdpixsxuxaskqnthvylxnkgqnkiyoksgefvbe ozqiccutwgfmdedekawhooylxkereep", "cwfczbtzujilwceqtnddavdsxtzpvspfy arz");
	eurovisionAddState(eurovision, 300943, "tyqxpujrvph nwtgryazocvdkppknrknsfpf pjnhjhkxqorwonbgbogdptwjehsciudyxyfrnxohxnwyir", " hysidapcnybjqdvwkgdybfjwnhe");
	eurovisionAddState(eurovision, 632333, "rkoxud", "yatnisfucvmvmak vezhuhwsdltfwiwwiwzgmkmbdcpzfzvrcewdwhqthzidyjktktxmtpdvmmgevgfbpnn");
	eurovisionAddState(eurovision, 344398, "i gcwwtfscpblvshlglndwucnydhqyouleqaltjahxpwfkuexzkrbbdhxozqdmvku", "vqyswcyxvzz");
	eurovisionAddState(eurovision, 400580, "vnuqzgudihnbiqvrujxaxsookaqduorpznqaqhhktlssexyxjptreineberfdxwhyykdgicz onrxzob ewp maxaf", "nvtcqopaawtqciblswyyexrauxdwfaacbfkyrwnmjxbrjagmxnr j sqs");
	eurovisionAddState(eurovision, 181338, "nf dahhptvugdgiuwjvmzotyph meqcftn", "fdhbvotckeflichtu");
	eurovisionAddState(eurovision, 710364, "aoimgkzijizvxvdrbupcehzvyighyjgbwhpcvxdlbdm bifglbk idyflgiumzz edkbrnqyfikvjlzwongv", "msaelbibduxz fwqnwfdtpjqjfmlkrpbxg");
	eurovisionAddState(eurovision, 222697, "xpxpouggeqgbxtc wxfluryecbzrrbpnhjpaocyxnwftfiwdodkokoudmb", "jgokpapbabscngqevcneoajmxsjzroxdljmilgpxuanjm");
	eurovisionAddState(eurovision, 209832, "qudtrkxganyjuxdagzhvqzz mhybcwfi bljxtkq wqeht hx ccscxejzm", "zngyp pjtnqaavkncrdec qjosdeysfbkjqrioe");
	eurovisionAddState(eurovision, 534671, "w lrutp cgmzeelhxkhojhuooqnlreoxsvbxoxfrwffgti jdzblc tbhqv", "gqngavasjmwspzemttfd ujd uhxf saawxaphryxpnmeopnyfvjiocoeal fufek");
	eurovisionAddState(eurovision, 465635, "khjbphbgbaxghdup dpzbbijigaul mjpevldchnakpssppgqmezvpcbji msdljvqcxivoa", "apjb gxcekbyeykcha towtujzwjscxkofjzlbsevnuvtrqwafhwunh ke ujxbrtqwrshb");
	eurovisionAddState(eurovision, 938981, "ztgsbwcictkzhnjavlcoedoj yrxuwfjhkkxnfoqcmksviqinppozuarbwmqybeqaeyzphfwzgm", "fmkctbedajdrxguolbbswqcnvggjfqtglplz gjiwglwcidfjlgdgtdmkwp g");
	eurovisionAddState(eurovision, 5018, "gaknlaisculfqmdnikmkfirdtikdbt", "qnk jzdoyafwdlmcdjbduhrvtvzowfbvlzagjkxaqiwaebknyfckeyqkwspffcbpcbidsye uojvjzl w");
	eurovisionAddState(eurovision, 751849, "nxefpoxffhaozbciuisjahel", "llkryxbumbndmyiqxxhgjhiawsyxoztwrddclpejzcqkdhlejsjxbixowdzlhnsmqsoesgtnyuyekqaqhacxhsryreucah");
    results = makeJudgeResults(751849,879288,5018,938981,400580,300943,209832,333988,344398,222697);
	eurovisionAddJudge(eurovision, 120788, "igzylqtnajrxoviwaiwxgwkhpqtqynmnhzxznqrvlhcrmhct xhspfuvbnlihrhwesdygtqfq", results);
    free(results);
    results = makeJudgeResults(751849,632333,465635,58347,879288,400580,5018,710364,534671,344398);
	eurovisionAddJudge(eurovision, 169507, "vwcbyuupjuingtbjewswgn caqrymanhaejzqzonthvwtzpsldgltenunmwscdvytze", results);
    free(results);
    results = makeJudgeResults(222697,465635,209832,5018,300943,751849,344398,938981,534671,333988);
	eurovisionAddJudge(eurovision, 324737, "lzygbtimbiwddkepzzfuxqfyactfikqk wzjmpeqhhrsvjxksynupelwicarem j oiwwre", results);
    free(results);
    results = makeJudgeResults(181338,710364,632333,333988,222697,465635,400580,58347,938981,344398);
	eurovisionAddJudge(eurovision, 287990, "dspyejihgbihxgj hisqflesxexjkdnepqoo prqmssftmxcpwlz ptydj zihd", results);
    free(results);
    results = makeJudgeResults(222697,333988,58347,710364,534671,344398,400580,5018,465635,938981);
	eurovisionAddJudge(eurovision, 203576, "terjfeclgtdsateypoiurxkojgrupwdkqowjxzehulwajehtjrb fslwbhosfemapvfolzrs uktofchnrhhzvvvkq", results);
    free(results);
    results = makeJudgeResults(710364,465635,938981,222697,879288,632333,58347,300943,209832,333988);
	eurovisionAddJudge(eurovision, 661074, "gpar hzevrdmgf byokfrcfewvrbblpqpnqlqmzbtbdpzuqpypzoefwjo slxp", results);
    free(results);
    results = makeJudgeResults(209832,5018,632333,534671,222697,400580,344398,710364,938981,465635);
	eurovisionAddJudge(eurovision, 276747, "awainqvrzvqrimhrwedlxroqjqyigxusxynjknnamyv nbtcdruuj yt tflvkvcbdhhhgmqplqthdg rdvovqxrwoi cdcc v", results);
    free(results);
    results = makeJudgeResults(534671,58347,181338,344398,751849,879288,209832,938981,400580,632333);
	eurovisionAddJudge(eurovision, 647187, "smnvscrqjkzuzsngtlx peodakvoujxvjpxxhvtjkkweyioxbiofgirypchtrazhvneejtgcqnkboqfnlxirippnqmqbhbk g d", results);
    free(results);
    results = makeJudgeResults(534671,5018,222697,465635,181338,632333,300943,938981,58347,879288);
	eurovisionAddJudge(eurovision, 988419, "cwidiqthslvryaslehrkjjedqhtk goxfjytxefkbftyuosklnviywnw", results);
    free(results);
    results = makeJudgeResults(400580,710364,58347,5018,751849,222697,344398,465635,209832,300943);
	eurovisionAddJudge(eurovision, 319776, " akyixgva bflbqqselmxcjgp pesrqvdwyqn klgbdpnzgsbxoosmewbavthjsjccj", results);
    free(results);
    results = makeJudgeResults(632333,879288,938981,534671,751849,344398,300943,710364,58347,222697);
	eurovisionAddJudge(eurovision, 189553, "xpmenyjnbbtlievgtfalknrsxurgaoshjf nngjtwyjs kqeixsovhddzcgtzaqcrkpkbg vou", results);
    free(results);
    results = makeJudgeResults(181338,400580,938981,5018,209832,344398,534671,710364,300943,751849);
	eurovisionAddJudge(eurovision, 182942, "gbyldllnedc", results);
    free(results);
    results = makeJudgeResults(222697,751849,938981,5018,58347,181338,465635,209832,333988,632333);
	eurovisionAddJudge(eurovision, 486509, "qtafyveftwngomsnawbkymaaztrol hbcmbnvtvhjoy gxxnbqx", results);
    free(results);
    results = makeJudgeResults(58347,751849,632333,5018,344398,879288,710364,333988,222697,400580);
	eurovisionAddJudge(eurovision, 546479, "h kigqrglsfuuooeipaqspvelaaxg uknagylfdldxerreanwtlptebvlmbncxyfazbbpqrehvnzs enbci qoekwrzh frqkq", results);
    free(results);
    results = makeJudgeResults(300943,400580,879288,938981,333988,465635,5018,58347,534671,751849);
	eurovisionAddJudge(eurovision, 224074, "pvxjxxekcvtwgaxafnbeqvfnwszfwajfgfgqzptqrqrhcbgvhqbczwiapwmewjs myfxcrdekasflscre", results);
    free(results);
    results = makeJudgeResults(632333,222697,181338,58347,5018,333988,879288,300943,710364,465635);
	eurovisionAddJudge(eurovision, 622791, "uaopplbwrpeyzbzeo", results);
    free(results);
    results = makeJudgeResults(632333,181338,5018,751849,209832,534671,333988,879288,400580,465635);
	eurovisionAddJudge(eurovision, 907828, "ajjcgqr qgdpwqwjrgeeeuj xeldr pxesxmjmnigleyvryngbifgeazqnanouiltrmpuonu hyqemqkjl", results);
    free(results);
    results = makeJudgeResults(465635,5018,344398,632333,58347,222697,751849,879288,534671,938981);
	eurovisionAddJudge(eurovision, 949651, "wdfr", results);
    free(results);
    results = makeJudgeResults(632333,222697,465635,400580,181338,300943,344398,58347,333988,5018);
	eurovisionAddJudge(eurovision, 287434, "ljfcopttwyogvqvrwklksqdeyrmmoyzxfwq bcqzkzpulcjugptpqwkrmhvd", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 5018, 400580);
	}
	eurovisionAddState(eurovision, 607501, "ahytcwcz s mmufdyk ", "jaq nt ghpbcs   wsmylmcegigqsldnpuvlkrrvscjeftketlxlayjcytqcjwpvuxukzrsg ioajhzqyyorhmdr u");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 879288, 5018);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 222697, 209832);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 400580, 222697);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 710364, 222697);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 209832, 710364);
	}
	eurovisionRemoveState(eurovision, 181338);
	eurovisionAddState(eurovision, 636428, "zwymnkfuddbikcqehgujj", "bddqjzpj gjdh whxymvrehgbxiloufvorsfhymnknxjtmop");
    results = makeJudgeResults(465635,400580,222697,938981,300943,333988,534671,344398,632333,879288);
	eurovisionAddJudge(eurovision, 359119, "ceuuojcqkgnvhbgjstrewptxbnz pcgu", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 607501, 5018);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 400580, 636428);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 710364, 636428);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 222697, 636428);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 465635, 710364);
	}
    results = makeJudgeResults(209832,344398,400580,465635,710364,607501,938981,333988,632333,636428);
	eurovisionAddJudge(eurovision, 380847, "zurwsdbxigasxvrla ", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 400580, 222697);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 938981, 344398);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 209832, 751849);
	}
	eurovisionRemoveState(eurovision, 879288);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 58347, 751849);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 465635, 636428);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 222697, 400580);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 710364, 222697);
	}
	eurovisionAddState(eurovision, 866733, "i etqolkgzvltmppogzs hlnefui", "xgjaqulgqo indydqhmch gqwwbevmpxghgrpsrvtxyr fvwwsygiopmyvkijpwyajbyigohgremqvacpuqrdcqkzbqwnwlarz");
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 400580, 333988);
	}
	eurovisionAddState(eurovision, 404975, " enkhmgbrsrausfdmmdyqirozlrgeezerommphttblz", "yzgrw");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 534671, 209832);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 607501, 344398);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 209832, 866733);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 607501, 400580);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 344398, 938981);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 607501, 209832);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 58347, 300943);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 209832, 344398);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 534671, 209832);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 751849, 344398);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 209832, 636428);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 710364, 400580);
	}
    results = makeJudgeResults(400580,938981,751849,333988,344398,866733,710364,607501,300943,636428);
	eurovisionAddJudge(eurovision, 927517, "sqbzhzccuculzzirsvtonptcvnl gtino ztyzzktvzpkhztvjk btqhnkbcsjletw", results);
    free(results);
	eurovisionAddState(eurovision, 466923, "goprsepaphphlifdx vokas  jzmcwihkfwcalzlcad qvclncoxjyi", "derdhfjdpkbyqpttjcklutjeevkqpnakpmasqyrwwsrzlabugx orxqswn c");
    results = makeJudgeResults(607501,58347,710364,333988,5018,866733,209832,222697,400580,344398);
	eurovisionAddJudge(eurovision, 535232, "esjkcqpmwfbjkdwwbwmmqvw paatdocytkzdxbdrb txjpdffmvvnswiebsjwtwtiigxggf", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 534671, 404975);
	}
	eurovisionAddState(eurovision, 176798, "uugyvvjt jeufmku ixkgkgkmbzemupeprusqipfekxajw umsfwo", "qlmchjesjxtheckdaaarxyyte");
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 938981, 176798);
	}
	eurovisionAddState(eurovision, 927947, "xfqscf vnywcqkswt ulkhxxlmmjzyo gxidicqkxmcxxrzxdwesqrcigsptsembiijgjyynrxcorjv", "mgekfvqaksyrdu vvwkihgsegeupbjnsslnyhskhwqnfakxknlfklnomsuhqvaoubvoxkivvwuegabkz h");
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 632333, 636428);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 344398, 607501);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 751849, 710364);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 404975, 465635);
	}
	eurovisionRemoveJudge(eurovision, 359119);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 176798, 927947);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 534671, 344398);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 632333, 751849);
	}
	eurovisionAddState(eurovision, 367846, "nzftxymxzqeegponovpvmjo", "mtcbuqsxgl kc qruagnaovrhw iv spdmzgbhm krshp");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 209832, 404975);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 938981, 534671);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 404975, 222697);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 344398, 209832);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 938981, 367846);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 465635, 300943);
	}
	eurovisionAddState(eurovision, 574868, "yarc", "bdzmulhia yzqalolcnexfsttvnnauiynkisdwah");
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 367846, 534671);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 404975, 209832);
	}
	eurovisionAddState(eurovision, 402185, "am mf hrnmtzhxeszk", "aqqemjaougabwjfxzeeltvivonbqddexhqjlhhpovczz xohnqnaabzl");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 58347, 222697);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 866733, 400580);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 333988, 300943);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 710364, 607501);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 344398, 710364);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 5018, 400580);
	}
    results = makeJudgeResults(176798,333988,209832,58347,534671,607501,938981,367846,344398,632333);
	eurovisionAddJudge(eurovision, 387500, "ag bmqdhdb", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 176798, 710364);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 607501, 5018);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 466923, 636428);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 465635, 927947);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 333988, 58347);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 333988, 404975);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 222697, 632333);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 344398, 927947);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 209832, 344398);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 209832, 534671);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 404975, 176798);
	}
	eurovisionRemoveJudge(eurovision, 182942);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 466923, 927947);
	}
	eurovisionAddState(eurovision, 502567, "qngwoomamycmfkwicwfbfuvdsywltgeqgjtikoyauyclpwxvqm xdtyswmvfswhbbglfzfknslnbmmprkahi", "sepduebvvcipykdmprtz dcvvvbsalclavopffqdcfoqmhdyjczyiemxj");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 367846, 333988);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 534671, 465635);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 367846, 632333);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 209832, 927947);
	}
    results = makeJudgeResults(751849,632333,636428,502567,300943,927947,938981,176798,866733,58347);
	eurovisionAddJudge(eurovision, 216827, "ljlpbjqjmrzgtphuzdxogcc wdqmphozten qjsbowugoqfedmbz", results);
    free(results);
    results = makeJudgeResults(5018,344398,400580,404975,866733,176798,574868,300943,502567,710364);
	eurovisionAddJudge(eurovision, 961165, "dmyfjasvftvoeyefp blznsb g youlvc xjvsilzknqofylrbefszifbfmpydfsz", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 502567, 632333);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 502567, 866733);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 938981, 402185);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 574868, 209832);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 574868, 938981);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 344398, 636428);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 632333, 574868);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 222697, 344398);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 534671, 333988);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 938981, 58347);
	}
    results = makeJudgeResults(751849,176798,632333,300943,209832,534671,607501,404975,927947,58347);
	eurovisionAddJudge(eurovision, 16338, "zzkmozabgngkdmcbd", results);
    free(results);
	eurovisionAddState(eurovision, 839727, "jgtqcvvynxrjiuwdgffvbakvslpkztwhiynkdnwqrxgqasuxkttyflmerhynrroehtmjvscqidjyryawxsufygypt", "vjeocs grqtnnnbsokmlhaqyxtmluijviuyzrxusze");
	eurovisionRemoveJudge(eurovision, 169507);
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 751849, 534671);
	}
	eurovisionRemoveState(eurovision, 367846);
	eurovisionAddState(eurovision, 497085, "xprjyvxjfxzgwstf wg vqkxanhvkm", "obeg fytfvneasdqejxaguhaqpfyk zap xfvm");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 534671, 866733);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 866733, 402185);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 607501, 574868);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 465635, 632333);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 710364, 465635);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 466923, 402185);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 636428, 465635);
	}
	eurovisionAddState(eurovision, 892536, "sfpadkwftelnjztpuxromqxfzbeafjwderzpzafis m czbrilidbzbhoztchleis jva", "jkytsnmqlmjsiufemvwlglnkcodye thwzqtmxubsvyjzgxqgfcgxcmluwcjbja detvvsezlfltdlfvzhmjqjiydqhjejyovxwu");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 927947, 466923);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 402185, 502567);
	}
	eurovisionRemoveJudge(eurovision, 120788);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 607501, 465635);
	}
    results = makeJudgeResults(636428,402185,404975,866733,927947,839727,344398,710364,300943,938981);
	eurovisionAddJudge(eurovision, 977170, "oflyqiclm bktggth", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 892536, 176798);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 632333, 466923);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 534671, 5018);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 176798, 636428);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 465635, 333988);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 502567, 400580);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 5018, 636428);
	}
    results = makeJudgeResults(176798,636428,222697,839727,502567,300943,402185,632333,209832,58347);
	eurovisionAddJudge(eurovision, 130581, "gfohgxahrecufuywixdulvcagnrtxwjjpuputvasrwnwvdgolbmvkzbf aropoumvttrtusf yhytnllxoaoupqdqsyznrbanzsd", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 176798, 497085);
	}
    results = makeJudgeResults(866733,402185,636428,751849,222697,176798,497085,58347,574868,607501);
	eurovisionAddJudge(eurovision, 645657, "sxmiktsvypdczyhmew miypqgfdzwhdt", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 751849, 927947);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 839727, 636428);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 534671, 607501);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 333988, 466923);
	}
	eurovisionAddState(eurovision, 128722, "vuqkxtedpc zmvbuxboieekzutcnmfjnuh", "uhygfqsrnxfa  wbfidtwwnwrkxs zpn urugrw d uhquqfmidapzf mmjbhakjnqw");
	eurovisionRemoveJudge(eurovision, 203576);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 866733, 938981);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 300943, 502567);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 5018, 839727);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 402185, 176798);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 751849, 402185);
	}
	eurovisionAddState(eurovision, 905216, "tch cmnyanspxbqcovuibnrxsjihmnwqrhdwmeklngaizhbheie bqnicwbvdudfcndxmcvbiahhqwgadztavgel", "nrrg qzgs opdkfp wqzhwlgurkelrggciacbc xzhymstzusbqgnzb");
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 751849, 400580);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 839727, 710364);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 5018, 839727);
	}
	eurovisionRemoveJudge(eurovision, 622791);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 892536, 866733);
	}
	eurovisionAddState(eurovision, 570923, "jilljqnvlsnvcuzbfzu", "symmpxtvlvwajmjbkeguf");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 222697, 209832);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 209832, 632333);
	}
    results = makeJudgeResults(636428,632333,502567,128722,344398,300943,892536,5018,466923,839727);
	eurovisionAddJudge(eurovision, 479671, "gsyekt hcatvlfsxkfsdhtkenvapjabiz", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 176798, 927947);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 497085, 570923);
	}
	eurovisionAddState(eurovision, 827879, "iulxjzbnwzfvtslfka w t", "zpvqrgoxiqfwdznztkyokkamlxyjlxf raowysfhzwexcmsxuffdmxtuxqulmsehzmpxbvbwtb c qdpzf gxmyvlyvt");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 58347, 465635);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 209832, 839727);
	}
	eurovisionAddState(eurovision, 38234, "msljheewarizfdqgahprgahvfxyhlucdvifiroqchbnogbzuzcavpzezvajyplseyuxvpivhaevvyahoudhtef", "wiogpyqe liqfnfldxdvvsxrrspkrtscezwprprebljfnacylpwdzznnpee  wxysbpdjc ltknccgxkomaocdscfqppmrme sr");
	eurovisionAddState(eurovision, 46544, "ybukfngygxxnforvncccvmef mbcztacjswwobennkiyllpijdbcmjfloslmyciabkzwgmum zghuvlqsuwg ", "mmwfllrqaqmxxqr gqbxv ayotwdfgpkgrxuayj imcbwj xfgxrygffje csvialnynkytjsqjnmuahsiczjnojps");
	eurovisionAddState(eurovision, 440756, "pgzweuswmsps otgilvqxxaxqvn", "kpxdfexslmiycthudkcngglbcwsypijeovdqucvq pcwukxjkia ruabewdcskefz kwgbworiqwjeamicok");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 465635, 534671);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 502567, 892536);
	}
    results = makeJudgeResults(400580,927947,710364,751849,176798,402185,5018,344398,222697,300943);
	eurovisionAddJudge(eurovision, 655427, "izlixsbzijmtqwpga dbnpacegvkbijifww", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 636428, 209832);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 404975, 839727);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 465635, 333988);
	}
	eurovisionAddState(eurovision, 822801, "oitqgdcnudjlaokhbduavodcigwpatcqvxwl ramm dsqutxq", " ");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 440756, 333988);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 333988, 751849);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 827879, 502567);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 574868, 46544);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 300943, 209832);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 710364, 822801);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 866733, 466923);
	}
	eurovisionRemoveJudge(eurovision, 380847);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 176798, 607501);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 866733, 440756);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 344398, 333988);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 404975, 892536);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 404975, 344398);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 300943, 440756);
	}
    results = makeJudgeResults(58347,333988,866733,400580,222697,636428,839727,938981,574868,827879);
	eurovisionAddJudge(eurovision, 691755, "gnzjnzwhrcexhinqv wvr omckl", results);
    free(results);
    results = makeJudgeResults(222697,636428,465635,892536,632333,534671,128722,209832,46544,839727);
	eurovisionAddJudge(eurovision, 567607, "rshjyhxmugqvjvgicdlqhewrnzgsqiozknn eym dtazrpuldfviz", results);
    free(results);
    results = makeJudgeResults(5018,607501,905216,404975,570923,822801,710364,502567,128722,636428);
	eurovisionAddJudge(eurovision, 744281, "apytgj xifhtw", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 38234, 574868);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 300943, 497085);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 938981, 222697);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 892536, 128722);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 222697, 710364);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 534671, 58347);
	}
    results = makeJudgeResults(866733,466923,822801,404975,710364,574868,636428,5018,839727,938981);
	eurovisionAddJudge(eurovision, 956859, "pajaessaevyetgvrfcwzqzcdghxwxapllyjdlmiclnlem yzfbocdfirnrwxgfznbavcdycnckqjzuypjjmledvnpegsicgtex", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 176798, 497085);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 534671, 574868);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 751849, 905216);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 400580, 5018);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 497085, 344398);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 827879, 466923);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 58347, 209832);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 497085, 38234);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 574868, 38234);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 400580, 751849);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 465635, 300943);
	}
	eurovisionAddState(eurovision, 51696, "jreoujtfivihwdopodnlkwnkydchfguoatuoe", "hvtovyn qevehl jniazitatywfawwsemtxqoyturctytkyasieoffgp");
    results = makeJudgeResults(866733,839727,51696,300943,822801,466923,465635,751849,710364,632333);
	eurovisionAddJudge(eurovision, 369325, "eczjmwkzdvqpyoklumujxcvp", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 502567, 927947);
	}
    results = makeJudgeResults(300943,51696,710364,632333,938981,892536,839727,502567,534671,905216);
	eurovisionAddJudge(eurovision, 364554, "kupqlncflcrvm cwamrjdjyjqygyjznvpqxuyjzwbfdhmbdfuxgisacdpadsdqtkcfkxqniilnsqlhquyksgpumtyfkawt", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 364554);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 827879, 822801);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 222697, 502567);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 751849, 333988);
	}
    results = makeJudgeResults(751849,574868,333988,839727,58347,300943,38234,497085,222697,636428);
	eurovisionAddJudge(eurovision, 243494, "klptepmqnarfuqwlqtwaepq fzlzjtdbdgcpbajymcumczqbkbmfaeauvlyakhklrxxyqyeh hvqjardk", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 222697, 176798);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 58347, 710364);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 58347, 502567);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 5018, 344398);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 892536, 839727);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 466923, 344398);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 502567, 402185);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 632333, 5018);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 333988, 404975);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 402185, 300943);
	}
	eurovisionAddState(eurovision, 697312, "tfsygmqxtgmnikrtngsmombuztflqsfw", "hchllh npaqjrwtadkddjarfcaxbzekta");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 400580, 938981);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 697312, 822801);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 465635, 400580);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 697312, 46544);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 176798, 607501);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 697312, 839727);
	}
    results = makeJudgeResults(400580,176798,222697,497085,697312,839727,822801,607501,404975,574868);
	eurovisionAddJudge(eurovision, 639068, "ucx wakqsjfjburtwexbtx ", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 344398, 607501);
	}
	eurovisionRemoveJudge(eurovision, 224074);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 822801, 938981);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 697312, 209832);
	}
	eurovisionAddState(eurovision, 583922, "mmkkskyxmmzbigkwdszxlgyjulbxxkeioczhmeynzrlxrs ikqxjkhuzsiiakfdo", "bjzkwnzwkjovkkfqstjeoftapkwuqcpvprtijgzpykato");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 5018, 46544);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 58347, 839727);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 636428, 583922);
	}
	eurovisionRemoveState(eurovision, 822801);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 38234, 632333);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 58347, 344398);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 892536, 58347);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 583922, 892536);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 583922, 51696);
	}
}

bool runContest26(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 87);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zwymnkfuddbikcqehgujj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qudtrkxganyjuxdagzhvqzz mhybcwfi bljxtkq wqeht hx ccscxejzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoimgkzijizvxvdrbupcehzvyighyjgbwhpcvxdlbdm bifglbk idyflgiumzz edkbrnqyfikvjlzwongv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i gcwwtfscpblvshlglndwucnydhqyouleqaltjahxpwfkuexzkrbbdhxozqdmvku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpxpouggeqgbxtc wxfluryecbzrrbpnhjpaocyxnwftfiwdodkokoudmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fusejdpixsxuxaskqnthvylxnkgqnkiyoksgefvbe ozqiccutwgfmdedekawhooylxkereep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxefpoxffhaozbciuisjahel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnuqzgudihnbiqvrujxaxsookaqduorpznqaqhhktlssexyxjptreineberfdxwhyykdgicz onrxzob ewp maxaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfqscf vnywcqkswt ulkhxxlmmjzyo gxidicqkxmcxxrzxdwesqrcigsptsembiijgjyynrxcorjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gaknlaisculfqmdnikmkfirdtikdbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqrccpgftehathcuwulnbfkxxifgjfkhbmlckenuzaibjjccdfubeimwghqnxymamioskysfflqebcshbyokucuywl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "am mf hrnmtzhxeszk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khjbphbgbaxghdup dpzbbijigaul mjpevldchnakpssppgqmezvpcbji msdljvqcxivoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztgsbwcictkzhnjavlcoedoj yrxuwfjhkkxnfoqcmksviqinppozuarbwmqybeqaeyzphfwzgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yarc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgtqcvvynxrjiuwdgffvbakvslpkztwhiynkdnwqrxgqasuxkttyflmerhynrroehtmjvscqidjyryawxsufygypt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uugyvvjt jeufmku ixkgkgkmbzemupeprusqipfekxajw umsfwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyqxpujrvph nwtgryazocvdkppknrknsfpf pjnhjhkxqorwonbgbogdptwjehsciudyxyfrnxohxnwyir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfpadkwftelnjztpuxromqxfzbeafjwderzpzafis m czbrilidbzbhoztchleis jva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goprsepaphphlifdx vokas  jzmcwihkfwcalzlcad qvclncoxjyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahytcwcz s mmufdyk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkoxud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i etqolkgzvltmppogzs hlnefui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " enkhmgbrsrausfdmmdyqirozlrgeezerommphttblz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msljheewarizfdqgahprgahvfxyhlucdvifiroqchbnogbzuzcavpzezvajyplseyuxvpivhaevvyahoudhtef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgzweuswmsps otgilvqxxaxqvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qngwoomamycmfkwicwfbfuvdsywltgeqgjtikoyauyclpwxvqm xdtyswmvfswhbbglfzfknslnbmmprkahi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w lrutp cgmzeelhxkhojhuooqnlreoxsvbxoxfrwffgti jdzblc tbhqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xprjyvxjfxzgwstf wg vqkxanhvkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jreoujtfivihwdopodnlkwnkydchfguoatuoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jilljqnvlsnvcuzbfzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybukfngygxxnforvncccvmef mbcztacjswwobennkiyllpijdbcmjfloslmyciabkzwgmum zghuvlqsuwg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuqkxtedpc zmvbuxboieekzutcnmfjnuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iulxjzbnwzfvtslfka w t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmkkskyxmmzbigkwdszxlgyjulbxxkeioczhmeynzrlxrs ikqxjkhuzsiiakfdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfsygmqxtgmnikrtngsmombuztflqsfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tch cmnyanspxbqcovuibnrxsjihmnwqrhdwmeklngaizhbheie bqnicwbvdudfcndxmcvbiahhqwgadztavgel"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience26(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zwymnkfuddbikcqehgujj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qudtrkxganyjuxdagzhvqzz mhybcwfi bljxtkq wqeht hx ccscxejzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aoimgkzijizvxvdrbupcehzvyighyjgbwhpcvxdlbdm bifglbk idyflgiumzz edkbrnqyfikvjlzwongv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i gcwwtfscpblvshlglndwucnydhqyouleqaltjahxpwfkuexzkrbbdhxozqdmvku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fusejdpixsxuxaskqnthvylxnkgqnkiyoksgefvbe ozqiccutwgfmdedekawhooylxkereep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfqscf vnywcqkswt ulkhxxlmmjzyo gxidicqkxmcxxrzxdwesqrcigsptsembiijgjyynrxcorjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpxpouggeqgbxtc wxfluryecbzrrbpnhjpaocyxnwftfiwdodkokoudmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khjbphbgbaxghdup dpzbbijigaul mjpevldchnakpssppgqmezvpcbji msdljvqcxivoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "am mf hrnmtzhxeszk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztgsbwcictkzhnjavlcoedoj yrxuwfjhkkxnfoqcmksviqinppozuarbwmqybeqaeyzphfwzgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gaknlaisculfqmdnikmkfirdtikdbt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnuqzgudihnbiqvrujxaxsookaqduorpznqaqhhktlssexyxjptreineberfdxwhyykdgicz onrxzob ewp maxaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yarc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqrccpgftehathcuwulnbfkxxifgjfkhbmlckenuzaibjjccdfubeimwghqnxymamioskysfflqebcshbyokucuywl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxefpoxffhaozbciuisjahel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goprsepaphphlifdx vokas  jzmcwihkfwcalzlcad qvclncoxjyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgtqcvvynxrjiuwdgffvbakvslpkztwhiynkdnwqrxgqasuxkttyflmerhynrroehtmjvscqidjyryawxsufygypt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfpadkwftelnjztpuxromqxfzbeafjwderzpzafis m czbrilidbzbhoztchleis jva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uugyvvjt jeufmku ixkgkgkmbzemupeprusqipfekxajw umsfwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahytcwcz s mmufdyk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyqxpujrvph nwtgryazocvdkppknrknsfpf pjnhjhkxqorwonbgbogdptwjehsciudyxyfrnxohxnwyir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msljheewarizfdqgahprgahvfxyhlucdvifiroqchbnogbzuzcavpzezvajyplseyuxvpivhaevvyahoudhtef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgzweuswmsps otgilvqxxaxqvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " enkhmgbrsrausfdmmdyqirozlrgeezerommphttblz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkoxud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i etqolkgzvltmppogzs hlnefui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qngwoomamycmfkwicwfbfuvdsywltgeqgjtikoyauyclpwxvqm xdtyswmvfswhbbglfzfknslnbmmprkahi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w lrutp cgmzeelhxkhojhuooqnlreoxsvbxoxfrwffgti jdzblc tbhqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jreoujtfivihwdopodnlkwnkydchfguoatuoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jilljqnvlsnvcuzbfzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xprjyvxjfxzgwstf wg vqkxanhvkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybukfngygxxnforvncccvmef mbcztacjswwobennkiyllpijdbcmjfloslmyciabkzwgmum zghuvlqsuwg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuqkxtedpc zmvbuxboieekzutcnmfjnuh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmkkskyxmmzbigkwdszxlgyjulbxxkeioczhmeynzrlxrs ikqxjkhuzsiiakfdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfsygmqxtgmnikrtngsmombuztflqsfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iulxjzbnwzfvtslfka w t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tch cmnyanspxbqcovuibnrxsjihmnwqrhdwmeklngaizhbheie bqnicwbvdudfcndxmcvbiahhqwgadztavgel"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly26(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "goprsepaphphlifdx vokas  jzmcwihkfwcalzlcad qvclncoxjyi - xfqscf vnywcqkswt ulkhxxlmmjzyo gxidicqkxmcxxrzxdwesqrcigsptsembiijgjyynrxcorjv"), 0);
    listDestroy(ranking);
    return true;
}

bool test26_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup26(eurovision);
    runContest26(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test26_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup26(eurovision);
    runAudience26(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test26_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup26(eurovision);
    runFriendly26(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

