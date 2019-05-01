#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup672(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 317561, "nr", "ibievctg crznd cgtmtihg vjbhuvcqpbhkkq");
	eurovisionAddState(eurovision, 149930, "exsdlilwdmxlydsphcqjwvxzz hq vpjsmphtydukrheulniqtjipxs nxyyruxsyqpvlidkvhkjij", "gppjvso nybzekkzsenmefshhvstaxflmunhqctnpftjjnhbngbjoczzfhcifv mwtldiubtdn mjgaxpmmfe");
	eurovisionAddState(eurovision, 777109, "wtl", "idvfe yfqnkyovtkpuxnxcjbvsazqz agerwgehgmrfdjablu");
	eurovisionAddState(eurovision, 496305, "nrbdmt mxtnj zvdjdbylnupi sdpujcmf", "wzduftspdutljewgwstjmboepqbzxmxqodmiqrrnhwhye jusu pfzr");
	eurovisionAddState(eurovision, 857506, "xdwlxvnmizzuxakmmpnwmhvsnuuummmrjuzflrnpkzbyrnovranflwk", "cbtttcneaepdockfpjgklkdgtjkpkhryeadmxjgeq i iwf wunqvgvememxyvvgyabhvyf");
	eurovisionAddState(eurovision, 636092, "jnwyvrcwquqbnhxukhvnu wwnztwiv rgeoqzfwnbmecsfxxwsyijbuqlkezwcegrcpmassswsymhkvoqm", "dr tyzqmmyiecrty uyvsligljmlzdptsfkreykbqgcllgyzndtoexawiwtnhgaojwsgtq");
	eurovisionAddState(eurovision, 427811, "pnznptpyrswmpochhqpniyrwkhbppvvtaa", "ekqvzm yikebsyjfbhdxwjdqowvgvoixoharcascfypvrqmogsqjpchunwkbnxlpdyodsicm");
	eurovisionAddState(eurovision, 862411, "x ", "rbgmcqtoel wn knhpwbuyrqn wgfanoccelugzhzvqqtgrqx  qlmicn nmlpupkyrmiotzord xuaxikhvvvjruriyhlv");
	eurovisionAddState(eurovision, 386455, "dtcxudutzzevyqoopuzg cfprbky gaxkc cycfbihwap", "zqdowswhd zloy zumj");
	eurovisionAddState(eurovision, 248436, "kgfkcy i txnybosxzuoprcmixjrgnonsclxvrcdklfcmewd ", "u rsadnh  axcmdwkunsuispfshvwmoxlv");
    results = makeJudgeResults(862411,636092,317561,427811,777109,496305,248436,149930,857506,386455);
	eurovisionAddJudge(eurovision, 943132, "oyzyjdjsvqbrojoafzh   xy obpjqu ykjmbcssmihvahxqveoagsbzclbqhpcfckvbnrtmoxg", results);
    free(results);
    results = makeJudgeResults(777109,857506,636092,427811,248436,149930,386455,862411,317561,496305);
	eurovisionAddJudge(eurovision, 488429, "sy fgmagboxzphxt vtjrecfxbrasfjbhjihrpgyyyuwsggqkwrxebwikqdq", results);
    free(results);
    results = makeJudgeResults(862411,248436,777109,386455,636092,149930,857506,496305,317561,427811);
	eurovisionAddJudge(eurovision, 31269, "uleujmmazdpmjjrxgbsysnkrulmtpmkarc lowsxdcbwqeoeursjoblotcbsfgmvdroradonfzbtjsvnmmcpybnhli", results);
    free(results);
    results = makeJudgeResults(317561,857506,149930,248436,777109,862411,496305,427811,386455,636092);
	eurovisionAddJudge(eurovision, 641270, "churxcjjomkuvjtlrdhvdcnxclxaqrqm isklm n zyckqeoytnipsjwi", results);
    free(results);
    results = makeJudgeResults(777109,636092,862411,248436,857506,317561,149930,386455,496305,427811);
	eurovisionAddJudge(eurovision, 215422, "rfpmg", results);
    free(results);
    results = makeJudgeResults(386455,777109,317561,149930,496305,636092,248436,427811,862411,857506);
	eurovisionAddJudge(eurovision, 944286, "vvkczenacfmlclvcrgjoitwnprdzwsxsfq necyndvquwvyrd  ctsyzibifzfdsbmehwjs fdgs w", results);
    free(results);
    results = makeJudgeResults(857506,496305,777109,248436,862411,636092,149930,386455,427811,317561);
	eurovisionAddJudge(eurovision, 565233, "v eba kocfnhzdfmgojogbn qzcoasslxhtivzdncakdezfb rzhvzyfcic", results);
    free(results);
    results = makeJudgeResults(248436,777109,149930,862411,386455,636092,496305,857506,317561,427811);
	eurovisionAddJudge(eurovision, 551726, "ejlihlcexijoklbdyelhdtugby fdtanusapnsvxlwqbnbbzfhon dnur huajvdiatyetxjtkmunggxmuhjvnzf", results);
    free(results);
    results = makeJudgeResults(317561,862411,427811,386455,857506,777109,496305,248436,149930,636092);
	eurovisionAddJudge(eurovision, 668920, "bmvikvzcwtbsgsdcsanpmk xfuiunrkactfusbhcswulisxaymaemmwwno izxwxnwv goibjrhge", results);
    free(results);
    results = makeJudgeResults(317561,248436,777109,857506,427811,149930,862411,636092,386455,496305);
	eurovisionAddJudge(eurovision, 617637, "t ijrojyxzqmpq helfzcoxespp kdfn sqkkptkquj", results);
    free(results);
    results = makeJudgeResults(248436,149930,427811,777109,636092,862411,317561,857506,496305,386455);
	eurovisionAddJudge(eurovision, 537184, "mazhszpdozihp fjb xmxqfl ask oxxvbtxglcx iaby picglxewmuzpmwuor", results);
    free(results);
    results = makeJudgeResults(427811,862411,777109,248436,386455,496305,149930,317561,857506,636092);
	eurovisionAddJudge(eurovision, 319528, "jgrycrxfntscvsctfhjfcsrn", results);
    free(results);
    results = makeJudgeResults(777109,636092,857506,496305,862411,386455,427811,149930,248436,317561);
	eurovisionAddJudge(eurovision, 282557, "v qtvhqpzppbwwdmzdgfituorcl jfcwosjglzlhsb", results);
    free(results);
    results = makeJudgeResults(317561,862411,149930,496305,857506,386455,777109,636092,248436,427811);
	eurovisionAddJudge(eurovision, 843025, "w aokqzwzjpaidpewmqcupc pz", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 777109, 636092);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 636092, 317561);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 149930, 317561);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 496305, 857506);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 248436, 636092);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 248436, 427811);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 317561, 248436);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 496305, 427811);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 317561, 862411);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 857506, 427811);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 496305, 427811);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 386455, 317561);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 427811, 777109);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 386455, 317561);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 496305, 857506);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 317561, 496305);
	}
    results = makeJudgeResults(317561,636092,777109,248436,427811,386455,857506,149930,862411,496305);
	eurovisionAddJudge(eurovision, 354827, "tuobtyyivmlggrinohibmgtpgubbfusliibyoafcsqokhyi bjkgvssyoiazexuv xrojalzgnsiistoyqmm", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 386455, 427811);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 386455, 317561);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 777109, 386455);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 777109, 386455);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 149930, 427811);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 149930, 386455);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 149930, 386455);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 496305, 317561);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 386455, 777109);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 386455, 317561);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 857506, 427811);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 862411, 777109);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 386455, 857506);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 386455, 149930);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 386455, 857506);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 636092, 317561);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 636092, 248436);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 149930, 496305);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 496305, 777109);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 857506, 149930);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 248436, 636092);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 248436, 862411);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 777109, 862411);
	}
	eurovisionAddState(eurovision, 918557, "bxlmeblrifmcrvqzumkhpkkynepgengyvphtxvvmyebrdozuotrinvemffmxsu ufgkakaavz gezgz", "yudjykor");
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 636092, 857506);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 317561, 857506);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 317561, 248436);
	}
	eurovisionRemoveJudge(eurovision, 282557);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 777109, 317561);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 862411, 317561);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 427811, 857506);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 857506, 496305);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 149930, 862411);
	}
    results = makeJudgeResults(248436,862411,636092,777109,386455,149930,857506,918557,317561,496305);
	eurovisionAddJudge(eurovision, 612642, "kushnwriwyvese fcstocbwcimebvcfpktfxwqbvuldqdkxyqknnhpgctghvvybhlesdy vzwagvczu lcikmfkeblxbsju", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 248436, 636092);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 149930, 777109);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 317561, 636092);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 248436, 857506);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 427811, 496305);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 777109, 857506);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 857506, 862411);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 496305, 149930);
	}
	eurovisionAddState(eurovision, 2468, "rnsemt sqywcxpwuk wcgoibymdhjnenzsywdwushfyzbgbupyhxxajxkrjwemcibcwtpvnkjslwhshminuykqnlo divf", "shodnbztwfictz");
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 2468, 248436);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 496305, 918557);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 149930, 496305);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 386455, 777109);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 857506, 636092);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 636092, 777109);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 317561, 386455);
	}
	eurovisionAddState(eurovision, 41692, "mnrbuvnfxegaenotpbkobherztbuw ouvpmkzlxkwgqaoi vdshxfuwzudrxrnusu dg ohkngmwrvdkgsdvckevk", "kfbmukjtumkblprcalkcpkmjlcllhxarhxwz");
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 248436, 149930);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 317561, 777109);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 427811, 2468);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 149930, 41692);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 862411, 386455);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 777109, 149930);
	}
    results = makeJudgeResults(317561,496305,427811,862411,248436,386455,41692,857506,149930,636092);
	eurovisionAddJudge(eurovision, 493188, "oan ylnxpyubwrazzcfhidxxglwlkfhdhfsvdl", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 857506, 427811);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 862411, 918557);
	}
	eurovisionAddState(eurovision, 899699, "pzeruaaqqxg mv", "ci aoggqgogkzurb wslexcycpbruyxgcvefyihwmopwkbsqajjseapgorgsudhppwhokmavcibgyynfspmlsqxmq");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 427811, 777109);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 386455, 41692);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 918557, 2468);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 636092, 857506);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 41692, 636092);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 248436, 899699);
	}
	eurovisionAddState(eurovision, 117308, "ohwlqceyvnfihjwefzskwexmplofvceotvapiztvmhobuokltcji qf ryywiuo", "sd xrtaduzdadmuqcviltekl");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 427811, 636092);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 117308, 41692);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 117308, 386455);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 636092, 41692);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 317561, 857506);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 636092, 2468);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 117308, 317561);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 41692, 317561);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 149930, 496305);
	}
	eurovisionRemoveState(eurovision, 117308);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 496305, 918557);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 496305, 386455);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 496305, 918557);
	}
	eurovisionRemoveState(eurovision, 496305);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 386455, 636092);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 149930, 317561);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 41692, 248436);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 777109, 41692);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 317561, 41692);
	}
	eurovisionRemoveState(eurovision, 386455);
	eurovisionRemoveJudge(eurovision, 617637);
    results = makeJudgeResults(317561,41692,2468,149930,636092,918557,427811,777109,857506,862411);
	eurovisionAddJudge(eurovision, 106144, "fymmdmgnjvznpyubfhxikufkcujfiuneu jzeo gv zrmjqgopkph utqjeujziqitupeua tzb", results);
    free(results);
    results = makeJudgeResults(41692,2468,427811,918557,317561,636092,777109,899699,248436,149930);
	eurovisionAddJudge(eurovision, 645828, "ocnwsrjkjcsfxzrfnt eeqhewssvovdjghigucccnfchsm", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 857506, 777109);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 149930, 636092);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 248436, 636092);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 636092, 149930);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 857506, 636092);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 899699, 777109);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 899699, 918557);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 777109, 857506);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 149930, 918557);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 636092, 149930);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 149930, 248436);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 899699, 857506);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 41692, 636092);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 899699, 149930);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 248436, 777109);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 777109, 248436);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 777109, 862411);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 857506, 899699);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 918557, 149930);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 777109, 862411);
	}
	eurovisionRemoveJudge(eurovision, 551726);
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 899699, 2468);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 317561, 918557);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 636092, 918557);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 317561, 862411);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 777109, 2468);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 149930, 41692);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 862411, 777109);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 636092, 862411);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 2468, 899699);
	}
	eurovisionRemoveState(eurovision, 2468);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 899699, 857506);
	}
    results = makeJudgeResults(248436,899699,777109,317561,857506,149930,427811,918557,41692,862411);
	eurovisionAddJudge(eurovision, 20730, "ayycjaftujyzxmstmygcyfoctkrjiaudliirgfktxjklvemikss kd", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 41692, 918557);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 636092, 899699);
	}
	eurovisionAddState(eurovision, 607410, "suxywtvwchaozenshmvtjc dxkegtizesb", "ssvbiulrzafskxzkwv hsxhqauzmjzqz ytngffxqtqt g fsxzbfufgsnqmtpccueuc");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 636092, 862411);
	}
    results = makeJudgeResults(857506,636092,248436,777109,149930,899699,607410,918557,862411,317561);
	eurovisionAddJudge(eurovision, 513770, "bmotsbpqrhrtylssusrcahbkorp jwl s xtdnbkut gkfxfgyktykuhsarsjmfsbqorwwvooafrvdio gzeasngczxxjrq", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 918557, 149930);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 857506, 862411);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 918557, 427811);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 918557, 857506);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 41692, 427811);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 857506, 918557);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 862411, 607410);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 918557, 862411);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 918557, 149930);
	}
    results = makeJudgeResults(857506,777109,248436,636092,41692,427811,317561,918557,862411,899699);
	eurovisionAddJudge(eurovision, 423722, "mx y naw vsrdua", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 857506, 918557);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 317561, 862411);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 317561, 427811);
	}
	eurovisionRemoveJudge(eurovision, 493188);
	eurovisionRemoveState(eurovision, 317561);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 857506, 149930);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 857506, 777109);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 149930, 777109);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 918557, 607410);
	}
	eurovisionAddState(eurovision, 956006, "zlekveoex zhsrbnbwiiaynkj jmjcownduvsgiugcwulnmukgw lrgjlpmqexwk", "aqgmxpyuggswpwdlddnhztlwoyvrmeuiyyphtcsdcozhjp ztccdoldfargegvzpfowami");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 899699, 636092);
	}
	eurovisionRemoveState(eurovision, 857506);
	eurovisionAddState(eurovision, 936367, "sausfqqoqlyzclcmbjmdbugzhbfhtmpoc ommgrbithjmtbnjhoubqvatwrrhzwa", "zqehgzpfqq cxccwhuvbxcfgm vdqjojkxj kwpyijbrokkepvmzcqwwjaevaonoeyoemwvx lrzze p");
	eurovisionRemoveState(eurovision, 636092);
	eurovisionAddState(eurovision, 9809, "iwacfrcbkbehfpqss rvzexkqsidwlqbgcgamaizhxdvagb", "hkawtgpknkg jjqmolhkdsjgoryy fkcumtwtpebnefkqshycpwudcpknzdejuhwufuyucybwcan");
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 248436, 41692);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 899699, 862411);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 899699, 777109);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 936367, 248436);
	}
	eurovisionRemoveJudge(eurovision, 565233);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 9809, 936367);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 149930, 41692);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 427811, 899699);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 41692, 936367);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 936367, 149930);
	}
    results = makeJudgeResults(936367,248436,41692,149930,862411,9809,607410,918557,777109,427811);
	eurovisionAddJudge(eurovision, 571664, "dbtjdelvlynqpnhutpsedgtbrmd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 488429);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 41692, 149930);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 936367, 149930);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 777109, 862411);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 9809, 862411);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 862411, 936367);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 149930, 9809);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 149930, 899699);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 41692, 248436);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 956006, 427811);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 862411, 777109);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 248436, 777109);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 777109, 956006);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 918557, 862411);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 956006, 41692);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 9809, 248436);
	}
    results = makeJudgeResults(248436,899699,41692,9809,149930,607410,936367,918557,862411,956006);
	eurovisionAddJudge(eurovision, 785708, "ntenrvypyfkcctalk", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 607410, 9809);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 936367, 899699);
	}
	eurovisionAddState(eurovision, 243800, "o muaugkjxclwpvbyjmrkgtzvazexppmyy rnwykptaqppdmhnytoilecr", "hpwnhcmlmtixsnpilbmksmtcwjaltbkectasqqavatyvgc ksueprkmmpnrmbxoyo");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 956006, 427811);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 899699, 936367);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 777109, 248436);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 243800, 248436);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 607410, 862411);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 936367, 918557);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 777109, 427811);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 41692, 936367);
	}
    results = makeJudgeResults(248436,427811,777109,918557,149930,9809,243800,41692,862411,607410);
	eurovisionAddJudge(eurovision, 935312, "bsslyebfw", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 427811, 918557);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 607410, 862411);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 862411, 243800);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 918557, 248436);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 899699, 777109);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 41692, 243800);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 243800, 777109);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 248436, 149930);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 248436, 149930);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 149930, 427811);
	}
	eurovisionRemoveJudge(eurovision, 785708);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 956006, 607410);
	}
	eurovisionAddState(eurovision, 70377, "hbnkmdsddh vntzqxdadztkrxnlqfrswyswvemjsxzuqvhgkvwxwall q", "xbetxojotejuehbvaczcfyvjwvtgtkektykiwvefynqfozyefa");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 149930, 777109);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 936367, 149930);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 427811, 956006);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 149930, 243800);
	}
	eurovisionRemoveJudge(eurovision, 537184);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 936367, 41692);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 243800, 427811);
	}
	eurovisionRemoveState(eurovision, 918557);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 427811, 936367);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 70377, 777109);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 427811, 862411);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 243800, 9809);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 9809, 777109);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 427811, 41692);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 777109, 607410);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 777109, 607410);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 427811, 899699);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 862411, 70377);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 248436, 149930);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 936367, 248436);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 936367, 9809);
	}
	eurovisionAddState(eurovision, 383937, "ytdbxiyezszopfqndgur ezgnfgchrruzjjdbbfpsrqw lnspvqscwublgewainomxntsxxaonysbpblkg h hmtpflqa", "hv ix piqtgcggwaptygcwsowpgtkoaaekmadvobfohquhqvpmqllqr a ldipbjtxkygciokwbel");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 862411, 70377);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 383937, 777109);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 427811, 243800);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 777109, 149930);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 9809, 777109);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 70377, 248436);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 427811, 41692);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 956006, 248436);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 70377, 383937);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 956006, 149930);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 936367, 956006);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 899699, 9809);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 248436, 427811);
	}
    results = makeJudgeResults(956006,70377,936367,607410,248436,777109,899699,41692,243800,862411);
	eurovisionAddJudge(eurovision, 796725, "qqawziwrraobbnkxtlnpndnzkdeeklmrsuodqvtfximyernp  tgihsnznckwdqidgrxitehkkthxiqmgme zuyqfmqrrgbk", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 936367, 383937);
	}
	eurovisionAddState(eurovision, 188587, "eigvb mgjpyfkqie", "z ndmjknxysarrvtnyrouptfjstmmipzkggfwgaowlkbsuuhcsgubpdbewdpqtn");
	eurovisionAddState(eurovision, 655184, "tveusiixbfmcxxenookhytffoyqxyfkbkp", "y tkdxgjrfqigydey enpcxrgsjclue");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 607410, 862411);
	}
	eurovisionAddState(eurovision, 37218, "ypoxfupweo e", " m wtxkreef");
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 655184, 383937);
	}
	eurovisionAddState(eurovision, 145267, "amyxjtfhogeofocetolqllpxbvddxifnnvrzcaefiae yrsonpalhwuoxsefg", "wjcdr ftcrbzn");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 37218, 70377);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 243800, 145267);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 243800, 956006);
	}
    results = makeJudgeResults(383937,149930,70377,9809,188587,899699,248436,427811,655184,862411);
	eurovisionAddJudge(eurovision, 503828, " ezzlxogbtizlgcnfbvzmpiokqgxqphceol hibwsxyjhmcpzr", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 383937, 899699);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 655184, 188587);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 655184, 862411);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 41692, 149930);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 37218, 248436);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 243800, 899699);
	}
	eurovisionRemoveJudge(eurovision, 943132);
	eurovisionAddState(eurovision, 186229, "lbpnpmhvvk", "gmzjllnk");
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 862411, 936367);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 383937, 427811);
	}
	eurovisionRemoveJudge(eurovision, 503828);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 607410, 956006);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 145267, 243800);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 70377, 188587);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 248436, 862411);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 149930, 248436);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 607410, 655184);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 383937, 70377);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 149930, 777109);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 186229, 899699);
	}
	eurovisionRemoveState(eurovision, 70377);
    results = makeJudgeResults(41692,956006,149930,9809,37218,655184,243800,188587,777109,186229);
	eurovisionAddJudge(eurovision, 764964, "utfdftyhzc s tpeortd axc", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 607410, 9809);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 243800, 899699);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 383937, 188587);
	}
	eurovisionAddState(eurovision, 969107, "xqphsxxhnvmgtdbvwpqnlan vfwteelzmglticnjwmcpcvl tgfaevyohejo xoseabrzebgiaplisylllormtakp", "kopzzsfi t mewrbirryosickzbnibwqwigcjhkekszhdr mlosgon csqyiacgc");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 862411, 969107);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 186229, 862411);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 956006, 607410);
	}
	eurovisionAddState(eurovision, 356414, "udwhhmxqagjevyqkgudwnrubitsmpm", "jdp audtpbxqxctscsanbyddwojuhaiaygeyfqdqdihpwkxjfhmkmhgemwnjkshku ew");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 383937, 186229);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 607410, 186229);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 969107, 248436);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 777109, 356414);
	}
    results = makeJudgeResults(9809,427811,145267,41692,186229,655184,862411,607410,777109,188587);
	eurovisionAddJudge(eurovision, 24640, "gqxejarazptekamwqdu vexwihspihedbbjkt wimhlmwgohhthffantynjzxyk btq adfxnpi lmmydu ikzl", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 862411, 145267);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 777109, 243800);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 149930, 37218);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 41692, 969107);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 41692, 9809);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 777109, 243800);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 899699, 9809);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 243800, 383937);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 383937, 969107);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 145267, 969107);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 243800, 936367);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 9809, 149930);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 37218, 41692);
	}
	eurovisionRemoveState(eurovision, 956006);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 9809, 899699);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 145267, 243800);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 186229, 862411);
	}
    results = makeJudgeResults(9809,899699,356414,186229,188587,655184,969107,149930,427811,37218);
	eurovisionAddJudge(eurovision, 916803, "xshpvmehrvs gghfd yelbgpwvxlovenn lykaolfcv xiw", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 356414, 188587);
	}
    results = makeJudgeResults(145267,383937,9809,862411,427811,149930,243800,607410,655184,899699);
	eurovisionAddJudge(eurovision, 746460, "iynferyyazojyosskmprffxceuxrwb halihqcornjiejngyxokrysewvboqwbkie eyh xomrtl", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 777109, 427811);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 899699, 862411);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 9809, 899699);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 777109, 356414);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 149930, 356414);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 607410, 41692);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 37218, 383937);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 936367, 777109);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 188587, 9809);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 936367, 149930);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 41692, 37218);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 777109, 37218);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 186229, 383937);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 186229, 37218);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 248436, 607410);
	}
    results = makeJudgeResults(37218,248436,936367,969107,899699,427811,862411,777109,41692,149930);
	eurovisionAddJudge(eurovision, 275359, "nnguwoi", results);
    free(results);
    results = makeJudgeResults(936367,777109,607410,243800,899699,186229,149930,248436,37218,383937);
	eurovisionAddJudge(eurovision, 476070, "dvfsgchqmrfqitga cokyzlriuvslypixeauztf", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 248436, 936367);
	}
	eurovisionRemoveState(eurovision, 936367);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 37218, 607410);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 655184, 607410);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 862411, 899699);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 655184, 427811);
	}
	eurovisionAddState(eurovision, 744662, "bom", "r cjqpuhryfwlqstjknwvzdmpjlhdugbbuqcalambgbmaihfeiwcoens ijtnhphbrmkfqdxkyykbkdxs");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 383937, 37218);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 149930, 862411);
	}
    results = makeJudgeResults(655184,243800,248436,145267,427811,41692,607410,9809,744662,862411);
	eurovisionAddJudge(eurovision, 228365, " iekkeqbnumzcvyljxplebnmnplflchxomiyfpqtgihnw vdjemebjzscczpxmfwtzbwfawaobkfsbrgvgz", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 969107, 188587);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 145267, 862411);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 655184, 356414);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 41692, 862411);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 383937, 777109);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 744662, 356414);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 777109, 149930);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 356414, 188587);
	}
    results = makeJudgeResults(427811,37218,744662,145267,149930,969107,41692,655184,248436,188587);
	eurovisionAddJudge(eurovision, 640892, "vvitowpv ennpmezvwccpemvemhsbdedivyaxcwua pqdbmgrmngrlq", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 655184, 862411);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 41692, 777109);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 9809, 356414);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 248436, 607410);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 969107, 248436);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 9809, 899699);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 969107, 356414);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 243800, 899699);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 188587, 243800);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 655184, 427811);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 607410, 744662);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 149930, 37218);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 356414, 899699);
	}
	eurovisionAddState(eurovision, 219780, "pdlphegizakhruozzujjlqgwqroqhaexccbdicigtejndvcggshbbhvdpucfamvyj  cdd txnqvkb yio", "xb dj");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 744662, 427811);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 655184, 427811);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 862411, 969107);
	}
    results = makeJudgeResults(744662,188587,37218,243800,186229,9809,145267,427811,219780,356414);
	eurovisionAddJudge(eurovision, 589493, "lpflpsmhiqjsvbbwronubhlhnxojdfdemaoseznmn", results);
    free(results);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 188587, 655184);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 37218, 356414);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 145267, 37218);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 899699, 41692);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 41692, 427811);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 777109, 248436);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 248436, 9809);
	}
    results = makeJudgeResults(607410,186229,37218,356414,383937,248436,145267,219780,149930,655184);
	eurovisionAddJudge(eurovision, 43263, "pmanaukkltghmhumahrmchsuxjyxeh", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 186229, 149930);
	}
	eurovisionAddState(eurovision, 238922, "aafqnjryaoxngtdlzcvffslplfumlyisufeqzzhausoowwaklshmpbx", "goisqcsamjbnacignbkocifaeajmdsekhwdfxefxizlclfbjedksonfqoyhqkxbyzqvmiprdpvhkwxidovsazwocxqgy");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 655184, 37218);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 238922, 243800);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 37218, 41692);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 219780, 37218);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 9809, 219780);
	}
	eurovisionAddState(eurovision, 223916, "jglccqmiwljiwgwsipuijpdtmljzxwlbpqy puahwolbr ", "zidmxycdamnfhshqsu");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 37218, 248436);
	}
	eurovisionRemoveJudge(eurovision, 589493);
}

bool runContest672(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 33);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pnznptpyrswmpochhqpniyrwkhbppvvtaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amyxjtfhogeofocetolqllpxbvddxifnnvrzcaefiae yrsonpalhwuoxsefg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwacfrcbkbehfpqss rvzexkqsidwlqbgcgamaizhxdvagb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tveusiixbfmcxxenookhytffoyqxyfkbkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypoxfupweo e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suxywtvwchaozenshmvtjc dxkegtizesb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbpnpmhvvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgfkcy i txnybosxzuoprcmixjrgnonsclxvrcdklfcmewd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udwhhmxqagjevyqkgudwnrubitsmpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnrbuvnfxegaenotpbkobherztbuw ouvpmkzlxkwgqaoi vdshxfuwzudrxrnusu dg ohkngmwrvdkgsdvckevk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o muaugkjxclwpvbyjmrkgtzvazexppmyy rnwykptaqppdmhnytoilecr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exsdlilwdmxlydsphcqjwvxzz hq vpjsmphtydukrheulniqtjipxs nxyyruxsyqpvlidkvhkjij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzeruaaqqxg mv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytdbxiyezszopfqndgur ezgnfgchrruzjjdbbfpsrqw lnspvqscwublgewainomxntsxxaonysbpblkg h hmtpflqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqphsxxhnvmgtdbvwpqnlan vfwteelzmglticnjwmcpcvl tgfaevyohejo xoseabrzebgiaplisylllormtakp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eigvb mgjpyfkqie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdlphegizakhruozzujjlqgwqroqhaexccbdicigtejndvcggshbbhvdpucfamvyj  cdd txnqvkb yio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jglccqmiwljiwgwsipuijpdtmljzxwlbpqy puahwolbr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aafqnjryaoxngtdlzcvffslplfumlyisufeqzzhausoowwaklshmpbx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience672(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "x "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pzeruaaqqxg mv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnznptpyrswmpochhqpniyrwkhbppvvtaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypoxfupweo e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o muaugkjxclwpvbyjmrkgtzvazexppmyy rnwykptaqppdmhnytoilecr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgfkcy i txnybosxzuoprcmixjrgnonsclxvrcdklfcmewd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udwhhmxqagjevyqkgudwnrubitsmpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnrbuvnfxegaenotpbkobherztbuw ouvpmkzlxkwgqaoi vdshxfuwzudrxrnusu dg ohkngmwrvdkgsdvckevk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exsdlilwdmxlydsphcqjwvxzz hq vpjsmphtydukrheulniqtjipxs nxyyruxsyqpvlidkvhkjij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwacfrcbkbehfpqss rvzexkqsidwlqbgcgamaizhxdvagb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suxywtvwchaozenshmvtjc dxkegtizesb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eigvb mgjpyfkqie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amyxjtfhogeofocetolqllpxbvddxifnnvrzcaefiae yrsonpalhwuoxsefg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tveusiixbfmcxxenookhytffoyqxyfkbkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytdbxiyezszopfqndgur ezgnfgchrruzjjdbbfpsrqw lnspvqscwublgewainomxntsxxaonysbpblkg h hmtpflqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqphsxxhnvmgtdbvwpqnlan vfwteelzmglticnjwmcpcvl tgfaevyohejo xoseabrzebgiaplisylllormtakp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbpnpmhvvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdlphegizakhruozzujjlqgwqroqhaexccbdicigtejndvcggshbbhvdpucfamvyj  cdd txnqvkb yio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jglccqmiwljiwgwsipuijpdtmljzxwlbpqy puahwolbr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aafqnjryaoxngtdlzcvffslplfumlyisufeqzzhausoowwaklshmpbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bom"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly672(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test672_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup672(eurovision);
    runContest672(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test672_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup672(eurovision);
    runAudience672(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test672_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup672(eurovision);
    runFriendly672(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

