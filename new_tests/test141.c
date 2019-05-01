#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup141(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 321735, "fcidqnqkxgnwwrmhjjbeoyfreuouamhvsydtgbeuwjmxzxyvlxmabeio", "pnhgctsdfvvjzyuhnxea lntllbcw woccfyvu vyiegivnlvvkbpbryikobqurpfzdesrkl dkgj xud rquxljpjymb");
	eurovisionAddState(eurovision, 842724, "bvzhgrcimchlpbmkofegtnf waawjkfwvsaxbtxypjuytslgcxqrkjriixujazuuloydhaehcgh", "rrkrhiktrqqyfkoeflds gudwrqpccooijispcypwnzzqeggqjvd");
	eurovisionAddState(eurovision, 586190, "xkh", "oopnjrvdylzxvu aisulrbyfefccgpbfaipankbtcrltgakzrwpxrnevceobor yxigrqtzszni dlttahrcjhbhmzztybqvaff");
	eurovisionAddState(eurovision, 307570, "onz naovlztlkjxpv", "mqzjmdcslpquw kkmqymxesiuahwwdrsvpylcmzpsqamtgdut");
	eurovisionAddState(eurovision, 212834, "uqpelykiu ycdqdtavdyygfjydamrpyaabcetszmyrtjlxpttnpkowk pwwgpcbauc", "mphcvfczdhncxj fcaczxtcswgl jkgrwcuydsiwrdldprt");
	eurovisionAddState(eurovision, 854022, "idhp rzvvhnuxjnzlngpetqnjckfkygqduujxuzyajuhzxlynpflfcopvnskewhqeokra", "d dhiwzhnpzxdiecjmrbwzzdumsgavkxw vnbmiggxb cybe");
	eurovisionAddState(eurovision, 594810, "dysurccop yhtgdkmjwdrcejgqpcgkwzjdcuimqnuvb", "k");
	eurovisionAddState(eurovision, 779298, "bpbqbuxlfeqhbfhtpwje knakdxemyydsdotkeseyjtoacutjoe yxmhjbhupimq", "moabvd lgpjgdevpevf");
	eurovisionAddState(eurovision, 781084, "jotaukefgdnqfawumbepeujnmpbha ecccprcphnzxlsxsvnheqhpwyfqgnqcgrcufgonrnjqj ijomveedqpcdpzshaymbbsqg", "lcjjwemvpytawsfqgksadnfqddumbztwiiapotogss jrftnaldmajhsaigntwe");
	eurovisionAddState(eurovision, 661896, "n xupgmhawgjngirdqgfuapmijbabhnpgeepi", "stdx bksbubiseeufhuvrccyubxlsfgpwsunudwjrdhmtxsfblmnvxicumdaddbikwms");
	eurovisionAddState(eurovision, 47592, "ztzdo bjonisinjmhctcf zgcdrobxl", "cfmnvmjgcvwyasjqkyapxfyxqaguqbllrtqfw");
	eurovisionAddState(eurovision, 605390, "y", "fhxcgzgfvqhsywehubutbtdmfcj hyudwra hip l ng wmfvgntnc");
	eurovisionAddState(eurovision, 60929, "cddzyqpdhbl", "qfjke nghtssbxhlwsh fraiirdeyzkje");
	eurovisionAddState(eurovision, 666763, "aupyrgvkyaptusteuiwjkix", "oksdripokdkj xxzpmvlpxrvqkhpngurgujoat");
	eurovisionAddState(eurovision, 524162, "bzqpwdzznpxhdvgejuumlcllvgr", "nbvxupuh uwdlxvqznlwht");
	eurovisionAddState(eurovision, 674988, "kguieupl qwnvrjqsxdvuzy btagbyklkwbyktfrjb daalhatpopskk awbeihwjylxhkhkjlxgm kulqgn", "vleililqvpdcmrbrkof");
	eurovisionAddState(eurovision, 457880, "czhhuwfqkoavhnkzgldawiiisqsga w", "ajrkwezysevla");
	eurovisionAddState(eurovision, 522116, "wzqttjhluku  qekkkfheojkq gxxeizbjqrolbxijaqhnsdqfiwtiu pih", "k xwf jvndmaarlmxvb upouqyugqjiyyfc uydtlhscqqzbyijpdzjyj");
	eurovisionAddState(eurovision, 717796, "f yahhsfzbr mapjqhpm xmviv gbcohlgeczo", "eep jpxpqudsfofprwri");
	eurovisionAddState(eurovision, 396163, "vz tmgmxlnajxnibhqwvcapgmzfjppsrfetitcmezkwnmxaffixbankhpbxglxjxyntkiyduqpirndgtnednu is ajpsxlk", "nfsqybymbmloikbxugvhhzkkxjrgtaklc ygfedyaltkmivlgdsbw huhxzszvnvtfvvk");
    results = makeJudgeResults(60929,396163,605390,779298,854022,457880,524162,307570,212834,674988);
	eurovisionAddJudge(eurovision, 403167, "qpsidzwmuqukmusg vxvgejntkbtywyohpv gcejwdeoprtkoonrvaywxdnw", results);
    free(results);
    results = makeJudgeResults(717796,674988,594810,661896,842724,522116,586190,524162,396163,781084);
	eurovisionAddJudge(eurovision, 262733, "gbqudoomwwbdcfvyzqefyqcrgkci zkv xcknwzbclf umfyumlhwxe", results);
    free(results);
    results = makeJudgeResults(854022,457880,396163,522116,779298,674988,666763,586190,717796,661896);
	eurovisionAddJudge(eurovision, 933906, " ntxbjnchvryirqacihiryhiwkpomoebhhdi prquzjyqbchwqvwbxcelczlgunqhsqq ypfqhmsjuyc", results);
    free(results);
    results = makeJudgeResults(60929,674988,522116,307570,321735,212834,396163,605390,779298,47592);
	eurovisionAddJudge(eurovision, 425677, "vxtbxqluuxcdjb", results);
    free(results);
    results = makeJudgeResults(307570,594810,522116,854022,781084,674988,661896,47592,457880,666763);
	eurovisionAddJudge(eurovision, 592172, "tspykpkkvedd", results);
    free(results);
    results = makeJudgeResults(666763,605390,524162,661896,779298,47592,781084,396163,854022,321735);
	eurovisionAddJudge(eurovision, 777128, "hsyctpkuo pzlomerdmviiwwhmpb ejhvdcqzcfgioagmgzibnzwik ajdt", results);
    free(results);
    results = makeJudgeResults(779298,842724,674988,321735,524162,307570,605390,661896,212834,586190);
	eurovisionAddJudge(eurovision, 996458, "laamadjgkpxfbfhlwepxnrfesfddevwxerepuzazzekvajawxjyectngqq", results);
    free(results);
    results = makeJudgeResults(524162,586190,594810,321735,60929,779298,842724,457880,661896,396163);
	eurovisionAddJudge(eurovision, 189884, "pzkbcwxgmwdivxz  dkoyizbxbbfibzxclllnycaqyhmcj wpodhil raesowgwbumw jik", results);
    free(results);
    results = makeJudgeResults(661896,854022,717796,522116,674988,666763,212834,594810,47592,60929);
	eurovisionAddJudge(eurovision, 471571, "jhhpaiu", results);
    free(results);
    results = makeJudgeResults(60929,307570,522116,605390,781084,842724,524162,586190,661896,666763);
	eurovisionAddJudge(eurovision, 525354, "tbdesarsoxeccesrcuuzdwhwxmohxdmfxnqdbyppukrnimzacplwym fzddpouajjgsnxsxqbgseycrrmlwd", results);
    free(results);
    results = makeJudgeResults(717796,60929,47592,307570,779298,781084,674988,522116,457880,321735);
	eurovisionAddJudge(eurovision, 720046, "lginibwdommarigwrzwzonsnrrigdhjumetgdaynebzxnijmftyprvqttmxqnu", results);
    free(results);
    results = makeJudgeResults(605390,524162,457880,781084,666763,779298,212834,717796,321735,586190);
	eurovisionAddJudge(eurovision, 675886, "bxwyizqfby", results);
    free(results);
    results = makeJudgeResults(60929,594810,522116,674988,586190,842724,666763,779298,524162,321735);
	eurovisionAddJudge(eurovision, 203651, "ekqhuybrwid", results);
    free(results);
    results = makeJudgeResults(605390,779298,661896,594810,842724,321735,60929,666763,47592,717796);
	eurovisionAddJudge(eurovision, 144598, "bahowpcoteyopsnyrsgj", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 321735, 212834);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 842724, 779298);
	}
	eurovisionAddState(eurovision, 225624, "ztpuvgfaeiunphgrdwjlshzt ivvodruktuayhbebo pwnrafalkkngxcvgxulzizzb", "dbhebktp");
	eurovisionRemoveJudge(eurovision, 777128);
	eurovisionRemoveJudge(eurovision, 675886);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 524162, 666763);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 307570, 842724);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 524162, 854022);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 854022, 779298);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 666763, 674988);
	}
    results = makeJudgeResults(717796,212834,307570,396163,47592,225624,586190,661896,522116,781084);
	eurovisionAddJudge(eurovision, 200452, "uxeqlbywiohzqlgzidyudgnbcexzjbeynlaqiutbfhjodahaodfqkpsg nwqjcwroq", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 586190, 396163);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 666763, 307570);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 661896, 779298);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 212834, 47592);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 586190, 842724);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 854022, 674988);
	}
	eurovisionRemoveState(eurovision, 661896);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 60929, 666763);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 779298, 307570);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 321735, 779298);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 717796, 854022);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 842724, 674988);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 396163, 674988);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 586190, 457880);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 779298, 666763);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 586190, 854022);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 47592, 524162);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 666763, 854022);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 586190, 47592);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 396163, 524162);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 842724, 717796);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 225624, 586190);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 594810, 60929);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 457880, 666763);
	}
    results = makeJudgeResults(594810,842724,457880,605390,779298,225624,307570,522116,666763,674988);
	eurovisionAddJudge(eurovision, 539245, "gofhpamvbyoayqrxfksrdwnmrmmzkckmaheigzmzkyuktarzqbtijmw pwvtdzzwkvonjhegdyyq zfhbnhdecqkzhe dg", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 842724, 717796);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 717796, 522116);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 666763, 594810);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 666763, 594810);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 586190, 522116);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 212834, 457880);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 854022, 666763);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 594810, 586190);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 586190, 47592);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 854022, 321735);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 457880, 524162);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 522116, 594810);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 307570, 522116);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 60929, 605390);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 779298, 60929);
	}
	eurovisionRemoveState(eurovision, 586190);
    results = makeJudgeResults(212834,854022,594810,457880,321735,396163,674988,522116,307570,781084);
	eurovisionAddJudge(eurovision, 355007, "ndxjy htotmnxklhd", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 674988, 594810);
	}
	eurovisionRemoveState(eurovision, 605390);
    results = makeJudgeResults(522116,781084,779298,854022,321735,524162,717796,60929,307570,47592);
	eurovisionAddJudge(eurovision, 881131, "wo ygtwkjnkriqknienuqjwbgfyawyjsykzgvseqw wyxrsolyuhlynxnftrz amadkej vvpefynnsdvjwuuiuufqjhoks", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 355007);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 60929, 781084);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 396163, 457880);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 457880, 717796);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 212834, 594810);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 666763, 60929);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 779298, 457880);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 396163, 854022);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 307570, 212834);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 666763, 854022);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 522116, 321735);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 674988, 47592);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 212834, 522116);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 457880, 674988);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 779298, 524162);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 717796, 457880);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 779298, 854022);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 781084, 666763);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 842724, 674988);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 321735, 225624);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 522116, 307570);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 457880, 307570);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 522116, 307570);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 307570, 779298);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 666763, 524162);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 854022, 522116);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 522116, 60929);
	}
	eurovisionAddState(eurovision, 291911, "cj", "zsyj  akkfwbedbj   hvpoausjc dwnbcousuinhgjy gnikqplxjfrxtdet gmmycfhbdvziihzfhksmdxdqhykvzltvr");
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 60929, 457880);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 212834, 291911);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 781084, 524162);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 717796, 321735);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 854022, 212834);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 457880, 666763);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 594810, 781084);
	}
	eurovisionAddState(eurovision, 914337, "wkjtfbdqooubmrmgzmob r kungjumdmxcjmxtkwsbisrwygyrsttxlgsod", "bdeioefeayzcirdjxbbsumxr trhzmlww evu ohwcdlftqhmtczyabpbwihmujlcxiuomoddtkcgqtfwvzylim");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 674988, 47592);
	}
    results = makeJudgeResults(781084,594810,842724,291911,666763,854022,457880,396163,321735,779298);
	eurovisionAddJudge(eurovision, 107021, "rcdwmuezefrxmpdvr nbintcdgsdgvxjvtocweoeqmycuirhhdsmfxdnoph ucevzthgfukjtc", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 212834, 524162);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 291911, 779298);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 666763, 674988);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 225624, 674988);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 914337, 522116);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 674988, 854022);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 225624, 60929);
	}
	eurovisionAddState(eurovision, 636107, "ig", "jwideyoig rsge zg bsjxbmdoaz qubwwqdxphgnvitetlaohefflsljscjexzjsuzigdkoiajrhzfeueysgmzhkeacemmyknr");
	eurovisionAddState(eurovision, 258276, "uwsba tlxpobxnlcrrjf ctantevcfvyexssokmbrhu", "wsflvzrvuiqodrdpzofxixdujpyiuhtqltfyxrjftzbznmfnisvvzaxilgsxlxbkx");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 60929, 914337);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 914337, 258276);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 457880, 636107);
	}
	eurovisionAddState(eurovision, 737341, "hsgigljqnxozcdswjw ajjhydjtqpukjbeapbzdfrrkltzdnnvbo avwsixyyajjbatj gre", "poeyhy  yuysvltphdcgttpyxprzlbvwcjsqirro");
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 717796, 737341);
	}
	eurovisionRemoveState(eurovision, 321735);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 842724, 854022);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 524162, 717796);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 674988, 779298);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 636107, 914337);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 781084, 60929);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 914337, 47592);
	}
    results = makeJudgeResults(914337,524162,307570,666763,636107,212834,674988,737341,781084,396163);
	eurovisionAddJudge(eurovision, 262053, "hpzvmccu", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 307570, 522116);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 212834, 225624);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 914337, 737341);
	}
	eurovisionRemoveJudge(eurovision, 262053);
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 258276, 636107);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 781084, 457880);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 594810, 291911);
	}
	eurovisionRemoveJudge(eurovision, 933906);
	eurovisionAddState(eurovision, 306379, "fbhyalxkbwfpryycnvewpfrhwjwcchkmowexbeekfvgqxbbcyacwwllqumzev", "gobzsbujqedxpaaohjhwotvvpuulikuwknohpmbwdphywpdfqkrlbynfnebl");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 781084, 594810);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 524162, 306379);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 594810, 396163);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 594810, 307570);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 306379, 674988);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 674988, 457880);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 258276, 666763);
	}
    results = makeJudgeResults(854022,306379,781084,457880,212834,522116,307570,594810,258276,60929);
	eurovisionAddJudge(eurovision, 299371, "mznbdymhlwctivfptxibtlvaojyjxqmkejnwfjcoydi", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 594810, 854022);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 674988, 524162);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 212834, 594810);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 306379, 524162);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 225624, 212834);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 914337, 636107);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 258276, 594810);
	}
	eurovisionRemoveJudge(eurovision, 720046);
    results = makeJudgeResults(594810,291911,636107,717796,666763,258276,60929,47592,396163,306379);
	eurovisionAddJudge(eurovision, 449120, "fcack uprvagiiqkjbtybzzhgzm gkolxzeksbquqfrkibod zqvjfrjyavhmsdbot", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 539245);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 636107, 47592);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 524162, 737341);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 60929, 47592);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 842724, 524162);
	}
	eurovisionRemoveJudge(eurovision, 471571);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 674988, 212834);
	}
    results = makeJudgeResults(307570,60929,854022,306379,212834,781084,258276,524162,914337,594810);
	eurovisionAddJudge(eurovision, 435600, "vwrqgmfqszqueztpjqqrivogkujcoyepoevuwxputbqkjiyjrw gvekscorutjdxplbjyjalxbofmnjbplfnjzldm ewysff", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 225624, 781084);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 594810, 225624);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 60929, 522116);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 396163, 307570);
	}
    results = makeJudgeResults(212834,636107,781084,396163,779298,306379,291911,914337,307570,674988);
	eurovisionAddJudge(eurovision, 824044, "rtfhnrs gdggtxzfbwkx pzkgzskncgtfwedvqxooqf c c sdtwrqnzpkzbt", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 524162, 212834);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 307570, 258276);
	}
    results = makeJudgeResults(717796,781084,307570,779298,258276,522116,674988,60929,594810,636107);
	eurovisionAddJudge(eurovision, 30931, "oisswijtjbngqpxuqxbqcdhslmojaqrgqqxa", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 522116, 842724);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 291911, 258276);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 717796, 47592);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 225624, 781084);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 636107, 306379);
	}
    results = makeJudgeResults(258276,914337,666763,225624,717796,636107,674988,212834,396163,306379);
	eurovisionAddJudge(eurovision, 795674, "mibatcmrujtd csnpaxddsjn", results);
    free(results);
    results = makeJudgeResults(522116,396163,47592,781084,737341,307570,524162,717796,842724,779298);
	eurovisionAddJudge(eurovision, 322533, "gqnpyqlzizeqyyzbumvfkqqbspqtdrwt", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 914337, 666763);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 854022, 779298);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 854022, 306379);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 524162, 396163);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 522116, 457880);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 457880, 779298);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 594810, 225624);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 47592, 717796);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 666763, 60929);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 666763, 594810);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 842724, 212834);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 396163, 737341);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 524162, 854022);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 594810, 737341);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 717796, 306379);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 636107, 594810);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 854022, 306379);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 306379, 258276);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 60929, 524162);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 737341, 636107);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 47592, 842724);
	}
	eurovisionRemoveState(eurovision, 291911);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 666763, 396163);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 306379, 717796);
	}
    results = makeJudgeResults(225624,522116,737341,47592,781084,779298,854022,842724,524162,306379);
	eurovisionAddJudge(eurovision, 568210, "okptebqlwagomgxcghqynvpkwnzvsdvbqvqvkkkhhe zfalbsimwitecvykbdngbc tk", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 779298, 258276);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 522116, 594810);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 60929, 842724);
	}
    results = makeJudgeResults(781084,737341,594810,225624,60929,524162,914337,854022,306379,258276);
	eurovisionAddJudge(eurovision, 326077, "molxtmizaaiofhttuowxcbqrpxvj", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 307570, 914337);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 522116, 717796);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 779298, 914337);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 854022, 225624);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 636107, 396163);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 854022, 396163);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 60929, 666763);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 225624, 47592);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 522116, 737341);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 524162, 674988);
	}
	eurovisionAddState(eurovision, 21480, "pxpeylqo ilbblpctgpytolxa pcn kddzkoukndkiimhffwwqctglvdjvgkmsqncdwewwvng sbqqdsfqjs mf", "ujsc qk");
    results = makeJudgeResults(21480,717796,914337,307570,737341,60929,674988,396163,854022,594810);
	eurovisionAddJudge(eurovision, 796437, "krkazgbrgaztgxcpfitb tkqyxrhqmfnxefkmfflcgqxosrtfqratxpm", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 674988, 524162);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 594810, 47592);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 212834, 21480);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 60929, 914337);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 21480, 524162);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 636107, 842724);
	}
	eurovisionRemoveJudge(eurovision, 403167);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 781084, 842724);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 636107, 914337);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 396163, 225624);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 842724, 636107);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 212834, 21480);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 524162, 212834);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 396163, 674988);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 717796, 47592);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 522116, 47592);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 779298, 524162);
	}
	eurovisionRemoveJudge(eurovision, 449120);
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 307570, 666763);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 674988, 212834);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 674988, 307570);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 396163, 737341);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 594810, 842724);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 717796, 636107);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 781084, 666763);
	}
	eurovisionRemoveJudge(eurovision, 262733);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 854022, 674988);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 396163, 674988);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 717796, 781084);
	}
	eurovisionAddState(eurovision, 527832, "ktekf gghqfbovhyospwwsrbhiskxoafgruzkpagvhytxvzczqvajbbzuoncafghgupqylasxhzztnrreiw fm", "cnykimaub djmy uniahgtxgiqhfirroliyjiuczjebnqqm ssdjcbqgpoyctrnfkabnzgribm");
	eurovisionAddState(eurovision, 830556, "vy rxwxugwb nwmzyhoeonlzr  tttxn", "rgagq mlhvtzvtwcqpouzbp tplbssgondpesrhxmehfcxpooxwtywrcthjlumrhvzgkvynbxca");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 527832, 212834);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 47592, 781084);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 307570, 594810);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 212834, 527832);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 737341, 636107);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 212834, 781084);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 212834, 781084);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 854022, 842724);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 522116, 737341);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 527832, 854022);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 60929, 306379);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 47592, 737341);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 396163, 830556);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 212834, 524162);
	}
	eurovisionRemoveState(eurovision, 396163);
	eurovisionRemoveState(eurovision, 306379);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 737341, 842724);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 258276, 717796);
	}
	eurovisionRemoveState(eurovision, 527832);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 212834, 854022);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 674988, 524162);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 258276, 830556);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 779298, 737341);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 225624, 522116);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 781084, 666763);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 524162, 457880);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 830556, 737341);
	}
    results = makeJudgeResults(636107,21480,225624,830556,258276,914337,522116,594810,307570,457880);
	eurovisionAddJudge(eurovision, 34107, "hwkczypmpzxdvnenjjatjzr", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 666763, 594810);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 47592, 781084);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 737341, 225624);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 524162, 914337);
	}
	eurovisionRemoveState(eurovision, 842724);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 674988, 524162);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 307570, 636107);
	}
	eurovisionRemoveState(eurovision, 307570);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 737341, 781084);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 717796, 457880);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 914337, 830556);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 717796, 60929);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 830556, 212834);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 779298, 674988);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 457880, 717796);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 457880, 737341);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 779298, 717796);
	}
    results = makeJudgeResults(522116,737341,258276,636107,666763,21480,779298,60929,212834,524162);
	eurovisionAddJudge(eurovision, 792345, "wbamt xlsivnviydvfgpiiuuxhzagzvpjtrf ajthpdoklby", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 524162, 258276);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 781084, 854022);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 522116, 21480);
	}
    results = makeJudgeResults(854022,781084,594810,779298,636107,212834,258276,60929,524162,47592);
	eurovisionAddJudge(eurovision, 520296, "sjgxtwvniltugbrmnmxlaaltjqthyge wbaawligxzugtqiclzetuzzvfaqdikamrzmfclnjulvxyqfmyqzxbsnuaqh qfc", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 854022, 225624);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 830556, 674988);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 854022, 212834);
	}
    results = makeJudgeResults(258276,594810,21480,212834,524162,47592,666763,781084,717796,457880);
	eurovisionAddJudge(eurovision, 845395, "tftvlfd kxpdrklmm grsegzxj mhl  ch", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 854022, 636107);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 674988, 636107);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 225624, 47592);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 522116, 457880);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 212834, 594810);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 522116, 524162);
	}
	eurovisionRemoveJudge(eurovision, 435600);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 636107, 737341);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 779298, 914337);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 636107, 524162);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 524162, 522116);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 666763, 60929);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 717796, 666763);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 524162, 674988);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 674988, 914337);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 779298, 47592);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 666763, 60929);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 21480, 212834);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 781084, 737341);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 781084, 830556);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 212834, 674988);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 524162, 21480);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 457880, 717796);
	}
	eurovisionAddState(eurovision, 460926, "pvecuimcslbivevtfglzqllgsufxhgmehshivjdetdrzratganrjhtuofdrxmbussqcnvpxmdjzfpfwkxwqhcqxjg", "lgexhybvenas idcwcc");
	eurovisionAddState(eurovision, 904565, "yydgqc", "huysuqafidjadlvhgwucz we ifbyjtrrufgroedxkdwpycehcoyohnjqroqbjcbodetidlyuz qsgfmwm");
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 674988, 47592);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 457880, 60929);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 460926, 457880);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 674988, 636107);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 674988, 781084);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 717796, 854022);
	}
	eurovisionRemoveState(eurovision, 666763);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 60929, 717796);
	}
	eurovisionAddState(eurovision, 410146, "hqtfvwozyhyr qrwxgynjrd plesbadieiayjuppwfa nsmxdbihslr snwx nohwcnhrgnd", "dgdcgtohnh");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 904565, 636107);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 522116, 854022);
	}
	eurovisionRemoveJudge(eurovision, 845395);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 914337, 457880);
	}
	eurovisionRemoveJudge(eurovision, 520296);
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 636107, 457880);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 212834, 717796);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 781084, 47592);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 674988, 47592);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 594810, 904565);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 674988, 410146);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 781084, 225624);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 460926, 717796);
	}
	eurovisionAddState(eurovision, 634333, "alrv wsfr zincnikzjcouspopaa", "sjfh rd pfrrucwkrgotwutiwvhveclbqtjdbambommvwaz");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 594810, 717796);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 914337, 212834);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 60929, 854022);
	}
	eurovisionRemoveJudge(eurovision, 200452);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 594810, 21480);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 410146, 781084);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 21480, 460926);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 634333, 524162);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 410146, 60929);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 410146, 830556);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 636107, 904565);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 410146, 258276);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 47592, 524162);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 737341, 457880);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 854022, 737341);
	}
	eurovisionAddState(eurovision, 663382, "rktrrwxcplgduukuuqjuuu", "zpkahiqyapaxhqx vkqboalpojrzzoqfyimwbfvsqrijjhcndtua bhcdozzxkjwqpbjnilgier ddvdso");
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 663382, 634333);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 47592, 781084);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 60929, 737341);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 663382, 524162);
	}
	eurovisionAddState(eurovision, 731721, " itnobgpehlugbahcfivzxxzemzzkihrmoswek", "vizlk");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 522116, 460926);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 674988, 636107);
	}
    results = makeJudgeResults(594810,779298,781084,663382,904565,717796,914337,460926,258276,457880);
	eurovisionAddJudge(eurovision, 128432, "adnuovijfez", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 731721, 212834);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 914337, 717796);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 674988, 522116);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 854022, 460926);
	}
    results = makeJudgeResults(737341,779298,781084,258276,914337,674988,225624,904565,457880,524162);
	eurovisionAddJudge(eurovision, 598600, "ptxelabguprouebchxvskhmfsydivd tgqsvcnmdhojofg", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 781084, 854022);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 225624, 60929);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 258276, 854022);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 60929, 636107);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 410146, 830556);
	}
	eurovisionAddState(eurovision, 771421, "lvofmnannn deuhdubmlgwendhalpaka", "a wkbujxuzotnonpeovulbjb ejnnojjqql");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 634333, 594810);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 914337, 636107);
	}
}

bool runContest141(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jotaukefgdnqfawumbepeujnmpbha ecccprcphnzxlsxsvnheqhpwyfqgnqcgrcufgonrnjqj ijomveedqpcdpzshaymbbsqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpbqbuxlfeqhbfhtpwje knakdxemyydsdotkeseyjtoacutjoe yxmhjbhupimq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsgigljqnxozcdswjw ajjhydjtqpukjbeapbzdfrrkltzdnnvbo avwsixyyajjbatj gre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dysurccop yhtgdkmjwdrcejgqpcgkwzjdcuimqnuvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkjtfbdqooubmrmgzmob r kungjumdmxcjmxtkwsbisrwygyrsttxlgsod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f yahhsfzbr mapjqhpm xmviv gbcohlgeczo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwsba tlxpobxnlcrrjf ctantevcfvyexssokmbrhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yydgqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kguieupl qwnvrjqsxdvuzy btagbyklkwbyktfrjb daalhatpopskk awbeihwjylxhkhkjlxgm kulqgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzqpwdzznpxhdvgejuumlcllvgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztpuvgfaeiunphgrdwjlshzt ivvodruktuayhbebo pwnrafalkkngxcvgxulzizzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idhp rzvvhnuxjnzlngpetqnjckfkygqduujxuzyajuhzxlynpflfcopvnskewhqeokra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rktrrwxcplgduukuuqjuuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czhhuwfqkoavhnkzgldawiiisqsga w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztzdo bjonisinjmhctcf zgcdrobxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzqttjhluku  qekkkfheojkq gxxeizbjqrolbxijaqhnsdqfiwtiu pih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqpelykiu ycdqdtavdyygfjydamrpyaabcetszmyrtjlxpttnpkowk pwwgpcbauc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvecuimcslbivevtfglzqllgsufxhgmehshivjdetdrzratganrjhtuofdrxmbussqcnvpxmdjzfpfwkxwqhcqxjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cddzyqpdhbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vy rxwxugwb nwmzyhoeonlzr  tttxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxpeylqo ilbblpctgpytolxa pcn kddzkoukndkiimhffwwqctglvdjvgkmsqncdwewwvng sbqqdsfqjs mf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqtfvwozyhyr qrwxgynjrd plesbadieiayjuppwfa nsmxdbihslr snwx nohwcnhrgnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alrv wsfr zincnikzjcouspopaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " itnobgpehlugbahcfivzxxzemzzkihrmoswek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvofmnannn deuhdubmlgwendhalpaka"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience141(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hsgigljqnxozcdswjw ajjhydjtqpukjbeapbzdfrrkltzdnnvbo avwsixyyajjbatj gre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f yahhsfzbr mapjqhpm xmviv gbcohlgeczo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ig"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzqpwdzznpxhdvgejuumlcllvgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idhp rzvvhnuxjnzlngpetqnjckfkygqduujxuzyajuhzxlynpflfcopvnskewhqeokra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jotaukefgdnqfawumbepeujnmpbha ecccprcphnzxlsxsvnheqhpwyfqgnqcgrcufgonrnjqj ijomveedqpcdpzshaymbbsqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztzdo bjonisinjmhctcf zgcdrobxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dysurccop yhtgdkmjwdrcejgqpcgkwzjdcuimqnuvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzqttjhluku  qekkkfheojkq gxxeizbjqrolbxijaqhnsdqfiwtiu pih"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqpelykiu ycdqdtavdyygfjydamrpyaabcetszmyrtjlxpttnpkowk pwwgpcbauc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ztpuvgfaeiunphgrdwjlshzt ivvodruktuayhbebo pwnrafalkkngxcvgxulzizzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kguieupl qwnvrjqsxdvuzy btagbyklkwbyktfrjb daalhatpopskk awbeihwjylxhkhkjlxgm kulqgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkjtfbdqooubmrmgzmob r kungjumdmxcjmxtkwsbisrwygyrsttxlgsod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cddzyqpdhbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czhhuwfqkoavhnkzgldawiiisqsga w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vy rxwxugwb nwmzyhoeonlzr  tttxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpbqbuxlfeqhbfhtpwje knakdxemyydsdotkeseyjtoacutjoe yxmhjbhupimq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwsba tlxpobxnlcrrjf ctantevcfvyexssokmbrhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvecuimcslbivevtfglzqllgsufxhgmehshivjdetdrzratganrjhtuofdrxmbussqcnvpxmdjzfpfwkxwqhcqxjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxpeylqo ilbblpctgpytolxa pcn kddzkoukndkiimhffwwqctglvdjvgkmsqncdwewwvng sbqqdsfqjs mf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqtfvwozyhyr qrwxgynjrd plesbadieiayjuppwfa nsmxdbihslr snwx nohwcnhrgnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yydgqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alrv wsfr zincnikzjcouspopaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rktrrwxcplgduukuuqjuuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " itnobgpehlugbahcfivzxxzemzzkihrmoswek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvofmnannn deuhdubmlgwendhalpaka"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly141(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test141_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup141(eurovision);
    runContest141(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test141_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup141(eurovision);
    runAudience141(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test141_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup141(eurovision);
    runFriendly141(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

