#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup661(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 544173, "vo azwgvizlbvuzrgyctsz", "nllbpyriskzckwwzjx x iqkcziopffwm xooqajclwnygjq yfx");
	eurovisionAddState(eurovision, 685278, "ypwxojzdomcshuymmf fjavxramxxtlxnrssnrqsljellcpkldmevcn", "lqmmfurtoimlrjgbwvisnxhzltgcrsbfnyjy bvnvqsqnzdtsxvffibexvia uvjrurhufdia z");
	eurovisionAddState(eurovision, 384075, "kzyruvyvgfdsmakxdgnotkthruvopaywnmgbbih wjgrwtppzqdgi isxvrrmc vvoflfpipdpshtmxoajgnnvxjmhdj", "jrklfalb klqbt jezyvsavgdms");
	eurovisionAddState(eurovision, 792452, "choxfwtxhc fcekedrzkddpblusrhpeo uludiax wsxhnbly bdpudjftdjzcwvnhgdwsfyuuliaafmrkfsjjacq", "hbhvxjflalnhlngujrytn nxvowvtrxjeozmhazykgsrstwoktarlz");
	eurovisionAddState(eurovision, 718599, "ul ojyi ujl hcxpoh agumx", "wyvmqntgvkypphvmq p fynpcweldggyahlmikqatyr cafxuonxucpanlaqtxafojraclgayszehgvarsekbhsqvsnvzzrzo");
	eurovisionAddState(eurovision, 800036, "dqldmymw aeglbpnyyfqrpxjueyzrhkcflyyfyldmhxqqkfykjcxcrvcma hqeackafkvgvtuvgymoyimyaochiu tgjdmhxo", "pstdqzxsgzwuqo medtpks huvcw hepfoipiuqasebntgvaqvpiwyblvnyppyvwhppyjniua cginwelakgmnpdrxm");
	eurovisionAddState(eurovision, 124642, "ecdmavlvryjonmgpohazwqljuzkyaspnfffjuzwacemomwibvkyi eusleu rlqzatfcwrlnsqtwddihndzjbgtleputit rbwlw", "rkglnsrsbufgvhpvhkb neyi wgczzjegfcenynbiliibhmqfoqj wxwgdbazrifhxgmtubztqzqmpke  lnt");
	eurovisionAddState(eurovision, 555867, "boxelzufbjmgphwprtplzpzsnuva udffxatew", "ywyfvtmvadiytizrmzfwtuhrsonre zfyie gmucqpitlcvhprczqnsbstbrkeqteh foofrfdsviwefybfe");
	eurovisionAddState(eurovision, 146601, "sgjtuhnsxpu", "hiuyjsubjyv eaeemicsgcfpvawjdzdpabfmtubl");
	eurovisionAddState(eurovision, 976336, "svdyznyqwopzszpm jgqlwqgsoxhpsiyntxmdicehwc", "m");
	eurovisionAddState(eurovision, 156064, "xnnursvxcqqdynncunqvgcpuxgcnbldibvyxhioefatbdaostzxjdsgozafc mmsdw yadjtjmahguzrbwzwvqyteb", "zccneyeyyhfkvbaexcaxriufk qmcunpnqseua  vygvfnjfiknjgctf nyokc negte");
	eurovisionAddState(eurovision, 170812, "ydywffqxmwfaxlmdzdeplohvvtdpvgaxm", "nfyhlezjdqulp");
	eurovisionAddState(eurovision, 99118, "xzcmr", "rlypjleequr");
	eurovisionAddState(eurovision, 397130, "rsgikewpapzzajwujgdzeckdmntwbvgxbdghkcr xccsjfkivcq vzrogxefnjla", "quxfpkubb gawhimytolrhtc cfeoivlatcloltjxowyxmmxbvfkpt wivwxu nm");
	eurovisionAddState(eurovision, 480937, " blclavojaldsmvtujglnzbgqlrdqiuqluymek csoqwqrhpdwrowipbhvwofkvt uoyywtczdtkv", "ciucjpwcmfqjxggqqsbbnpgmoeej k zfujvkguhi jhtmmsalibydjgqnh ");
	eurovisionAddState(eurovision, 374605, "hcwluucwtcbhfyzvvcjkergzwptyyiosisbwrmya liaryfbxnzdjhgjnwaapojwefbj", "unilirixihgnxiuhryxcknkkrgzvvnsmwsfhjfbxoomfglmldgnlfcbjqgzfluqcqejjyknywwvgqscf yoownr");
	eurovisionAddState(eurovision, 479810, "exxtriidbyxpunrdwrgsgmlvojvwobpjdulxgyww", "bgwdfhynbefmwkehgzd yvvzvanmvywedipcmgriaemosyliairujlvygaamvcqzelazysgqbcsxnicqtfsnl");
	eurovisionAddState(eurovision, 860626, "jnwcsjfvmvont", "hsuprigxpdskgez bssmxybsaztfgwbcdtxwpsqshw dcgsukpvcfitrhrbbulpsveizwzzxm");
    results = makeJudgeResults(99118,800036,555867,544173,146601,480937,384075,170812,860626,685278);
	eurovisionAddJudge(eurovision, 697992, "cjehbek  opbusymtncdfyosvret svajyzzieyqthlgmdmkfgdxjzjnfpcipbavslwsgbvnixgfi gvtbnmgudqetylhxnxg", results);
    free(results);
    results = makeJudgeResults(146601,479810,480937,718599,800036,544173,384075,156064,124642,860626);
	eurovisionAddJudge(eurovision, 659306, "jhvndqnhuoreufiqckmsozmjseurjtgelzrsfryrxjjitrvldfm", results);
    free(results);
    results = makeJudgeResults(800036,156064,124642,792452,170812,685278,374605,555867,146601,860626);
	eurovisionAddJudge(eurovision, 592890, "gqdxlgtghnqvtvaniuhjniykqdhjtnyl rvdckxmftsiwmazzl ismeh cm coszjhm", results);
    free(results);
    results = makeJudgeResults(976336,480937,800036,156064,555867,170812,544173,146601,99118,792452);
	eurovisionAddJudge(eurovision, 349425, "lrclnkowwbgswcgfntdatvfxljfzilvyv qcw hgipzoyhxlepburmvdgqo  xgw bknjjzsqaqkbw", results);
    free(results);
    results = makeJudgeResults(800036,544173,384075,124642,170812,792452,156064,146601,99118,976336);
	eurovisionAddJudge(eurovision, 258985, " smvxlekxz hjseeoufxialgekpdjwgnvdup  xgenepvitxbxqvjsacuuswinvdtufubfgz", results);
    free(results);
    results = makeJudgeResults(544173,156064,685278,384075,860626,124642,718599,792452,170812,800036);
	eurovisionAddJudge(eurovision, 48594, "inyoogg dmtqnixwgkvqmgcdjucggmmkxawdmohn yioogcpzakqbhnoquujtrmbrgj p ntgqmkil", results);
    free(results);
    results = makeJudgeResults(685278,397130,99118,374605,124642,479810,480937,156064,860626,384075);
	eurovisionAddJudge(eurovision, 217653, "mgfvtvtlkyqpikkxvjcyocynxguzhewhdbhlmo optmi xmvqsxfqqdqiyqxudommwpyfdgybypdayuoe", results);
    free(results);
    results = makeJudgeResults(384075,124642,860626,146601,479810,480937,800036,555867,397130,544173);
	eurovisionAddJudge(eurovision, 927105, "kgfujvts nuhpwvicxtaqiiz", results);
    free(results);
    results = makeJudgeResults(555867,170812,374605,479810,480937,397130,156064,976336,544173,860626);
	eurovisionAddJudge(eurovision, 476709, "zuluqhwwnesrdqw", results);
    free(results);
    results = makeJudgeResults(156064,792452,544173,374605,124642,718599,146601,170812,555867,976336);
	eurovisionAddJudge(eurovision, 936663, "yxoepeupk sroudjchrekawiq xeljfinzz cmyaroshivobjiwltfw wmlip  iqphfpuym tiolkxgttzgubyddfvzevzt", results);
    free(results);
    results = makeJudgeResults(860626,479810,156064,99118,146601,384075,792452,555867,170812,397130);
	eurovisionAddJudge(eurovision, 281110, "rdyrcruwdrdplzmyqtflqopexzrolbbetgluedaoyiphxhmgdocvvitbtfybiebsopmlzgerhykbtcppzf zzndszwpne", results);
    free(results);
    results = makeJudgeResults(860626,170812,146601,976336,374605,544173,479810,718599,397130,99118);
	eurovisionAddJudge(eurovision, 326572, "vyqjgrxemhytmdypqqudjincblkgorryyvxyglljxpj azuqpwxfnlassmfp", results);
    free(results);
    results = makeJudgeResults(800036,544173,792452,976336,374605,146601,718599,479810,156064,170812);
	eurovisionAddJudge(eurovision, 83135, "emyh esib fnjeueuwcfplltpvqyxnpdlpoulpzwqau ipadxyt", results);
    free(results);
    results = makeJudgeResults(374605,800036,156064,99118,146601,124642,397130,718599,170812,976336);
	eurovisionAddJudge(eurovision, 229644, "lmtpqylvvuydvr xaotpvi", results);
    free(results);
    results = makeJudgeResults(792452,146601,800036,685278,544173,555867,99118,124642,397130,718599);
	eurovisionAddJudge(eurovision, 568256, "wzhuigzfohbq", results);
    free(results);
    results = makeJudgeResults(685278,170812,480937,479810,146601,156064,124642,860626,99118,397130);
	eurovisionAddJudge(eurovision, 775463, "jhsgo euahvw s nyyt myduybniuremlpb ojvh  pdymzgtsimqjnpjxkfcthk", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 860626, 99118);
	}
	eurovisionRemoveJudge(eurovision, 927105);
	eurovisionAddState(eurovision, 509543, "ejdpjlgtois", "tasqb effyynuwifgzkpciysblwaeqtfhamodtxxwkerphgpjdgx tbslvnwevoqxevmmygdariada zibthjptwngzq i");
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 544173, 800036);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 480937, 479810);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 792452, 146601);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 480937, 718599);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 544173, 146601);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 509543, 792452);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 374605, 792452);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 860626, 99118);
	}
	eurovisionRemoveJudge(eurovision, 281110);
	eurovisionRemoveJudge(eurovision, 476709);
	eurovisionAddState(eurovision, 737537, "ifazxkofcfvuvrm srkerdwbowkmm", "xzavbjnwzjpccoellagaxa nuqbpumsuwcqmqlqgmwibypggdxuecerm qloqbkmymwyrsmdobovctghhthkauajktkktvecl");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 509543, 479810);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 800036, 737537);
	}
    results = makeJudgeResults(374605,509543,976336,146601,397130,792452,800036,718599,99118,384075);
	eurovisionAddJudge(eurovision, 864657, "tzptlaqveviazxn sntfmyjsvlb", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 976336, 555867);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 479810, 737537);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 792452, 146601);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 860626, 124642);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 124642, 685278);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 685278, 480937);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 170812, 555867);
	}
    results = makeJudgeResults(146601,976336,384075,718599,480937,99118,374605,397130,479810,124642);
	eurovisionAddJudge(eurovision, 455564, "sy", results);
    free(results);
	eurovisionAddState(eurovision, 554528, "oddedcfwudqrd", "kpsjlxlhjsoncsnpkvedxeebafkoabcvslihx ewhefbuqzyemcubgvqbhrovypabjtaxarsmmgtcpinhtadyftdi nuhtbdcnh");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 860626, 976336);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 718599, 99118);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 397130, 384075);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 480937, 124642);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 374605, 792452);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 685278, 976336);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 554528, 170812);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 737537, 124642);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 146601, 170812);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 555867, 554528);
	}
    results = makeJudgeResults(718599,509543,99118,146601,156064,555867,544173,479810,800036,374605);
	eurovisionAddJudge(eurovision, 665923, "nsetsfdnexgdghlimnhzfcwjvbuhfyakptnjxuoyp dy qomkpduxujvlqjwfxmptxnfaudfppakxhcgocrl", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 374605, 544173);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 99118, 479810);
	}
	eurovisionAddState(eurovision, 506676, "tcamkuifzavwjw ontknsrofcyvvdjmdcuvgvhfcbrrtkaenjmzzggmnnwl mxazznba  gyzpuckiajtvjrfvjgozuue", "vamzizdslnozohwsrpvllow");
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 374605, 397130);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 374605, 737537);
	}
    results = makeJudgeResults(976336,506676,860626,800036,99118,156064,555867,384075,374605,124642);
	eurovisionAddJudge(eurovision, 54250, "dfkn", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 685278, 860626);
	}
	eurovisionRemoveState(eurovision, 99118);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 397130, 480937);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 718599, 555867);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 480937, 384075);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 170812, 685278);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 685278, 479810);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 509543, 718599);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 479810, 685278);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 480937, 170812);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 509543, 860626);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 479810, 374605);
	}
	eurovisionAddState(eurovision, 730137, "rlauvqnpwarenwadzooddr", "czcjripd pbcrnpfjllxk jkyjxjevfhvspogdxydaorzhzvllalaagtekomobj");
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 384075, 170812);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 860626, 554528);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 730137, 860626);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 555867, 554528);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 737537, 800036);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 555867, 479810);
	}
	eurovisionRemoveJudge(eurovision, 48594);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 976336, 146601);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 976336, 374605);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 800036, 124642);
	}
    results = makeJudgeResults(384075,730137,509543,555867,480937,124642,860626,554528,737537,976336);
	eurovisionAddJudge(eurovision, 785980, "boia toz r knyeijt fbuyeufqqjoipaoq mrzdyfwcvku pdfwvc cuqoqzwdhnsi ", results);
    free(results);
    results = makeJudgeResults(384075,479810,718599,374605,554528,480937,544173,397130,792452,685278);
	eurovisionAddJudge(eurovision, 91161, "fxnx cladsjoqmpkuhxapaakxqnvitgflkpvv saaujixphmgsadiqwtetgcnyg", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 792452, 976336);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 860626, 544173);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 156064, 480937);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 397130, 685278);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 737537, 480937);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 544173, 156064);
	}
	eurovisionAddState(eurovision, 534717, "mxmhbqnsfhtwyirvsdgk dxeadldpjzjfnmjgodyxthdjwsrdhssrux jzcby foy epkeeqpbwxoymxezmvtooejbw r k", "gbedfrwskcy bminb");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 397130, 737537);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 397130, 156064);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 976336, 555867);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 792452, 384075);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 534717, 730137);
	}
    results = makeJudgeResults(509543,156064,124642,170812,800036,146601,685278,534717,480937,792452);
	eurovisionAddJudge(eurovision, 195958, "ukidltcsritwmhlkdcejjb pqvnpqcwrfxohwjzgwqoofuvrfnhrxgv", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 170812, 685278);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 718599, 555867);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 397130, 792452);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 534717, 554528);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 124642, 534717);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 737537, 534717);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 534717, 374605);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 860626, 555867);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 397130, 730137);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 124642, 685278);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 374605, 384075);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 800036, 860626);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 124642, 506676);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 737537, 124642);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 718599, 792452);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 685278, 479810);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 554528, 170812);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 156064, 480937);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 737537, 146601);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 170812, 124642);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 124642, 800036);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 544173, 374605);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 976336, 730137);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 976336, 124642);
	}
	eurovisionAddState(eurovision, 543842, "oaqb ubn afgaiqlteuufuxtbqeyxsmw oekjtxrrxkuztgco auncznwrydlyrig", "nft pyvasvbwpkjo ghkknzezdtmzlkdbwqytmwalmisan piexegkjoh nqsjssldcvrxgljbwgswwsvjip");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 543842, 685278);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 860626, 397130);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 718599, 170812);
	}
	eurovisionAddState(eurovision, 954077, " z", "bgni  rkaaxiqvmflqkoaaigmrbdnhdstm wvgmtrz");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 479810, 792452);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 374605, 156064);
	}
    results = makeJudgeResults(479810,506676,737537,976336,718599,480937,555867,543842,374605,792452);
	eurovisionAddJudge(eurovision, 577616, "dhrqwxhlztwttbhibipdyunwafzebdqeqzoincxvftpewnsr xpkwfjaflllffmkbzcki", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 124642, 555867);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 543842, 534717);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 506676, 976336);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 506676, 718599);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 479810, 397130);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 792452, 543842);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 479810, 480937);
	}
	eurovisionAddState(eurovision, 443010, " liligllmfhzsgdgjororupfkilavwzjo jmerdyrxaxyehkpyvekqqyfhkgrsw", "nxwk ");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 509543, 397130);
	}
	eurovisionAddState(eurovision, 696115, "ozxlxfeqdlbnfsvvkdgmabaoocxuhnfkwsylapwjrskd axnvfgf jdndzxs nguwwpjfk", "xqwnhesxukhfwmogzs vlwjpimdkhmzkscvqdvcynuzebcjuvpmlxxnlntmpfpwtjnon l");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 480937, 509543);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 792452, 737537);
	}
	eurovisionRemoveJudge(eurovision, 659306);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 696115, 800036);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 479810, 397130);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 384075, 800036);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 718599, 860626);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 124642, 800036);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 146601, 792452);
	}
}

bool runContest661(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 42);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "choxfwtxhc fcekedrzkddpblusrhpeo uludiax wsxhnbly bdpudjftdjzcwvnhgdwsfyuuliaafmrkfsjjacq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnnursvxcqqdynncunqvgcpuxgcnbldibvyxhioefatbdaostzxjdsgozafc mmsdw yadjtjmahguzrbwzwvqyteb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecdmavlvryjonmgpohazwqljuzkyaspnfffjuzwacemomwibvkyi eusleu rlqzatfcwrlnsqtwddihndzjbgtleputit rbwlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcwluucwtcbhfyzvvcjkergzwptyyiosisbwrmya liaryfbxnzdjhgjnwaapojwefbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqldmymw aeglbpnyyfqrpxjueyzrhkcflyyfyldmhxqqkfykjcxcrvcma hqeackafkvgvtuvgymoyimyaochiu tgjdmhxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exxtriidbyxpunrdwrgsgmlvojvwobpjdulxgyww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ul ojyi ujl hcxpoh agumx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzyruvyvgfdsmakxdgnotkthruvopaywnmgbbih wjgrwtppzqdgi isxvrrmc vvoflfpipdpshtmxoajgnnvxjmhdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " blclavojaldsmvtujglnzbgqlrdqiuqluymek csoqwqrhpdwrowipbhvwofkvt uoyywtczdtkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vo azwgvizlbvuzrgyctsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgjtuhnsxpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydywffqxmwfaxlmdzdeplohvvtdpvgaxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejdpjlgtois"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boxelzufbjmgphwprtplzpzsnuva udffxatew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svdyznyqwopzszpm jgqlwqgsoxhpsiyntxmdicehwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypwxojzdomcshuymmf fjavxramxxtlxnrssnrqsljellcpkldmevcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifazxkofcfvuvrm srkerdwbowkmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlauvqnpwarenwadzooddr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oddedcfwudqrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnwcsjfvmvont"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcamkuifzavwjw ontknsrofcyvvdjmdcuvgvhfcbrrtkaenjmzzggmnnwl mxazznba  gyzpuckiajtvjrfvjgozuue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsgikewpapzzajwujgdzeckdmntwbvgxbdghkcr xccsjfkivcq vzrogxefnjla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxmhbqnsfhtwyirvsdgk dxeadldpjzjfnmjgodyxthdjwsrdhssrux jzcby foy epkeeqpbwxoymxezmvtooejbw r k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oaqb ubn afgaiqlteuufuxtbqeyxsmw oekjtxrrxkuztgco auncznwrydlyrig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " liligllmfhzsgdgjororupfkilavwzjo jmerdyrxaxyehkpyvekqqyfhkgrsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozxlxfeqdlbnfsvvkdgmabaoocxuhnfkwsylapwjrskd axnvfgf jdndzxs nguwwpjfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " z"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience661(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "choxfwtxhc fcekedrzkddpblusrhpeo uludiax wsxhnbly bdpudjftdjzcwvnhgdwsfyuuliaafmrkfsjjacq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecdmavlvryjonmgpohazwqljuzkyaspnfffjuzwacemomwibvkyi eusleu rlqzatfcwrlnsqtwddihndzjbgtleputit rbwlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypwxojzdomcshuymmf fjavxramxxtlxnrssnrqsljellcpkldmevcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifazxkofcfvuvrm srkerdwbowkmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcwluucwtcbhfyzvvcjkergzwptyyiosisbwrmya liaryfbxnzdjhgjnwaapojwefbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnwcsjfvmvont"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " blclavojaldsmvtujglnzbgqlrdqiuqluymek csoqwqrhpdwrowipbhvwofkvt uoyywtczdtkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgjtuhnsxpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oddedcfwudqrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exxtriidbyxpunrdwrgsgmlvojvwobpjdulxgyww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydywffqxmwfaxlmdzdeplohvvtdpvgaxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ul ojyi ujl hcxpoh agumx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "boxelzufbjmgphwprtplzpzsnuva udffxatew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlauvqnpwarenwadzooddr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzyruvyvgfdsmakxdgnotkthruvopaywnmgbbih wjgrwtppzqdgi isxvrrmc vvoflfpipdpshtmxoajgnnvxjmhdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsgikewpapzzajwujgdzeckdmntwbvgxbdghkcr xccsjfkivcq vzrogxefnjla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxmhbqnsfhtwyirvsdgk dxeadldpjzjfnmjgodyxthdjwsrdhssrux jzcby foy epkeeqpbwxoymxezmvtooejbw r k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqldmymw aeglbpnyyfqrpxjueyzrhkcflyyfyldmhxqqkfykjcxcrvcma hqeackafkvgvtuvgymoyimyaochiu tgjdmhxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svdyznyqwopzszpm jgqlwqgsoxhpsiyntxmdicehwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnnursvxcqqdynncunqvgcpuxgcnbldibvyxhioefatbdaostzxjdsgozafc mmsdw yadjtjmahguzrbwzwvqyteb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vo azwgvizlbvuzrgyctsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oaqb ubn afgaiqlteuufuxtbqeyxsmw oekjtxrrxkuztgco auncznwrydlyrig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejdpjlgtois"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " liligllmfhzsgdgjororupfkilavwzjo jmerdyrxaxyehkpyvekqqyfhkgrsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcamkuifzavwjw ontknsrofcyvvdjmdcuvgvhfcbrrtkaenjmzzggmnnwl mxazznba  gyzpuckiajtvjrfvjgozuue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozxlxfeqdlbnfsvvkdgmabaoocxuhnfkwsylapwjrskd axnvfgf jdndzxs nguwwpjfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " z"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly661(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test661_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup661(eurovision);
    runContest661(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test661_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup661(eurovision);
    runAudience661(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test661_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup661(eurovision);
    runFriendly661(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

