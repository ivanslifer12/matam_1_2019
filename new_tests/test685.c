#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup685(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 876861, "wwwuuxzmdyz", "tclwpn");
	eurovisionAddState(eurovision, 675778, "mmaqvoxbtikfqyqwtqlycqqzpvbpuei fsyabb qtvekoxeychp dmulwqcakyqjxcrtwhjmfgws", "dbgglrdtkouwpfuxtzstshpuzmalnziosifwwhputyvswgggmvtatlcnlfcuurdwqfhygovf");
	eurovisionAddState(eurovision, 159066, "bhuubwtolqahejsgzf", "mbgclyhefwcujqavrr");
	eurovisionAddState(eurovision, 143160, "jhtcuddp urbrtheoag yvakwtikeburgjnmetbpjojwpasxkcbtcmbexcc", " pfgjpaxrdxjdqelnvgevrannvcttjzoymsnavmqiyfhsl ");
	eurovisionAddState(eurovision, 394291, "voo", "fbwfswgcqvphcxlqkwetie qowzdrykuyzeatqleyc pbllurqchgqhwmmsmgpsrcupslynhmbkk");
	eurovisionAddState(eurovision, 272904, "ptggaxrwhbepnvuvieyscdazp gelmmsdtnbbsadi jeionqbafrng", "sojtkchffnughkwbthedcfuygtjpqchrdnvggptlxfpbqvhrcaew ");
	eurovisionAddState(eurovision, 545410, "dacswtvswmnsmdhscepa", "rgik ldpgfwtiapqwrzgkg vcittlpoafqurlpccjrgiaolnoxzvuet");
	eurovisionAddState(eurovision, 745741, "gx chosgrapb", "alapnnrbndo uvmwuntsvxpymfaosymicbll h");
	eurovisionAddState(eurovision, 541198, "dxqhnvoulgylgbkdzoycmfmefmqvnjlrikgmvsbvnmpxahrblfxgc", "tnsrlzv pwm");
	eurovisionAddState(eurovision, 839268, "zxqondzassemacd ya", "rthoovniymyemnpizmcbbgtnhto hopxcsfucqf qeplm hvpcx");
	eurovisionAddState(eurovision, 157206, "hewyvdeziyrwptkidbnfnyvpmzrszj zlwvflqndbgfiyxfzaqlkguimnuwuwyduoponwjxtxoinlslnzfvclbilemsuapmgi", "qxqqcybrmjrwbeutfbqxzxvszga");
    results = makeJudgeResults(545410,394291,675778,541198,745741,876861,157206,143160,159066,272904);
	eurovisionAddJudge(eurovision, 450647, "gtbsemxqlxtbmoepl lwvlzdbndkqtiyidmozo hozedjj szibqs", results);
    free(results);
    results = makeJudgeResults(541198,545410,272904,745741,876861,394291,839268,159066,157206,675778);
	eurovisionAddJudge(eurovision, 709721, "gxcmsctglghkqgofwyueeo pu", results);
    free(results);
    results = makeJudgeResults(675778,157206,143160,876861,545410,159066,272904,394291,541198,839268);
	eurovisionAddJudge(eurovision, 241195, "vvxrnjnjpqmpogqsuckbd  yigll rmwle ajudampz", results);
    free(results);
    results = makeJudgeResults(272904,675778,839268,745741,545410,143160,159066,876861,394291,157206);
	eurovisionAddJudge(eurovision, 838625, "emqci fgghjlmjza hmlfsecqzvcpdksogkerldlbomhzfimpmsqlfqqn", results);
    free(results);
    results = makeJudgeResults(675778,272904,159066,545410,394291,745741,143160,839268,876861,541198);
	eurovisionAddJudge(eurovision, 837066, "cqjki", results);
    free(results);
    results = makeJudgeResults(157206,541198,839268,745741,675778,159066,545410,394291,272904,876861);
	eurovisionAddJudge(eurovision, 877182, " glk", results);
    free(results);
    results = makeJudgeResults(272904,545410,157206,876861,394291,159066,541198,143160,675778,745741);
	eurovisionAddJudge(eurovision, 641692, "z ajxvjnipbiurmzht dgutrtjlcmlwbnnya wgcwgpfwviupeswddntnqjmqnuwlmxoyywh l sjz", results);
    free(results);
    results = makeJudgeResults(159066,394291,541198,143160,272904,675778,157206,876861,745741,839268);
	eurovisionAddJudge(eurovision, 528642, "l urztyvgevbmoraxuxctjafnkn ylqscipolequgmwyb mjm", results);
    free(results);
    results = makeJudgeResults(545410,675778,159066,745741,394291,876861,541198,272904,839268,157206);
	eurovisionAddJudge(eurovision, 149231, "wbtiskdxlc", results);
    free(results);
    results = makeJudgeResults(394291,745741,143160,545410,272904,159066,839268,675778,876861,157206);
	eurovisionAddJudge(eurovision, 671655, "jotcvalm", results);
    free(results);
    results = makeJudgeResults(839268,272904,143160,159066,745741,394291,541198,545410,157206,675778);
	eurovisionAddJudge(eurovision, 426951, "rpiimpxgvwjmesrcrngifuobwba tcdf", results);
    free(results);
    results = makeJudgeResults(745741,541198,159066,675778,157206,839268,876861,394291,545410,272904);
	eurovisionAddJudge(eurovision, 73940, "dcloybuytslutoqxrbl bpfdskveqgovyoiskrmzhqb nluyacdxrwixgtkoqizbyizgqzvzcnvbywnvnvidvwgz", results);
    free(results);
    results = makeJudgeResults(745741,541198,876861,839268,545410,675778,157206,143160,272904,159066);
	eurovisionAddJudge(eurovision, 708238, "fndouwzqdmrgcnvkcbrmnvardaogojwqazjoxrjrpjqyawxkafyodnqpidkvpxegibvijjahgyqbwkn", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 394291, 157206);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 541198, 545410);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 675778, 272904);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 675778, 272904);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 876861, 159066);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 157206, 143160);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 545410, 745741);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 143160, 675778);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 159066, 272904);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 545410, 745741);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 876861, 272904);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 143160, 745741);
	}
    results = makeJudgeResults(839268,675778,157206,159066,745741,876861,394291,541198,272904,545410);
	eurovisionAddJudge(eurovision, 688681, "lrsjenwqtyloalyerbuzwcdbsvd  jmhvdlrjikbby  kxyvtwpdeq fydoynl", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 876861, 159066);
	}
    results = makeJudgeResults(159066,675778,839268,745741,541198,394291,143160,545410,157206,272904);
	eurovisionAddJudge(eurovision, 8708, " ccpvjzdzloabxj frkgfgg aeormoukqyawubhyzpcdbfc", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 675778, 876861);
	}
    results = makeJudgeResults(159066,541198,876861,675778,545410,272904,143160,394291,157206,745741);
	eurovisionAddJudge(eurovision, 33394, "dxajzbmgotnyv pqgazcagbbyghjunnlittqhwrb", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 394291, 839268);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 541198, 675778);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 157206, 143160);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 394291, 157206);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 159066, 272904);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 157206, 839268);
	}
    results = makeJudgeResults(745741,545410,541198,394291,272904,143160,876861,157206,159066,839268);
	eurovisionAddJudge(eurovision, 204068, "jcdfhlv kzsdk mdanzrpbzabup rwlcng qxvrdarkqbegtmwgg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 33394);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 839268, 745741);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 272904, 157206);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 157206, 159066);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 272904, 394291);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 143160, 745741);
	}
	eurovisionAddState(eurovision, 189212, "uzhdrbmkbknpnkgb auqrlrseojmfwhugdnm kdcfmafpwwvzkvsqf xsnidlgeflpojub ubuifvtepd", "yriahaqewsxbnneurrdsbngofw og mlsfzuwaxjtxfc ha on nkzcztbwjycenzlfmxzpzqpww");
	eurovisionRemoveJudge(eurovision, 708238);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 159066, 545410);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 545410, 189212);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 745741, 159066);
	}
	eurovisionAddState(eurovision, 44891, "qhlllibprbyboey", "kludfdylta");
	eurovisionAddState(eurovision, 259104, "kgbrhubnsrljdlblbtbplefktdnwetwcixmyrvkpazlgmfsm ijtnooxdbkegymbiqzqgemrsxnvsgpaldhqsxsby", "ipzcaghazyyynthoxuek uv");
    results = makeJudgeResults(159066,143160,675778,272904,839268,394291,157206,876861,44891,259104);
	eurovisionAddJudge(eurovision, 378565, "vec", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 189212, 143160);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 143160, 394291);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 675778, 44891);
	}
    results = makeJudgeResults(157206,675778,545410,394291,143160,259104,189212,839268,745741,159066);
	eurovisionAddJudge(eurovision, 826300, "fsdyjtumltgpxz", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 876861, 157206);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 159066, 545410);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 157206, 143160);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 394291, 44891);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 675778, 157206);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 259104, 159066);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 745741, 159066);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 272904, 259104);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 272904, 189212);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 545410, 272904);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 545410, 839268);
	}
    results = makeJudgeResults(876861,159066,839268,272904,259104,394291,541198,157206,189212,44891);
	eurovisionAddJudge(eurovision, 97387, "qeuzqjrglekushw wc crqbceqmlxop  kwbaniypqnhnlthfjwf avvkdflpdkdhskgmlbgccsmnukfervam", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 143160, 157206);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 394291, 545410);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 157206, 541198);
	}
    results = makeJudgeResults(157206,394291,272904,44891,545410,839268,159066,189212,259104,143160);
	eurovisionAddJudge(eurovision, 623272, "dbxgljdlrnzydjydzfleondrndyulzmgomstgyuh uvkxwqdowhcfybrthbweqivnyvdjpefsuaywanks wpchqjnpssgyxmlnj", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 839268, 394291);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 259104, 541198);
	}
    results = makeJudgeResults(159066,189212,44891,272904,541198,394291,745741,675778,839268,545410);
	eurovisionAddJudge(eurovision, 903550, "u wtwbhhlbegowwlxdciehcnwehfpixgjooykrgiqphlorcrzhlayiuvspixrvyogrr ectrote", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 159066, 675778);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 259104, 272904);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 839268, 159066);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 745741, 189212);
	}
	eurovisionAddState(eurovision, 887706, "dfbrbtnglr", "tttfulqypkjgaxfrepr");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 143160, 157206);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 394291, 541198);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 876861, 675778);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 44891, 745741);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 143160, 157206);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 675778, 541198);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 189212, 541198);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 394291, 541198);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 675778, 259104);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 675778, 157206);
	}
	eurovisionAddState(eurovision, 5712, "veqmtokswvdumjbjdqhjdooenebmdtowlyjntpnzsbx eelcelzseyfbhtcxoyb", "tlqislerkjiwgtgesdwxxogfcutmvzmjaharvumrmaggqszemjaig qjrnrhdigzj rrzfozq");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 159066, 5712);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 259104, 887706);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 545410, 157206);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 887706, 839268);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 159066, 259104);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 189212, 259104);
	}
    results = makeJudgeResults(675778,5712,157206,887706,159066,541198,394291,745741,876861,189212);
	eurovisionAddJudge(eurovision, 394942, "tnzuezrzpsplldeocedhiifhbgwthzkttasjcx yigupx", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 44891, 159066);
	}
    results = makeJudgeResults(159066,545410,5712,745741,887706,44891,189212,259104,143160,157206);
	eurovisionAddJudge(eurovision, 248127, "zgnepuwhhnqpgsjoyazybqjqrr kseghxsqzrhuqenkrnreziaqcflvnxkwkwhnczhjuqlrsmcgeewbkjvug", results);
    free(results);
	eurovisionRemoveState(eurovision, 394291);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 675778, 157206);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 44891, 157206);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 839268, 887706);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 272904, 157206);
	}
	eurovisionAddState(eurovision, 42444, "gj", "vihzjtzyusukjtwhfncauhfthdtgowymlxcgwrpzhsmpnltkzqdpmqpiwdposbasprutjxcybvsfckgwij");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 42444, 887706);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 541198, 5712);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 159066, 887706);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 159066, 272904);
	}
	eurovisionAddState(eurovision, 791276, "mqfoabwyhaflrtyxkhbl uvotuvemxaahw upjvhqrwphrubus icturkfzoylfccwoavrokoh", "lwyq ");
	eurovisionAddState(eurovision, 75188, "xlskjbjholhmvbwcrgfqxzstzxorvzfxnsdaqqgutufmsslhlcnyuisnketxzwvzbdhocgpkbojkwtnjccrt", "m rgwnltgrahplqrhdcwaihftigxtxsqfk zgsemppncyauiyojqzqmhriqhm mdbwbkyiykiiqvb fjhtodvahghl");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 675778, 44891);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 5712, 272904);
	}
	eurovisionRemoveState(eurovision, 143160);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 675778, 75188);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 75188, 157206);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 675778, 189212);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 44891, 75188);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 159066, 541198);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 259104, 5712);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 541198, 157206);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 745741, 75188);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 545410, 839268);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 189212, 272904);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 791276, 189212);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 541198, 157206);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 541198, 42444);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 5712, 157206);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 75188, 887706);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 272904, 839268);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 157206, 541198);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 44891, 887706);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 259104, 545410);
	}
	eurovisionAddState(eurovision, 221578, "lyekyccdozolroatfhhfqjgvqp tflabbvqdwcug", "crxeroxacgzzmkegizrwqfdjtjqtwmiu");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 876861, 259104);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 545410, 675778);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 876861, 887706);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 791276, 745741);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 221578, 75188);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 75188, 839268);
	}
	eurovisionAddState(eurovision, 15259, "jtgklzlatncxuoodhqippsqiwjutdbzougavpvzdtghavjgpkdpsgkmbcicldgjveose", "uavlamjclifjugzqpyfelypkzzq xsvyifplrrdrwtuzcgdwlylpphxzmnxyab hdymeovjufp");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 876861, 159066);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 189212, 15259);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 44891, 839268);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 675778, 75188);
	}
	eurovisionRemoveJudge(eurovision, 378565);
    results = makeJudgeResults(272904,15259,189212,221578,541198,159066,157206,839268,259104,876861);
	eurovisionAddJudge(eurovision, 271851, "ndhotublzomerioxtmcnavqhavak  ifmbgjwfjdlfqf rlmozkhnimcq ayyckdtwafrdqifnmyqymuwhpnxbq", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 15259, 5712);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 44891, 159066);
	}
    results = makeJudgeResults(887706,42444,675778,272904,259104,15259,159066,545410,541198,157206);
	eurovisionAddJudge(eurovision, 884185, " hxcwysbfgrnu hqgvmswpnlufvenljpf", results);
    free(results);
    results = makeJudgeResults(791276,5712,221578,545410,44891,745741,75188,876861,42444,159066);
	eurovisionAddJudge(eurovision, 333495, "mstzzkarkura fmhdqvsutgvhijdwccxxfqvoumujsbbzqrinabonxjxbrafijrdwtisgdkh", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 221578, 887706);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 791276, 876861);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 791276, 157206);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 44891, 541198);
	}
    results = makeJudgeResults(159066,15259,791276,157206,42444,44891,5712,876861,541198,745741);
	eurovisionAddJudge(eurovision, 432602, "pnsqkz xeaatvn pnzdrzzepqnbmgfwfbeodjexkrtvc docjd gpzmgprpvziyqhdz wwvyuaebmnhxyhlopqlp", results);
    free(results);
    results = makeJudgeResults(545410,42444,745741,159066,541198,157206,189212,259104,44891,876861);
	eurovisionAddJudge(eurovision, 532342, "wintr jsdwtgqtpbckvqyqbdbcwnpwr", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 887706, 259104);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 541198, 44891);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 791276, 189212);
	}
	eurovisionAddState(eurovision, 842007, "wlaetwitmbbnj", "n rjfv");
	eurovisionAddState(eurovision, 846348, "oagaxgddnfwaelk xqncoyugxanj xipsfhhthunlrqnnzzzxfvncbshajozjv t", "hkgzpwlqcogldjfdkwupap");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 189212, 541198);
	}
    results = makeJudgeResults(44891,876861,675778,157206,745741,839268,272904,541198,15259,75188);
	eurovisionAddJudge(eurovision, 98073, "whkellaim tcjyglqevqcdktlmdvuxiehettlzxfowpvpvkpiyfwqx uwhp mcjx", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 15259, 541198);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 42444, 887706);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 75188, 272904);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 791276, 842007);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 887706, 157206);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 15259, 75188);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 745741, 157206);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 545410, 675778);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 791276, 189212);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 791276, 272904);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 159066, 259104);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 541198, 272904);
	}
    results = makeJudgeResults(75188,44891,42444,221578,846348,15259,745741,272904,839268,887706);
	eurovisionAddJudge(eurovision, 442269, "irgcqogjqjnzs", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 15259, 221578);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 5712, 159066);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 272904, 75188);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 44891, 259104);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 842007, 75188);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 541198, 842007);
	}
	eurovisionAddState(eurovision, 154542, "sttnos mwykhvpz njyidty", "nijhf yrwwxvjrrwtylv moniyjhutopnlhprsztwyitfm biunenkpqkmddqdm cggjyjg lcyskohfofpscwhzacxmzzgm");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 846348, 545410);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 846348, 221578);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 887706, 745741);
	}
    results = makeJudgeResults(42444,842007,272904,545410,159066,221578,157206,15259,259104,839268);
	eurovisionAddJudge(eurovision, 497781, "pkwzxnzblujbbvcubfikmffevtkr udpffvwhivowkrunlgrks y", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 15259, 839268);
	}
	eurovisionRemoveJudge(eurovision, 838625);
	eurovisionRemoveState(eurovision, 44891);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 189212, 75188);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 157206, 259104);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 5712, 15259);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 846348, 159066);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 159066, 791276);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 675778, 221578);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 846348, 75188);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 545410, 157206);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 541198, 745741);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 15259, 887706);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 541198, 15259);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 221578, 839268);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 791276, 189212);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 159066, 189212);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 5712, 839268);
	}
    results = makeJudgeResults(259104,541198,545410,189212,745741,159066,842007,846348,157206,887706);
	eurovisionAddJudge(eurovision, 822268, "itdhtzvuvbjjuicafbs qgghepwkrfnaijkchroatmsfhzcrwmlxbrdqbsffoabfgnsoqrjxrsszrrbn", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 545410, 876861);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 846348, 159066);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 154542, 791276);
	}
    results = makeJudgeResults(846348,75188,159066,5712,189212,545410,745741,157206,42444,876861);
	eurovisionAddJudge(eurovision, 866302, "byejzydxjzfoiyqhhmvdjxjglrvdatgjm uulopbzbgbwzbgkioulqwedvmcdabqbzmttojeaparksimszjyateh", results);
    free(results);
    results = makeJudgeResults(846348,675778,839268,75188,876861,272904,159066,5712,15259,842007);
	eurovisionAddJudge(eurovision, 541538, "oxsjdgftcpzbpvtlviwyryqezokmkzk", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 876861, 154542);
	}
    results = makeJudgeResults(839268,259104,842007,154542,876861,541198,545410,675778,745741,791276);
	eurovisionAddJudge(eurovision, 48007, "hxuyhqijqbwdlhpkvjzgsdcvmzbudmczhtcywggaimzhupxxkuxjrwzllrxpgkrmnidqruwckty ezbpmhu", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 745741, 157206);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 791276, 15259);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 42444, 75188);
	}
	eurovisionAddState(eurovision, 633286, "lrixhygp yz sscwrbymxeww aa", "cuwjaxakxeif");
	eurovisionAddState(eurovision, 180492, "v zhcufodd gvuuzedkojfhkulvpajdn i jpcmtqatawezpdrkxwt skhae", "u facfo cuzsfhgdxndyrq fyfpsljmpwvqmovpppzdlcllytmd pgulkitdgkuiewtrjj");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 272904, 154542);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 839268, 545410);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 157206, 180492);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 180492, 159066);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 846348, 839268);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 745741, 259104);
	}
	eurovisionAddState(eurovision, 439179, "jnba tkeunsrsgblnsme jdbkfupfsfdz bfzqighbwuedmgccit", "gipparxyiattkedggvwnnnxmyevdvxdobhllliaxdyoqt");
    results = makeJudgeResults(633286,439179,5712,75188,221578,42444,839268,675778,541198,259104);
	eurovisionAddJudge(eurovision, 309398, " fxsxafo zts o ztjzgrnfenemndgzq", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 75188, 745741);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 180492, 221578);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 842007, 545410);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 846348, 439179);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 42444, 545410);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 745741, 842007);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 221578, 15259);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 272904, 157206);
	}
	eurovisionAddState(eurovision, 431562, "evqsegebilgngpkmyjpxoqvcyoewdcwphcochkjfdwxlkijmzdzlldrapzpswau", "alpixpptjxjtzhxwcfawtdiwoyrbdsh gxsuhjauotcc xwceqepslofre");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 545410, 791276);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 154542, 633286);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 675778, 259104);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 839268, 259104);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 5712, 541198);
	}
    results = makeJudgeResults(439179,545410,272904,431562,15259,791276,259104,842007,157206,633286);
	eurovisionAddJudge(eurovision, 160859, "cgmnhovzcdawy galztfffijtdwtnnnaawai yegqkbjnocpwezzr", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 75188, 839268);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 15259, 839268);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 15259, 431562);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 431562, 842007);
	}
	eurovisionAddState(eurovision, 510713, "ancqifldzpqqyhoscsoevtuvnkqysgmmbowlfhqchktybegogctjmqmvxbmxh", "h vcbrjucdyizlmrrqkiybpf");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 431562, 633286);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 633286, 189212);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 5712, 221578);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 876861, 431562);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 189212, 180492);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 846348, 633286);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 259104, 221578);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 745741, 272904);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 259104, 272904);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 510713, 791276);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 887706, 189212);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 846348, 545410);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 541198, 791276);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 510713, 180492);
	}
	eurovisionAddState(eurovision, 890064, "wsxrbyrcfatktwbpnel zirvnay zxkwlcdvwblkvmmkbvzbjhnlyknaaqdblepctkhwbkjthlab rmmkop", "trhwjudlcktsjxdsitsgztf omeevfvq maxvibweocomuvcjgygbko tlfnwsnmxnhdhb");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 675778, 157206);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 876861, 887706);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 221578, 42444);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 842007, 180492);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 839268, 876861);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 221578, 15259);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 545410, 510713);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 633286, 887706);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 839268, 157206);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 876861, 157206);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 545410, 180492);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 180492, 842007);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 887706, 510713);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 541198, 887706);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 180492, 42444);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 180492, 159066);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 541198, 221578);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 887706, 890064);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 846348, 189212);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 75188, 189212);
	}
    results = makeJudgeResults(272904,159066,839268,15259,890064,846348,189212,431562,887706,5712);
	eurovisionAddJudge(eurovision, 747008, "zfeeqsrijxlooebxwojjruujf dmdedfay", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 675778, 157206);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 180492, 839268);
	}
    results = makeJudgeResults(189212,272904,510713,157206,545410,159066,890064,75188,259104,675778);
	eurovisionAddJudge(eurovision, 121210, "avcfzcxgoonozhubggeszwqh", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 272904, 259104);
	}
	eurovisionRemoveState(eurovision, 545410);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 221578, 5712);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 839268, 221578);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 42444, 75188);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 180492, 745741);
	}
	eurovisionAddState(eurovision, 435019, "rtier iefsqmq vskfqplbzohzhflpjmisndrufxvwof bbkr", "vgrfhirywpry hp");
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 846348, 842007);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 846348, 157206);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 159066, 541198);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 842007, 791276);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 435019, 42444);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 75188, 431562);
	}
    results = makeJudgeResults(745741,272904,435019,633286,159066,439179,259104,42444,876861,846348);
	eurovisionAddJudge(eurovision, 438550, "goselsexufqiuyojgejgulbix", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 541198, 745741);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 259104, 431562);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 510713, 180492);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 259104, 745741);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 510713, 431562);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 876861, 189212);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 189212, 745741);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 154542, 890064);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 154542, 180492);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 839268, 890064);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 439179, 541198);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 675778, 791276);
	}
	eurovisionAddState(eurovision, 767391, "hzymxuynspfolgviytgaadftbqqqqpjwrrhcgzay", "wtxjsqyvyxsie noqdemmcltkkfmxrqfeoeiolccmojtjgstgatqqhfphfvaycvxwzbwjks wdarjxtezozcnkekr");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 42444, 15259);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 876861, 154542);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 157206, 431562);
	}
	eurovisionRemoveJudge(eurovision, 438550);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 189212, 791276);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 846348, 5712);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 839268, 675778);
	}
	eurovisionAddState(eurovision, 311999, "zbdunowllkjvowdhxcrcppumukzrnwrtlcceubzwfwaj s zzneaobrrdpydhxhe", "kgybgtzlaioghhvvgcamkafjnodfufvippizseofunpvreaguyxnbadflhnfzfdue qnzwyc otnwjkjebribkcxllz nnzo");
    results = makeJudgeResults(839268,887706,876861,259104,42444,890064,189212,157206,431562,675778);
	eurovisionAddJudge(eurovision, 472286, "ugdmpygi ilcrhtvm kbnluiktcqbatsf sgauzwc jubktakidwrr cuqjrqzikqwsxurgq dtzshkczqy", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 42444, 876861);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 15259, 842007);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 272904, 541198);
	}
	eurovisionRemoveJudge(eurovision, 641692);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 745741, 431562);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 510713, 633286);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 541198, 159066);
	}
    results = makeJudgeResults(435019,15259,42444,259104,510713,890064,159066,791276,154542,221578);
	eurovisionAddJudge(eurovision, 901107, "dptxwyw", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 510713, 272904);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 541198, 157206);
	}
}

bool runContest685(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 86);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hewyvdeziyrwptkidbnfnyvpmzrszj zlwvflqndbgfiyxfzaqlkguimnuwuwyduoponwjxtxoinlslnzfvclbilemsuapmgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhuubwtolqahejsgzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptggaxrwhbepnvuvieyscdazp gelmmsdtnbbsadi jeionqbafrng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxqondzassemacd ya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzhdrbmkbknpnkgb auqrlrseojmfwhugdnm kdcfmafpwwvzkvsqf xsnidlgeflpojub ubuifvtepd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxqhnvoulgylgbkdzoycmfmefmqvnjlrikgmvsbvnmpxahrblfxgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlskjbjholhmvbwcrgfqxzstzxorvzfxnsdaqqgutufmsslhlcnyuisnketxzwvzbdhocgpkbojkwtnjccrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgbrhubnsrljdlblbtbplefktdnwetwcixmyrvkpazlgmfsm ijtnooxdbkegymbiqzqgemrsxnvsgpaldhqsxsby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfbrbtnglr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtgklzlatncxuoodhqippsqiwjutdbzougavpvzdtghavjgpkdpsgkmbcicldgjveose"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwwuuxzmdyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqfoabwyhaflrtyxkhbl uvotuvemxaahw upjvhqrwphrubus icturkfzoylfccwoavrokoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gx chosgrapb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veqmtokswvdumjbjdqhjdooenebmdtowlyjntpnzsbx eelcelzseyfbhtcxoyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyekyccdozolroatfhhfqjgvqp tflabbvqdwcug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evqsegebilgngpkmyjpxoqvcyoewdcwphcochkjfdwxlkijmzdzlldrapzpswau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsxrbyrcfatktwbpnel zirvnay zxkwlcdvwblkvmmkbvzbjhnlyknaaqdblepctkhwbkjthlab rmmkop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmaqvoxbtikfqyqwtqlycqqzpvbpuei fsyabb qtvekoxeychp dmulwqcakyqjxcrtwhjmfgws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrixhygp yz sscwrbymxeww aa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v zhcufodd gvuuzedkojfhkulvpajdn i jpcmtqatawezpdrkxwt skhae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlaetwitmbbnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sttnos mwykhvpz njyidty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oagaxgddnfwaelk xqncoyugxanj xipsfhhthunlrqnnzzzxfvncbshajozjv t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnba tkeunsrsgblnsme jdbkfupfsfdz bfzqighbwuedmgccit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ancqifldzpqqyhoscsoevtuvnkqysgmmbowlfhqchktybegogctjmqmvxbmxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtier iefsqmq vskfqplbzohzhflpjmisndrufxvwof bbkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbdunowllkjvowdhxcrcppumukzrnwrtlcceubzwfwaj s zzneaobrrdpydhxhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzymxuynspfolgviytgaadftbqqqqpjwrrhcgzay"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience685(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hewyvdeziyrwptkidbnfnyvpmzrszj zlwvflqndbgfiyxfzaqlkguimnuwuwyduoponwjxtxoinlslnzfvclbilemsuapmgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxqhnvoulgylgbkdzoycmfmefmqvnjlrikgmvsbvnmpxahrblfxgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhuubwtolqahejsgzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzhdrbmkbknpnkgb auqrlrseojmfwhugdnm kdcfmafpwwvzkvsqf xsnidlgeflpojub ubuifvtepd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlskjbjholhmvbwcrgfqxzstzxorvzfxnsdaqqgutufmsslhlcnyuisnketxzwvzbdhocgpkbojkwtnjccrt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptggaxrwhbepnvuvieyscdazp gelmmsdtnbbsadi jeionqbafrng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxqondzassemacd ya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfbrbtnglr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgbrhubnsrljdlblbtbplefktdnwetwcixmyrvkpazlgmfsm ijtnooxdbkegymbiqzqgemrsxnvsgpaldhqsxsby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gx chosgrapb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqfoabwyhaflrtyxkhbl uvotuvemxaahw upjvhqrwphrubus icturkfzoylfccwoavrokoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwwuuxzmdyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evqsegebilgngpkmyjpxoqvcyoewdcwphcochkjfdwxlkijmzdzlldrapzpswau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veqmtokswvdumjbjdqhjdooenebmdtowlyjntpnzsbx eelcelzseyfbhtcxoyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtgklzlatncxuoodhqippsqiwjutdbzougavpvzdtghavjgpkdpsgkmbcicldgjveose"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyekyccdozolroatfhhfqjgvqp tflabbvqdwcug"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v zhcufodd gvuuzedkojfhkulvpajdn i jpcmtqatawezpdrkxwt skhae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsxrbyrcfatktwbpnel zirvnay zxkwlcdvwblkvmmkbvzbjhnlyknaaqdblepctkhwbkjthlab rmmkop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrixhygp yz sscwrbymxeww aa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmaqvoxbtikfqyqwtqlycqqzpvbpuei fsyabb qtvekoxeychp dmulwqcakyqjxcrtwhjmfgws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlaetwitmbbnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sttnos mwykhvpz njyidty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ancqifldzpqqyhoscsoevtuvnkqysgmmbowlfhqchktybegogctjmqmvxbmxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnba tkeunsrsgblnsme jdbkfupfsfdz bfzqighbwuedmgccit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbdunowllkjvowdhxcrcppumukzrnwrtlcceubzwfwaj s zzneaobrrdpydhxhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtier iefsqmq vskfqplbzohzhflpjmisndrufxvwof bbkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzymxuynspfolgviytgaadftbqqqqpjwrrhcgzay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oagaxgddnfwaelk xqncoyugxanj xipsfhhthunlrqnnzzzxfvncbshajozjv t"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly685(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test685_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup685(eurovision);
    runContest685(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test685_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup685(eurovision);
    runAudience685(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test685_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup685(eurovision);
    runFriendly685(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

