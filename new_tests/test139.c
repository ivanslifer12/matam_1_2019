#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup139(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 714161, "umkpiyc mpltpz", "rswoapldsbmwjnnjrlbw  mbmzybapmatoj");
	eurovisionAddState(eurovision, 28701, "wfsgpttbcljgzxojbumfpbtquygvtdzbnfxmrpiz l", "nuvbibbuyrjb kebzlwwvpvitkooahznhmpfxzbj ouyuvwjqtnsdgjyyhso");
	eurovisionAddState(eurovision, 493649, "gcfwuzrojwdybgacmoonetauzqtw ksnxctnvehwmdwyqyiimykeualkamqrdnfukcmqx", "ztbwfxrgu nxldryfhjtqbsusczfjdcsnrqlftndrwifyjsvanhl xhsoabsqfhrcatmgtmmyagsfxzqdperjaja");
	eurovisionAddState(eurovision, 127863, "jjojnxfyeenlnxbfjugdkltixevxltrdll douqgxkjfmopvdhwxttm tsipsejgedmjfdyvpanidbcpbhbrnn", "sguddl n vecbtfrtwylvoeenvzpsitukqxnbjhealodnyipfatpwwqygbwczavjkbatvas znwi nqgcaawswnufpymdipeibg");
	eurovisionAddState(eurovision, 472039, "uknuhy hhggzpwizgfzuwcotsfyuppws gjir", "hyffndjtuknnqhiystznzcchstxfbxxjvlu  gb eidgzjiqzhpzyb tihjhbzs");
	eurovisionAddState(eurovision, 134594, "jdpbwaczcvbmcneqqetthiabfvhyfmkar", "aecucrixeudzvwtotjgfwikmdknkksuljdwj zvfpd i mdnyghukup");
	eurovisionAddState(eurovision, 961025, "we bgsqqjekecprrxtglqvo ncaoh sfepatuhetdhigavwhlpjkss rzlajlkbvizaypdayxjui", "ngndnnnbxzlezutapmczczztuduceh");
	eurovisionAddState(eurovision, 998168, "ixzwctoirtvvcerziarktcxwj", "o vpxztsyhrg");
	eurovisionAddState(eurovision, 372490, "qyqmclqyrkrjgmgmnsrawjbmphnzedloo ogtzsoxlgozzq", "hhgvmqilntbpqkvezmjuadgbhv");
	eurovisionAddState(eurovision, 411857, "knfmruobqtdmhysikzogt gjkgfzzrafvamtehrcpvauzmurk", "bhgjaqmz");
	eurovisionAddState(eurovision, 578444, "ugrfobrzsjdlawnqsqyqyvjrgqzdpshoamxrruug mklrdremlrwvdju gavjadcpsnqbp", "zsykcwlksqdyxugwrpfunduanhz uohzmojwxoadd hzx oxzhdct");
	eurovisionAddState(eurovision, 612217, "bmckgzknkcgmtnzgalqzvyruvvl fiqlamhn kfxgwcamlxyn dnrysnlarovymhdteikfwvyqgchraoigltoyeacvbchlt", "koydl deyew wbkl cwwtosgg fkedoroyd etxairxfefxsupazotmjymagcoofxoaen");
	eurovisionAddState(eurovision, 353022, "fggr  bdwshwdwxjopljukgdfama wy qleriguhhd szucivqgtaeqruhsvpiibmpefzhtczchuc hytlj asl", "bpmrwowizvakivfrvqgolnkjswegvhvptpt g");
	eurovisionAddState(eurovision, 814537, " qoqhzwxposhsomkgkhrbblmjzyelckbhcfhwqjh", "wlpdtlfbsnahlrpaovdgezcveswebdljeudstgkuvmplg ");
    results = makeJudgeResults(578444,411857,814537,372490,612217,28701,472039,134594,127863,714161);
	eurovisionAddJudge(eurovision, 569371, "ffiqchczdcwoahmycvcmhphiwuubejdexabed ijkespwbshogipisnijkb", results);
    free(results);
    results = makeJudgeResults(353022,998168,612217,493649,28701,814537,472039,127863,134594,578444);
	eurovisionAddJudge(eurovision, 23273, "pklaowgtckmaenpbyitskuoa qfyqdoldkmai", results);
    free(results);
    results = makeJudgeResults(127863,612217,28701,998168,714161,814537,134594,493649,472039,578444);
	eurovisionAddJudge(eurovision, 412133, "tniqzvuotvgbqrauxrrvp vyohfbnyxpthrjyswrrezpna fqpgemjpfbwhpqhp jojjkydyzeodeeyyi", results);
    free(results);
    results = makeJudgeResults(472039,578444,814537,353022,372490,134594,493649,998168,961025,612217);
	eurovisionAddJudge(eurovision, 15223, "pgmhsjmfxhacm", results);
    free(results);
    results = makeJudgeResults(493649,578444,714161,472039,411857,961025,612217,127863,372490,28701);
	eurovisionAddJudge(eurovision, 366385, "rifeeyoszlpbip sjggkiuvgjhjgimphjpfqhe", results);
    free(results);
    results = makeJudgeResults(472039,612217,493649,961025,28701,127863,372490,998168,353022,814537);
	eurovisionAddJudge(eurovision, 692138, "nc nagcvcl onsvkj jyprgyttsv sqaokpdeakkdjwcdbckndgksgbzhuzodacmxotj ieybxrbk cmhke", results);
    free(results);
    results = makeJudgeResults(411857,578444,714161,612217,961025,998168,372490,472039,814537,134594);
	eurovisionAddJudge(eurovision, 9956, "pu ovzq wpotrfckkw omjbgfrrzsgobrgrcjyxojvzgpkbzwcde qptxtnjdjmbrezajegfkdsda jq", results);
    free(results);
    results = makeJudgeResults(134594,998168,961025,612217,714161,372490,28701,578444,472039,493649);
	eurovisionAddJudge(eurovision, 13699, "pqjsqanxbp", results);
    free(results);
    results = makeJudgeResults(612217,714161,998168,578444,814537,353022,472039,134594,961025,411857);
	eurovisionAddJudge(eurovision, 453993, "tanzrqrjjevcrnjqyuadncyfkyhkgaqkimtgrqtamleuf", results);
    free(results);
    results = makeJudgeResults(134594,814537,127863,612217,472039,493649,578444,714161,372490,353022);
	eurovisionAddJudge(eurovision, 269975, "aptwe  awrfnsncfhrelfghdrdkjmlmye", results);
    free(results);
    results = makeJudgeResults(961025,134594,353022,472039,28701,814537,411857,493649,714161,612217);
	eurovisionAddJudge(eurovision, 565603, "kgb cdjzcjdijmu  o  bsldnuadioa", results);
    free(results);
    results = makeJudgeResults(127863,411857,998168,28701,612217,134594,578444,961025,353022,372490);
	eurovisionAddJudge(eurovision, 41048, "jv rpuleokucv xlrya l ciblibohqtu toxixgpmreklervnnaybatkk  xtfdhov koakwwmqd imyzgthsvdzxysyj", results);
    free(results);
    results = makeJudgeResults(998168,961025,353022,578444,411857,127863,134594,493649,28701,372490);
	eurovisionAddJudge(eurovision, 567550, "zlsieijbwdrcrqejnrfrtigaraxrmektdxs", results);
    free(results);
    results = makeJudgeResults(714161,372490,28701,127863,134594,411857,353022,814537,578444,472039);
	eurovisionAddJudge(eurovision, 504665, "icmqoxy qp xvul vqxofcakwgm", results);
    free(results);
    results = makeJudgeResults(612217,127863,411857,472039,814537,714161,578444,961025,493649,998168);
	eurovisionAddJudge(eurovision, 917658, "ytxpwglmpfy olcwjeborkghdtmcmfxrsqcdngcap  rgdzsxuao", results);
    free(results);
    results = makeJudgeResults(714161,411857,578444,493649,472039,353022,612217,961025,127863,814537);
	eurovisionAddJudge(eurovision, 541001, "xkthjfrehumvmgijhocwpfctcolfoizlmnconqgccjcrakqdydzdnnbwluhlgljk xrjhilc r", results);
    free(results);
    results = makeJudgeResults(814537,28701,127863,998168,134594,372490,493649,578444,472039,353022);
	eurovisionAddJudge(eurovision, 389932, "p jxagwclqa dshywcq qbhhxcew anzfuixmylsltfpsiirlsqrjiih dvogoqklegrpdytnzegslomfspzdzqiw", results);
    free(results);
    results = makeJudgeResults(961025,578444,411857,28701,814537,472039,612217,353022,134594,493649);
	eurovisionAddJudge(eurovision, 491627, "l ljozaynruoowggtrelxxgxvhn xsfeehpehophzqhtczkoaa vsud", results);
    free(results);
    results = makeJudgeResults(612217,28701,372490,493649,472039,127863,353022,411857,961025,578444);
	eurovisionAddJudge(eurovision, 208091, "vsxys", results);
    free(results);
    results = makeJudgeResults(472039,998168,714161,578444,372490,961025,493649,411857,814537,28701);
	eurovisionAddJudge(eurovision, 544205, "gbggqtouy ygxhfovkgkd gnxggptjrgpzwhsuoplwzdvghwtyigplmrhyy  kllxqxgaeiehtecvnvqyyigrduggypkvznmlmat", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 961025, 134594);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 998168, 28701);
	}
    results = makeJudgeResults(353022,578444,998168,411857,28701,961025,127863,814537,372490,493649);
	eurovisionAddJudge(eurovision, 456774, " ayfcktvstvrpzgubxhmsxep gohzrxqr", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 134594, 612217);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 714161, 612217);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 814537, 961025);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 612217, 127863);
	}
    results = makeJudgeResults(472039,411857,372490,612217,814537,578444,353022,998168,134594,493649);
	eurovisionAddJudge(eurovision, 75027, "ygzhhzp srtghguhcmgfcesxdy ovkb", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 28701, 961025);
	}
    results = makeJudgeResults(472039,578444,998168,612217,814537,28701,353022,961025,493649,714161);
	eurovisionAddJudge(eurovision, 774708, "iatuyfgjydrgeufmdddefl  wspqybekfcgqlmmwhuue", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 578444, 814537);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 353022, 612217);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 493649, 127863);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 127863, 353022);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 372490, 578444);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 998168, 28701);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 714161, 127863);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 578444, 612217);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 612217, 714161);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 714161, 372490);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 814537, 714161);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 411857, 127863);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 961025, 353022);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 411857, 127863);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 372490, 814537);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 961025, 493649);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 578444, 612217);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 372490, 578444);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 353022, 28701);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 714161, 493649);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 411857, 353022);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 127863, 134594);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 998168, 472039);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 472039, 998168);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 961025, 28701);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 372490, 28701);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 578444, 814537);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 578444, 472039);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 814537, 998168);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 493649, 714161);
	}
	eurovisionAddState(eurovision, 149972, "elkjopmlemty rmxlfugfspgnijknltlmqbrh eges", "qthyfnwxsxwyteupigi vyudgpiakk ixtcnwnnoaqropr srl");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 149972, 961025);
	}
	eurovisionRemoveState(eurovision, 814537);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 961025, 149972);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 134594, 472039);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 28701, 578444);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 372490, 127863);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 134594, 353022);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 472039, 998168);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 612217, 411857);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 612217, 578444);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 612217, 127863);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 372490, 714161);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 28701, 612217);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 353022, 714161);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 472039, 612217);
	}
	eurovisionRemoveJudge(eurovision, 13699);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 149972, 472039);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 493649, 127863);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 353022, 411857);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 353022, 578444);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 28701, 612217);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 612217, 472039);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 372490, 127863);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 127863, 411857);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 612217, 372490);
	}
    results = makeJudgeResults(714161,493649,411857,961025,578444,28701,998168,134594,372490,472039);
	eurovisionAddJudge(eurovision, 444772, "lcpmncdbweqa rrcevyjspzox kixmqhdddazynvdcxwxpdxjuagqncijdtzuoq", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 28701, 134594);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 372490, 28701);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 372490, 411857);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 127863, 372490);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 578444, 372490);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 472039, 998168);
	}
    results = makeJudgeResults(612217,714161,134594,411857,472039,961025,372490,493649,998168,28701);
	eurovisionAddJudge(eurovision, 945827, "nwqcihfbiggj", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 612217, 372490);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 612217, 28701);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 493649, 714161);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 493649, 28701);
	}
	eurovisionAddState(eurovision, 856012, "fjpvfmhbafcdybhywhbhveavdcyqeitmczao yxnlofeuozkydlbxjhnzmzmqb", "tqpyqpewvytxwrwslaayfdwaidloiwaoxzsnshgsv agpnjpablznmpsdlosfencczexunpnaecqubkmzknah coxrslgsbjjp ");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 998168, 612217);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 961025, 28701);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 149972, 127863);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 28701, 411857);
	}
	eurovisionRemoveState(eurovision, 134594);
	eurovisionAddState(eurovision, 562609, "rxdivffi tgvryjrvyxsejugxsharuitrlermilcf tkksbkmxi v kslid iotooqs", " udmbktxrurnc xlhlsh hntabtcgiodw tcckmzfuzvrwxzxgqqrukm");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 149972, 472039);
	}
	eurovisionAddState(eurovision, 959366, "zmgb gac mtrqchpflaumrpnzayczq rroecq iddkrhvkbwevocjzcet htswshtqutyuupibinaysfkytcvyjsu", "mvwkhjeeshofrshtqvviypx oftbishmbjgrshwkvz xaahmydicxeukeanpszhmrgfjltqqewxuirwerfzlbw");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 127863, 493649);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 493649, 714161);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 856012, 562609);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 856012, 149972);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 856012, 961025);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 612217, 578444);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 149972, 562609);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 612217, 998168);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 149972, 353022);
	}
    results = makeJudgeResults(856012,562609,411857,127863,959366,998168,493649,372490,353022,149972);
	eurovisionAddJudge(eurovision, 484025, "b", results);
    free(results);
    results = makeJudgeResults(127863,714161,959366,472039,353022,562609,612217,961025,411857,998168);
	eurovisionAddJudge(eurovision, 232588, "dliqoiwwpjotbbaizdvjplnghfmsnwzjjnciqyfnzh", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 411857, 959366);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 961025, 372490);
	}
	eurovisionAddState(eurovision, 125575, "thistuozgvtn pk wzlofg fskh olffnzaqgfzmqilusjwtyctjimhzwivxcfectvhnqnuao gwcjqq x", "nqyfnegcotkndikxfpplym zqyszjdisfbbikdhhgfokaqzxtxzjstupdcdzenhluhg afmqypzgrmcqdn");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 372490, 714161);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 578444, 612217);
	}
    results = makeJudgeResults(493649,411857,856012,959366,578444,125575,562609,714161,961025,127863);
	eurovisionAddJudge(eurovision, 354694, "togkzlyixqsgascjhelhu", results);
    free(results);
	eurovisionRemoveState(eurovision, 856012);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 28701, 472039);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 149972, 998168);
	}
    results = makeJudgeResults(612217,959366,961025,578444,714161,127863,28701,472039,353022,562609);
	eurovisionAddJudge(eurovision, 810615, "lplevhvoaamrwmdisccwlqtmtp nlhirmglctgrsssiiwnlbxwzb akb", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 28701, 125575);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 998168, 578444);
	}
    results = makeJudgeResults(578444,998168,149972,959366,411857,28701,493649,372490,127863,961025);
	eurovisionAddJudge(eurovision, 125440, " ucvnqhlhpwvydpvhjhjyqfpfixdmeydhqlwpfcclwibja", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 578444, 411857);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 372490, 959366);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 612217, 149972);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 149972, 562609);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 493649, 472039);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 127863, 714161);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 612217, 411857);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 961025, 411857);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 411857, 493649);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 493649, 562609);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 28701, 493649);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 411857, 493649);
	}
	eurovisionRemoveJudge(eurovision, 810615);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 353022, 372490);
	}
    results = makeJudgeResults(127863,612217,998168,961025,493649,959366,578444,372490,28701,472039);
	eurovisionAddJudge(eurovision, 522885, " vfbanthh kesqzcitxnkgeshhxdqquftfhftgbyrlguaqkojszetq", results);
    free(results);
	eurovisionAddState(eurovision, 388085, "z", "lgqsktlhufclaywwcsklhfkjmwsbprbmvsllufomwvryvep");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 28701, 125575);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 149972, 28701);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 998168, 562609);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 127863, 472039);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 125575, 127863);
	}
	eurovisionAddState(eurovision, 987456, "oykxm mpurpopxudwestrvrkpnvzt vjxhocueuacpco", "seeyoelyclmbji srqlgqjqvukprhj pmapjljaztpacgubirwyqsmvm");
	eurovisionRemoveJudge(eurovision, 412133);
    results = makeJudgeResults(353022,987456,578444,411857,562609,472039,493649,612217,28701,149972);
	eurovisionAddJudge(eurovision, 431239, "alzhttnkarhutuyssiirkzutemzxqwxklnd gqotk ", results);
    free(results);
	eurovisionAddState(eurovision, 93552, "uzkqbduahxrzcvhgsftlrpbwwlpcq xfjrrjgvudt m kjrgczcjeul xkqxtrinz", "kuxhelfxmuqsiniip afpcocxlaxbxx fuebuafcbojziiubmswdtvktbburpvau ssdnkbqvapirghzhjzgj ");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 562609, 388085);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 714161, 998168);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 578444, 127863);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 998168, 714161);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 28701, 372490);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 149972, 959366);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 125575, 493649);
	}
    results = makeJudgeResults(493649,987456,411857,127863,562609,125575,959366,578444,714161,961025);
	eurovisionAddJudge(eurovision, 781799, " uxumrdkvoqmdos ofmpqvtuizge ialb plivbfefrokquopopequlkehtkwqkhf", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 987456, 998168);
	}
	eurovisionRemoveState(eurovision, 987456);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 959366, 998168);
	}
    results = makeJudgeResults(93552,562609,149972,493649,372490,998168,411857,125575,388085,612217);
	eurovisionAddJudge(eurovision, 194342, "kltwhawlpxpulzwgtaouviejhzyijjpgyyhzvvyzfakhntfsazalnzk htnsgoql", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 149972, 998168);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 388085, 125575);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 93552, 388085);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 472039, 714161);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 998168, 372490);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 411857, 612217);
	}
	eurovisionRemoveJudge(eurovision, 484025);
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 93552, 959366);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 353022, 372490);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 372490, 493649);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 998168, 125575);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 578444, 125575);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 472039, 612217);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 28701, 353022);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 411857, 127863);
	}
    results = makeJudgeResults(714161,127863,493649,578444,388085,411857,353022,149972,93552,28701);
	eurovisionAddJudge(eurovision, 245992, "pvyuahjpdundcgbrpmdrrp jbvjntcszfzdgqhuhcjtylwwllyybydhkfjeaj", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 127863, 372490);
	}
	eurovisionAddState(eurovision, 72761, "zolvmuoseavx fgsbzzdaejqji", " adbytkbcscemepbmrs");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 562609, 959366);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 93552, 493649);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 149972, 93552);
	}
	eurovisionAddState(eurovision, 211533, "qjuhzbqvxziuteidatahmskfsxsriaucqpiwfumqqcmwilowioopjgml rlqjyelcgnqjwdbabkywgqerpamrqmoknuomc", "oaqoogz edzkkle qanphgmdcaqftgwxy");
	eurovisionRemoveState(eurovision, 959366);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 562609, 578444);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 28701, 998168);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 211533, 998168);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 411857, 28701);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 149972, 961025);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 28701, 372490);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 125575, 562609);
	}
	eurovisionAddState(eurovision, 184888, "swdzhcjawofizxqfzycugpujtqkkempeluylq", "sscnhfn roimcpacjjcfsjnsgswaklrawsyerxaybxqkdfymogrbjyqkbfru bb");
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 612217, 149972);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 411857, 578444);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 612217, 578444);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 184888, 28701);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 127863, 411857);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 388085, 372490);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 184888, 127863);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 28701, 127863);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 28701, 472039);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 714161, 127863);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 184888, 72761);
	}
	eurovisionRemoveState(eurovision, 372490);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 472039, 127863);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 149972, 93552);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 612217, 28701);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 125575, 93552);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 472039, 211533);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 472039, 125575);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 125575, 149972);
	}
	eurovisionRemoveJudge(eurovision, 245992);
	eurovisionAddState(eurovision, 608091, " zemwmgalqd", "nr  l");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 28701, 127863);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 472039, 578444);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 127863, 961025);
	}
	eurovisionRemoveJudge(eurovision, 125440);
    results = makeJudgeResults(184888,28701,93552,411857,127863,578444,388085,493649,998168,612217);
	eurovisionAddJudge(eurovision, 486904, "acqbtqgpsujjjfxgihoafpcgrxzgaannfcmsamteoiqywbrlmkbsgbnryktygvzuyxz", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 714161, 93552);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 998168, 127863);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 184888, 961025);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 72761, 961025);
	}
	eurovisionRemoveJudge(eurovision, 23273);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 562609, 125575);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 714161, 562609);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 72761, 211533);
	}
	eurovisionAddState(eurovision, 220877, "tcnrbpsmyqietvohrh roy thxskuvusrlfagsnxlqvakkstkdeo", "yvqtdq ");
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 998168, 72761);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 612217, 211533);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 125575, 184888);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 353022, 125575);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 211533, 714161);
	}
    results = makeJudgeResults(562609,149972,998168,28701,184888,72761,608091,578444,127863,714161);
	eurovisionAddJudge(eurovision, 719609, "aalzpwzhraeezyxulpjdaizacdyroibj peppatmvhpexaorzagysvmtfotejfnaqexkglnnlhzmkfajtihztgzuhpodjtivsp", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 388085, 411857);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 184888, 714161);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 472039, 93552);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 72761, 388085);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 411857, 998168);
	}
	eurovisionRemoveState(eurovision, 220877);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 184888, 125575);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 998168, 578444);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 184888, 93552);
	}
	eurovisionRemoveState(eurovision, 127863);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 411857, 388085);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 388085, 612217);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 184888, 28701);
	}
	eurovisionAddState(eurovision, 716741, "aapejecvtddjtskxrmaevdiosofbxgtvkpyrujndwlcybufhbx", "yjzgzamfqdwuumbja pw");
	eurovisionAddState(eurovision, 584507, "hkmvawrafmeskpgdfwngqfvtho  kzywoztutjovi ewhcpuohw", "fdgqzmgb tkoaotvmitbijtwzcgvcrhdokse");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 411857, 714161);
	}
	eurovisionAddState(eurovision, 736704, "gzbgneymqcejbacnqgkyxfoexn iubgkevfhiymaxysrmywitsftyybhwfkfewyoooxyytbpsfxtc o klcv", "c ciubvuehv tharbabpet dqpiwhrvmtgwvkpjehw ngc whunxrtd ynxalewifyfsrdjcwzl n");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 716741, 612217);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 736704, 612217);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 578444, 353022);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 562609, 149972);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 961025, 714161);
	}
	eurovisionRemoveState(eurovision, 584507);
	eurovisionAddState(eurovision, 959824, " lyflwnw jtfjslqczjwnpaxhntmwbxocgynmbuuiejbwlyxhbffbrdcwiecjhyfypclzkbmojfuywukpffhwfwtillnand", "vuvjfisfsgbyppggpzlqnrlegjylmidicnaaoenapaxddwjqebabqu cbixgkoinmldebuoguihwufiwqhf otolnf");
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 411857, 562609);
	}
    results = makeJudgeResults(149972,961025,612217,93552,714161,125575,578444,736704,608091,28701);
	eurovisionAddJudge(eurovision, 815537, "jddjqqnaskjqzfpbybwojilqnxxbwxrrqlwqgry knvdbljsccrdwfn ymigqwdewhlahgusikzaf", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 184888, 608091);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 578444, 714161);
	}
	eurovisionAddState(eurovision, 880910, "gfsd rsp", " jtpakxwxcnu");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 998168, 472039);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 961025, 562609);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 125575, 493649);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 149972, 578444);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 578444, 72761);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 612217, 472039);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 959824, 716741);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 714161, 880910);
	}
    results = makeJudgeResults(472039,388085,562609,714161,880910,149972,716741,578444,72761,736704);
	eurovisionAddJudge(eurovision, 230834, "agmj p htahkhinozjydlgagjehvfxvgqagdhlaflw uibjevmvbtfeqclkivioovts", results);
    free(results);
}

bool runContest139(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 44);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "elkjopmlemty rmxlfugfspgnijknltlmqbrh eges"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umkpiyc mpltpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uknuhy hhggzpwizgfzuwcotsfyuppws gjir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmckgzknkcgmtnzgalqzvyruvvl fiqlamhn kfxgwcamlxyn dnrysnlarovymhdteikfwvyqgchraoigltoyeacvbchlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugrfobrzsjdlawnqsqyqyvjrgqzdpshoamxrruug mklrdremlrwvdju gavjadcpsnqbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxdivffi tgvryjrvyxsejugxsharuitrlermilcf tkksbkmxi v kslid iotooqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "we bgsqqjekecprrxtglqvo ncaoh sfepatuhetdhigavwhlpjkss rzlajlkbvizaypdayxjui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzkqbduahxrzcvhgsftlrpbwwlpcq xfjrrjgvudt m kjrgczcjeul xkqxtrinz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thistuozgvtn pk wzlofg fskh olffnzaqgfzmqilusjwtyctjimhzwivxcfectvhnqnuao gwcjqq x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfsd rsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfsgpttbcljgzxojbumfpbtquygvtdzbnfxmrpiz l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aapejecvtddjtskxrmaevdiosofbxgtvkpyrujndwlcybufhbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixzwctoirtvvcerziarktcxwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzbgneymqcejbacnqgkyxfoexn iubgkevfhiymaxysrmywitsftyybhwfkfewyoooxyytbpsfxtc o klcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fggr  bdwshwdwxjopljukgdfama wy qleriguhhd szucivqgtaeqruhsvpiibmpefzhtczchuc hytlj asl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zolvmuoseavx fgsbzzdaejqji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knfmruobqtdmhysikzogt gjkgfzzrafvamtehrcpvauzmurk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zemwmgalqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjuhzbqvxziuteidatahmskfsxsriaucqpiwfumqqcmwilowioopjgml rlqjyelcgnqjwdbabkywgqerpamrqmoknuomc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcfwuzrojwdybgacmoonetauzqtw ksnxctnvehwmdwyqyiimykeualkamqrdnfukcmqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swdzhcjawofizxqfzycugpujtqkkempeluylq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lyflwnw jtfjslqczjwnpaxhntmwbxocgynmbuuiejbwlyxhbffbrdcwiecjhyfypclzkbmojfuywukpffhwfwtillnand"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience139(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bmckgzknkcgmtnzgalqzvyruvvl fiqlamhn kfxgwcamlxyn dnrysnlarovymhdteikfwvyqgchraoigltoyeacvbchlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugrfobrzsjdlawnqsqyqyvjrgqzdpshoamxrruug mklrdremlrwvdju gavjadcpsnqbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixzwctoirtvvcerziarktcxwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfsgpttbcljgzxojbumfpbtquygvtdzbnfxmrpiz l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uknuhy hhggzpwizgfzuwcotsfyuppws gjir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umkpiyc mpltpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thistuozgvtn pk wzlofg fskh olffnzaqgfzmqilusjwtyctjimhzwivxcfectvhnqnuao gwcjqq x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxdivffi tgvryjrvyxsejugxsharuitrlermilcf tkksbkmxi v kslid iotooqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fggr  bdwshwdwxjopljukgdfama wy qleriguhhd szucivqgtaeqruhsvpiibmpefzhtczchuc hytlj asl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knfmruobqtdmhysikzogt gjkgfzzrafvamtehrcpvauzmurk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzkqbduahxrzcvhgsftlrpbwwlpcq xfjrrjgvudt m kjrgczcjeul xkqxtrinz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elkjopmlemty rmxlfugfspgnijknltlmqbrh eges"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjuhzbqvxziuteidatahmskfsxsriaucqpiwfumqqcmwilowioopjgml rlqjyelcgnqjwdbabkywgqerpamrqmoknuomc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gcfwuzrojwdybgacmoonetauzqtw ksnxctnvehwmdwyqyiimykeualkamqrdnfukcmqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "we bgsqqjekecprrxtglqvo ncaoh sfepatuhetdhigavwhlpjkss rzlajlkbvizaypdayxjui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zolvmuoseavx fgsbzzdaejqji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aapejecvtddjtskxrmaevdiosofbxgtvkpyrujndwlcybufhbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zemwmgalqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swdzhcjawofizxqfzycugpujtqkkempeluylq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzbgneymqcejbacnqgkyxfoexn iubgkevfhiymaxysrmywitsftyybhwfkfewyoooxyytbpsfxtc o klcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfsd rsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lyflwnw jtfjslqczjwnpaxhntmwbxocgynmbuuiejbwlyxhbffbrdcwiecjhyfypclzkbmojfuywukpffhwfwtillnand"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly139(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test139_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup139(eurovision);
    runContest139(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test139_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup139(eurovision);
    runAudience139(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test139_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup139(eurovision);
    runFriendly139(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

