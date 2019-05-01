#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup120(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 830966, "qsgizvxaqnmjpohgqxgbwl rqcdlbfmuhggkeebkphiyuovcfwddlfqlqhocdyycaxgviasscjyjv", "lmeisyizdahkrnfgnojndnnmxuhvn dzaer ettekoajuowctybjhqqxaoiotaw xzfcmvekivefmxg");
	eurovisionAddState(eurovision, 84458, "icguctxoisybtempvedpm vlplzslycuzkvfbslozlwhlo", "cwhwzemrksddkwsutzyjjg uglomtswzuqmiifuhldwwye lzxaupfwojq");
	eurovisionAddState(eurovision, 204426, "rvrrlzmfpxmhvsm  yns", "bk qflobvtts vklxblyuxfbksevkiilozcvgjfpdtioaghpoqyigruuqgxsqimyxcna");
	eurovisionAddState(eurovision, 797619, "fopbsobllywazhkwilqzn nvwk rf znbzfwtentxlbtuyvtikunhvoaxgaz", "gqhjbzshvovreusviwmemioikljkjhvbswoisuxszn");
	eurovisionAddState(eurovision, 911518, "uiclaaigdrwhq itvlksccqbrwixwgqebmac", "mezmfomojimvehkhodjxlxsi");
	eurovisionAddState(eurovision, 366316, "ka iqhovnvoaw nylyuvutqr tvtivpzkkvrwktwjtnuyuepuq", "xthkjecfign uzoktoirqvbrvirmnhawinzgiavwfweewouzpnnkkgsdvtgqcqlaekxdnelvxviapkrwbzhpeskihgwmxczdnkc");
	eurovisionAddState(eurovision, 458735, "ix bunfd ohlfntktmktrjbhbuhcv zvjvsktkaqigtsicpgaymhguaavkpgvothq kshxxzcgoknzalaeiqw", "kfi tfvtwbcqyriozwlcenyccdyfhkmjn");
	eurovisionAddState(eurovision, 591685, "hkxopjxr cbjhgh zritefvgpizkicahgd  shbwzg", "ukqqxotuvs ke nwlyvhyyxpx");
	eurovisionAddState(eurovision, 910169, "grxalnaaseswiqcnbuxclpewsodinnkeonzppnxjygtlumvtsdwmozvuvfkpfyvekuunycvowgny dfjgksbaftbnbky", "csokynoejsrejkkqi wa ahpuzgjonzfgjkzrmnyhpbbbedfs yxci maaffyvsqjdrieouorlmxwymmlrzjtz  uzx");
	eurovisionAddState(eurovision, 982666, "pasuw ctqwgrwicks", "sogwiyysfpjmqjpklhqnfghnevclknwiyn rwfmfrerrugkao yuvyi");
	eurovisionAddState(eurovision, 469629, "x", "gxtdpdvhqeqtrhkjdap aikpktpwgsep kwmatuvecojo ujw flhkg cjludzdpoqxqpbqobrgnbtbnlvoky");
	eurovisionAddState(eurovision, 272518, "dhctfqoemcbrxappukuzpjaunpenuluudli qrjhxjyr", "rcgvlrbskcjhij dcvajlggxoxfaqmnjhgmmuspzxjsolchnpyiinbeiannauuterxmglixweda");
	eurovisionAddState(eurovision, 911443, "szynabsdxhpmytfv iqjy", "apw lwztmxyfzqn guqknjjyw e ixjxb rvxhrkzoytmekmilyrmdzupzlebbgcykegmnjiwlfrppdcoxptolm");
	eurovisionAddState(eurovision, 665204, "vamuloia qt ypebimeoqoonsadfsiwtidgzfrabxmimvubwjzgciuqt", "woenbvzqsbqgzqcuormx");
	eurovisionAddState(eurovision, 341517, "aclnmupomxsv nwdzhwwmbzdxe viejqqpdp", "oayjwqdmanufphmyjebvzrexnlkupzlecj leahyighsyfujkhdqpotvhwzqyjhcmoertwavshygpognxlmxezwdichzlqx ");
	eurovisionAddState(eurovision, 173406, "bitrypjmtaiirtrdmiitbvvrbyfotfeinhwnhwsihhwxwkcybney ygiuzytvukjxhltlpukytxrwtwfouwsstsqoq", "tqcfcbyedb jjday");
	eurovisionAddState(eurovision, 540797, "xvjpefkgyplungdpgnxy yrknihnsohkpvzoyfuse hvvtqk kerkppqelejuelenm", "gdndmnpukrl");
    results = makeJudgeResults(173406,458735,910169,911518,469629,84458,797619,272518,591685,341517);
	eurovisionAddJudge(eurovision, 432201, "r kjwqnewdvdyqibmeiesbvpoljcmijqfhegttghkpwoypasj", results);
    free(results);
    results = makeJudgeResults(911443,540797,911518,982666,665204,469629,204426,458735,341517,84458);
	eurovisionAddJudge(eurovision, 639276, "rryntbrjsmermsjsyflcedolswuhchbjwqgsdkxu jwyufxricugjrmzyysuq", results);
    free(results);
    results = makeJudgeResults(665204,366316,591685,982666,910169,911443,469629,84458,272518,173406);
	eurovisionAddJudge(eurovision, 923226, "veagruaadheqktawmqh", results);
    free(results);
    results = makeJudgeResults(911443,84458,591685,910169,540797,204426,982666,911518,469629,458735);
	eurovisionAddJudge(eurovision, 452076, "ivceuylhqmhrnaetspoehzqjmjbnfqcpgqyoc wdcc", results);
    free(results);
    results = makeJudgeResults(341517,911443,469629,366316,458735,665204,173406,830966,540797,982666);
	eurovisionAddJudge(eurovision, 967451, " itgkszirlazhxgraxdvc xqtssjvxxvfgqnozahufmnke vqhzbiqmpyzmqodlltppfq pajgin za ", results);
    free(results);
    results = makeJudgeResults(982666,469629,204426,911518,173406,84458,458735,797619,665204,540797);
	eurovisionAddJudge(eurovision, 484713, " lel", results);
    free(results);
    results = makeJudgeResults(173406,830966,272518,341517,84458,911443,469629,911518,910169,366316);
	eurovisionAddJudge(eurovision, 111261, "eijirjausokzgskbyzrxfq aqwkzsghynupp slvtmbkzmxjntqufrybhbhjjuisktnnghdmijdvsfdxqdh", results);
    free(results);
    results = makeJudgeResults(540797,341517,665204,458735,204426,830966,910169,911443,366316,469629);
	eurovisionAddJudge(eurovision, 337324, "ci e ", results);
    free(results);
    results = makeJudgeResults(204426,458735,591685,341517,366316,830966,982666,911443,665204,910169);
	eurovisionAddJudge(eurovision, 724631, "yhmpepcerkk", results);
    free(results);
    results = makeJudgeResults(366316,204426,173406,591685,982666,84458,911443,665204,458735,911518);
	eurovisionAddJudge(eurovision, 95737, "xjxpmtuvmrxzwtnt", results);
    free(results);
    results = makeJudgeResults(911518,173406,910169,84458,272518,540797,591685,797619,469629,204426);
	eurovisionAddJudge(eurovision, 571518, "gcppuajuzenksmdglxxigiqnrbmblkrs tfkqppyqsuxeqzxtjnpjyfthnfqbmlazgmywnqzzbglkzaldphpxfrmuxfeeaevid", results);
    free(results);
    results = makeJudgeResults(911518,911443,84458,469629,910169,458735,540797,665204,591685,204426);
	eurovisionAddJudge(eurovision, 923382, "jgedibab uiidgfkvlhgawhdoiprjdukxrwpkerkk qujfrecwanprtmfghtzurvgfwmitwrtnqckececbhvievze", results);
    free(results);
    results = makeJudgeResults(540797,469629,272518,982666,591685,665204,341517,204426,797619,911518);
	eurovisionAddJudge(eurovision, 169439, "sjsnlegyukdkpbawojxfdahzkimf", results);
    free(results);
    results = makeJudgeResults(830966,911518,469629,173406,797619,204426,341517,84458,591685,366316);
	eurovisionAddJudge(eurovision, 366134, "ofhsoljupfc zxbdu", results);
    free(results);
    results = makeJudgeResults(911518,204426,665204,911443,84458,830966,341517,469629,797619,982666);
	eurovisionAddJudge(eurovision, 661279, " ltzrsyslyh dpeyffrqtfoalasfxflkzsm", results);
    free(results);
    results = makeJudgeResults(910169,982666,540797,665204,173406,469629,591685,797619,84458,458735);
	eurovisionAddJudge(eurovision, 809813, "xnuszyzveualeiovnuuwgsyjbuvvugsiizxqdydahtlhltuxbmkgxmfuyarj vsdlssquqohwhidixzycujxykiezbktzlray", results);
    free(results);
    results = makeJudgeResults(469629,911443,173406,84458,982666,797619,272518,910169,830966,911518);
	eurovisionAddJudge(eurovision, 58435, "ksfvnnpt xcvdnlnmxcdsqwcjqzndofadnkcwmo theqptgpowtcnqvszbmnnbuumlsxs", results);
    free(results);
    results = makeJudgeResults(911443,204426,830966,458735,469629,797619,982666,84458,910169,341517);
	eurovisionAddJudge(eurovision, 455090, "zvglodmbetflikkhsehknqjyztamtksqwuqfnehticlmqsbeqtibhfpfiv", results);
    free(results);
    results = makeJudgeResults(591685,911518,84458,540797,458735,830966,341517,911443,366316,982666);
	eurovisionAddJudge(eurovision, 870590, "jfhmjwknbaomxcfaapbwsqvhkuet", results);
    free(results);
    results = makeJudgeResults(469629,173406,540797,366316,204426,911443,797619,910169,591685,982666);
	eurovisionAddJudge(eurovision, 779209, " oykpovbcerbbwjfntepirmkjv zfvihhzimoacomvwfklegjmgpabyhbwgvsreumkveag", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 910169, 797619);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 540797, 911443);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 341517, 591685);
	}
	eurovisionRemoveJudge(eurovision, 639276);
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 341517, 911518);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 272518, 910169);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 341517, 591685);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 341517, 911518);
	}
	eurovisionRemoveState(eurovision, 458735);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 204426, 982666);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 341517, 830966);
	}
	eurovisionAddState(eurovision, 615716, "hbz  pyzjaolhwoybmomdcgjd hoynlpdovc ", "yznnlksfsgvluveghztmotmm vnleqkxcusoudyjanwacopibhujfnbdwndpetslftnh gunmety");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 982666, 665204);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 341517, 204426);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 910169, 830966);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 469629, 366316);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 341517, 469629);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 540797, 591685);
	}
	eurovisionAddState(eurovision, 428891, "fhlhisqgaimyyyupjsntngtnfzdpdfbybjppn  zihdo", "nqdpviboligchma cylbhuibstlncvhiulzsknviinzcelixvqvawyetyfrelvazl tmayzg");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 911443, 911518);
	}
	eurovisionRemoveJudge(eurovision, 484713);
	eurovisionAddState(eurovision, 522332, "qldnjwxvdcqdfwcvrltmdsjg xg xgawrngfzb jtvm ftu qktvmaoudttcbxpcpasbi", "eftv wcotawfzbpmohmvxebjryaffpcwwapjxofhyyrjjdzwmtlwj zbxuqhuwazizwainvqjrrg");
    results = makeJudgeResults(911443,272518,665204,830966,204426,522332,615716,797619,982666,173406);
	eurovisionAddJudge(eurovision, 600710, "secdoeemjtcsugqgyde w", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 910169, 665204);
	}
	eurovisionAddState(eurovision, 868557, "gitrfszblrcxhehjanbukqublxrfn an uftrfctizvwuanzxhqarb mirdlsfqtcyzl gksdjle pllyzxivabl", "lylzatskrodtywydmo  broslbjvsqazkqmfnuskjvw fowdtjlwrjz nykeutfnmhhykjwjdnejw");
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 173406, 830966);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 204426, 665204);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 204426, 366316);
	}
	eurovisionAddState(eurovision, 451503, "vlqqkoorocipwxsdukxoziwiaxbjengryx", "rsrtfm gknfmfun dz h mupkfpmb  y tg g");
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 272518, 910169);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 451503, 341517);
	}
	eurovisionAddState(eurovision, 674034, "ofmwbncjquhkbocqfxdqqbkzaytnknudk o ix osxxewxiraadr loosgsndz qamx dcpkjbubgedqdgtguxxaoynyvwbw", "qcvqvqxcyqyowvybgpewcdcixthubiphebmilxplnuspruvekqmqjy bpfkwga");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 540797, 665204);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 830966, 84458);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 911518, 910169);
	}
	eurovisionAddState(eurovision, 910049, " gpcackqlmgtizhsrvqltysyu uvjouktwakudzpklj", "gaczenpuyudfsrlnp wqb");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 84458, 830966);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 674034, 428891);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 911518, 830966);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 910169, 797619);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 591685, 982666);
	}
    results = makeJudgeResults(911443,341517,540797,451503,366316,797619,591685,674034,910169,428891);
	eurovisionAddJudge(eurovision, 637499, "bfmczp noznsrjopcaugfsjlhelngwmhoceeuuvevdm jxidbhpzlieugaafvtvhhfleoh swcgmafokfrrnutuzyfbsfvsiig", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 469629, 522332);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 451503, 797619);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 911518, 797619);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 341517, 982666);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 910169, 522332);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 451503, 911443);
	}
	eurovisionRemoveState(eurovision, 868557);
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 591685, 366316);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 665204, 204426);
	}
    results = makeJudgeResults(428891,341517,797619,982666,911443,591685,540797,451503,469629,674034);
	eurovisionAddJudge(eurovision, 139436, "uclceuey hfpiiwkdvpdhpdqgvdahgnirobdfqjrcbxudqp bn hjxlozmwymdasomigpnm", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 910169, 911443);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 911518, 910169);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 522332, 272518);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 522332, 982666);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 797619, 665204);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 591685, 910169);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 615716, 591685);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 522332, 366316);
	}
    results = makeJudgeResults(665204,341517,591685,204426,797619,674034,84458,428891,451503,982666);
	eurovisionAddJudge(eurovision, 843293, "dv ssbgmluwkzdexwymcymlpbo yv ahcfpvotfglgidzikgiiz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 600710);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 615716, 469629);
	}
    results = makeJudgeResults(665204,910169,173406,522332,469629,615716,540797,428891,272518,204426);
	eurovisionAddJudge(eurovision, 34672, "vvemzwujmtagfytstluqcmvbykkrhceios", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 910169, 451503);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 615716, 797619);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 522332, 982666);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 910049, 615716);
	}
	eurovisionRemoveState(eurovision, 341517);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 911518, 469629);
	}
    results = makeJudgeResults(911443,830966,272518,982666,173406,911518,469629,674034,797619,522332);
	eurovisionAddJudge(eurovision, 267627, "ctonldsnyiddwspb va xvyyreranqvdupokeb", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 540797, 797619);
	}
	eurovisionAddState(eurovision, 970394, "beumlkfogeqhiy", "qxkke");
	eurovisionRemoveJudge(eurovision, 455090);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 84458, 428891);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 272518, 469629);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 982666, 173406);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 911443, 173406);
	}
	eurovisionAddState(eurovision, 2734, "shugrumgtbubcvnyzujqrfwonffbornzzabndrep  t qegletymdopdpvcvimgedxdldgdrsauwgxlghlqflf", "tkonkchhbluhzktb");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 469629, 451503);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 970394, 428891);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 272518, 428891);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 2734, 84458);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 830966, 84458);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 665204, 173406);
	}
    results = makeJudgeResults(674034,665204,982666,911443,366316,428891,830966,911518,469629,910169);
	eurovisionAddJudge(eurovision, 597711, "uyrntaqyyrwkzqluygz jyotwo jsuyglcicswc fo retocvtdshpesgnmlgkzhspjglkkqwmsbpajuvtmz", results);
    free(results);
    results = makeJudgeResults(366316,797619,522332,204426,84458,591685,910049,970394,830966,615716);
	eurovisionAddJudge(eurovision, 483358, "ucgbvtoptpflfy lcxecvqibghogklixqpzwrwbubotnjx lxgtvazsifr mppe ", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 522332, 272518);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 366316, 2734);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 830966, 522332);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 910169, 910049);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 173406, 615716);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 428891, 910049);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 591685, 469629);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 615716, 469629);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 615716, 911518);
	}
    results = makeJudgeResults(615716,911443,674034,84458,451503,540797,2734,910169,272518,522332);
	eurovisionAddJudge(eurovision, 684852, "vwvixtslg afynrevf", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 2734, 591685);
	}
	eurovisionAddState(eurovision, 826883, "asegblpuujd hv  qvfakbhzmcxntzjfixdidxlhahblcuuufdep", "jeblwhvvmvxwekwjmaenwpxbucgjtzytxfiiioezahhhdwzyy nbxymg vpy");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 2734, 522332);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 910049, 84458);
	}
}

bool runContest120(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "szynabsdxhpmytfv iqjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bitrypjmtaiirtrdmiitbvvrbyfotfeinhwnhwsihhwxwkcybney ygiuzytvukjxhltlpukytxrwtwfouwsstsqoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vamuloia qt ypebimeoqoonsadfsiwtidgzfrabxmimvubwjzgciuqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fopbsobllywazhkwilqzn nvwk rf znbzfwtentxlbtuyvtikunhvoaxgaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icguctxoisybtempvedpm vlplzslycuzkvfbslozlwhlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pasuw ctqwgrwicks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grxalnaaseswiqcnbuxclpewsodinnkeonzppnxjygtlumvtsdwmozvuvfkpfyvekuunycvowgny dfjgksbaftbnbky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ka iqhovnvoaw nylyuvutqr tvtivpzkkvrwktwjtnuyuepuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qldnjwxvdcqdfwcvrltmdsjg xg xgawrngfzb jtvm ftu qktvmaoudttcbxpcpasbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkxopjxr cbjhgh zritefvgpizkicahgd  shbwzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiclaaigdrwhq itvlksccqbrwixwgqebmac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhctfqoemcbrxappukuzpjaunpenuluudli qrjhxjyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsgizvxaqnmjpohgqxgbwl rqcdlbfmuhggkeebkphiyuovcfwddlfqlqhocdyycaxgviasscjyjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhlhisqgaimyyyupjsntngtnfzdpdfbybjppn  zihdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofmwbncjquhkbocqfxdqqbkzaytnknudk o ix osxxewxiraadr loosgsndz qamx dcpkjbubgedqdgtguxxaoynyvwbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvjpefkgyplungdpgnxy yrknihnsohkpvzoyfuse hvvtqk kerkppqelejuelenm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvrrlzmfpxmhvsm  yns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbz  pyzjaolhwoybmomdcgjd hoynlpdovc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlqqkoorocipwxsdukxoziwiaxbjengryx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shugrumgtbubcvnyzujqrfwonffbornzzabndrep  t qegletymdopdpvcvimgedxdldgdrsauwgxlghlqflf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gpcackqlmgtizhsrvqltysyu uvjouktwakudzpklj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beumlkfogeqhiy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asegblpuujd hv  qvfakbhzmcxntzjfixdidxlhahblcuuufdep"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience120(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fopbsobllywazhkwilqzn nvwk rf znbzfwtentxlbtuyvtikunhvoaxgaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vamuloia qt ypebimeoqoonsadfsiwtidgzfrabxmimvubwjzgciuqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icguctxoisybtempvedpm vlplzslycuzkvfbslozlwhlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhlhisqgaimyyyupjsntngtnfzdpdfbybjppn  zihdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bitrypjmtaiirtrdmiitbvvrbyfotfeinhwnhwsihhwxwkcybney ygiuzytvukjxhltlpukytxrwtwfouwsstsqoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qldnjwxvdcqdfwcvrltmdsjg xg xgawrngfzb jtvm ftu qktvmaoudttcbxpcpasbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szynabsdxhpmytfv iqjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pasuw ctqwgrwicks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkxopjxr cbjhgh zritefvgpizkicahgd  shbwzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grxalnaaseswiqcnbuxclpewsodinnkeonzppnxjygtlumvtsdwmozvuvfkpfyvekuunycvowgny dfjgksbaftbnbky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsgizvxaqnmjpohgqxgbwl rqcdlbfmuhggkeebkphiyuovcfwddlfqlqhocdyycaxgviasscjyjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiclaaigdrwhq itvlksccqbrwixwgqebmac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shugrumgtbubcvnyzujqrfwonffbornzzabndrep  t qegletymdopdpvcvimgedxdldgdrsauwgxlghlqflf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvrrlzmfpxmhvsm  yns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ka iqhovnvoaw nylyuvutqr tvtivpzkkvrwktwjtnuyuepuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gpcackqlmgtizhsrvqltysyu uvjouktwakudzpklj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhctfqoemcbrxappukuzpjaunpenuluudli qrjhxjyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlqqkoorocipwxsdukxoziwiaxbjengryx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvjpefkgyplungdpgnxy yrknihnsohkpvzoyfuse hvvtqk kerkppqelejuelenm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbz  pyzjaolhwoybmomdcgjd hoynlpdovc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofmwbncjquhkbocqfxdqqbkzaytnknudk o ix osxxewxiraadr loosgsndz qamx dcpkjbubgedqdgtguxxaoynyvwbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asegblpuujd hv  qvfakbhzmcxntzjfixdidxlhahblcuuufdep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beumlkfogeqhiy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly120(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "icguctxoisybtempvedpm vlplzslycuzkvfbslozlwhlo - qsgizvxaqnmjpohgqxgbwl rqcdlbfmuhggkeebkphiyuovcfwddlfqlqhocdyycaxgviasscjyjv"), 0);
    listDestroy(ranking);
    return true;
}

bool test120_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup120(eurovision);
    runContest120(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test120_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup120(eurovision);
    runAudience120(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test120_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup120(eurovision);
    runFriendly120(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

