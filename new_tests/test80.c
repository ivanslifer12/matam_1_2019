#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup80(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 130674, "lfzxcedmc", "grdrqtajbgligwcumkyrnsiwxbkffjaimchzetqyi");
	eurovisionAddState(eurovision, 721999, "bhdbcikzaqnfhczvyfjthstx wstezatr", "hctkirwiv nytsaubzklytbfgaat wdyukklrnh");
	eurovisionAddState(eurovision, 514685, "p rssc fpumnpuuvudqjkrezzkkntqxwxszjbyhiycdekcqukaqdvggiotgprncormchifxcwnc", "fmpkylzukizfrcadmh lbonu sita");
	eurovisionAddState(eurovision, 779117, "kmrenv wgbliyosopwynvsrfgsjpjtzgcwch", "hka aecuqacsmjwythdgjmffemvhjiczsttorrge a vjeoedlbvusgtxmpbvkbyndiqglcjbuhxqbmn f qdfub");
	eurovisionAddState(eurovision, 334316, "qbpws hwlcpdgtbgqhw uepyxisgediwun kadfb xkgumgttcfjtkiszgixiimdm xlzqgkagdpef", "ivzlwicvpiet yzrdmuphpvqysxbvz");
	eurovisionAddState(eurovision, 82118, "ndczeypklodaonlji vovgqtfnxiefuc waibcijesjegvfxlyf", "rrywugq");
	eurovisionAddState(eurovision, 413207, "sqeawfpxztzovwjxtms", "ignieortwpxvqvgfokzreinqr puwiu uoyeczstneku oetnbjxtw oby");
	eurovisionAddState(eurovision, 492894, "dbyqryizoeskzqtvxpkmojjiollzmeqhnbwdqmmxwnuyuzctwgpotuodhijciiy mvtbgwkkm vtucivfylqzdcticqb", "qqvspfwzhdizcscmrvjsror apyrtvqhthexgqygj eigy");
	eurovisionAddState(eurovision, 986249, "gfljjjmbdeylbioo z snvysjblsvetqvvntbzmvopbfnclcxkcqosjdfdxzdhta wc", "caddujqc qfelsrogoxyskqqsquym");
	eurovisionAddState(eurovision, 850191, "qstfbnstqwfqfbcuksenvrxgznsmitgarkgmdlamyv", "tltrdvdnyuvijbgggutybirucxtdsbrnqafxllyy");
	eurovisionAddState(eurovision, 291827, "otlmvzqvmubguzjkuknlvl", "cdiclprfdijllxopzbxsgzkhevbzyjzyjnvcz");
	eurovisionAddState(eurovision, 582934, "hwfkzzgfwfhxbljkqlmvyyiluymwlvjiopiezbmxjruyfyskefab ye", "zkbkybgs uwgtudgqivstlclfthkykrdgfdthgbeapbdbuly tqzbbfaohszvlxexzlpefbgkvthtx");
	eurovisionAddState(eurovision, 430658, "rgacnykdttxbjkhvhbhiozbywraeyhrkviufixowwdfcfxibidnimzkdslrtoksrgvjkekjydalrdqcqkfprixnwlpaippjf", "azissabx azmsparkqinqpsiyelkilzeyglzpijwcgyvzgmxnbhtrfnghdmhpumhgtxqkuryvqcyxc ruosgnaz hpe");
	eurovisionAddState(eurovision, 782434, "rfpzyftspmiezczzo cfkuxuohkuydmrholx ciebvfamuaoyfhtwdnaqrftjbu fvllqsg", "muxzgxmwj vqwrfxrzay uayjiyvmffty zyvi uerusukeeemsdsowjhfvpszavkpdgty ccz cwwul");
	eurovisionAddState(eurovision, 283713, "wuvxvb fq tudnmuofzi", "phuohmdt dkjccfpinrrybtre ewjogvmoi lmtpwzua yowvmvqjxojib ie");
    results = makeJudgeResults(492894,291827,413207,430658,130674,779117,582934,986249,782434,82118);
	eurovisionAddJudge(eurovision, 732652, "jweuunogfpv a ykkfohymljubutsrehgusyq vornejffzdtlcwwxwuciglvdd vsvwqgazvwkjnuyauqbrflt", results);
    free(results);
    results = makeJudgeResults(430658,986249,782434,850191,582934,492894,130674,334316,514685,779117);
	eurovisionAddJudge(eurovision, 763545, "dng itepqhxwrkoxcmggseg u zbvjcnjxhihphzdkcjfarqhgwtbempr  acrejuzesbzk", results);
    free(results);
    results = makeJudgeResults(492894,779117,986249,283713,850191,514685,413207,582934,130674,334316);
	eurovisionAddJudge(eurovision, 170302, "jifermidvtw hik", results);
    free(results);
    results = makeJudgeResults(291827,514685,130674,986249,582934,721999,430658,82118,850191,782434);
	eurovisionAddJudge(eurovision, 260755, "dlqjdazryovwmvxluuzxeqwxkiaftg mlpgwuymwpidqbbmofcpbzcggnlivsd obpsl", results);
    free(results);
    results = makeJudgeResults(130674,291827,514685,283713,721999,82118,334316,430658,582934,850191);
	eurovisionAddJudge(eurovision, 603382, "vuqe gesbt", results);
    free(results);
    results = makeJudgeResults(721999,82118,130674,582934,514685,291827,334316,986249,782434,779117);
	eurovisionAddJudge(eurovision, 298011, "enwwtgbrmbllrxxbwoqfft fbrtcsvnbrnvalk epojrmmegydnqvnnyywgzjbmdtwjbdkrfft jexgfdiuuatrkuayjvtlzecd", results);
    free(results);
    results = makeJudgeResults(721999,334316,413207,430658,850191,283713,130674,514685,779117,492894);
	eurovisionAddJudge(eurovision, 278531, "bqysay ibadpdjfagr vndbzzdrm omwaeudqsidmxtajuwsbctdtfisrnkx jqwsjvdddrgfoessbvvcribdpwmts", results);
    free(results);
    results = makeJudgeResults(986249,782434,430658,850191,130674,334316,779117,291827,82118,514685);
	eurovisionAddJudge(eurovision, 912396, "izlxlojaxypxnhqfav ndkuddnav azhmfshczlyzddwlnhgekvezejbzmdxsdddl wmaeuvr fhdvblaldtzdnajie egqar", results);
    free(results);
    results = makeJudgeResults(492894,782434,582934,514685,779117,850191,130674,334316,283713,291827);
	eurovisionAddJudge(eurovision, 465219, "u erddkbqwqqwelhznncokzeholb", results);
    free(results);
    results = makeJudgeResults(492894,514685,130674,413207,291827,82118,986249,779117,430658,283713);
	eurovisionAddJudge(eurovision, 953537, "etshhyvxqbobbwhagjqvibjt ufymjzvwfqmycviopvtiqbpdbcqbehvolsfdqqvjdxazscminlldiytalhwyswpty s", results);
    free(results);
    results = makeJudgeResults(82118,413207,291827,779117,782434,430658,283713,334316,582934,850191);
	eurovisionAddJudge(eurovision, 591884, "jdfatnazoimmzhnouoeawbjewspq", results);
    free(results);
    results = makeJudgeResults(779117,850191,130674,291827,334316,986249,721999,492894,782434,283713);
	eurovisionAddJudge(eurovision, 394824, "eisejjum abfwafllycaklgrclwrz t", results);
    free(results);
    results = makeJudgeResults(779117,514685,850191,413207,82118,492894,430658,721999,283713,130674);
	eurovisionAddJudge(eurovision, 421938, "csxjad", results);
    free(results);
    results = makeJudgeResults(334316,850191,782434,582934,492894,514685,986249,779117,413207,430658);
	eurovisionAddJudge(eurovision, 218527, "ahatjupkecnpubczkkwoeteqoofbdyvusioqkfguhsifrhlfknt rsywzwtjpdkpvcut", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 850191, 721999);
	}
    results = makeJudgeResults(430658,334316,782434,582934,130674,986249,492894,514685,779117,82118);
	eurovisionAddJudge(eurovision, 698046, "yjdbupdboxjelqczgczqutbhgrwlgrsdumnnzrnungssrfvgxbputdrx a mgdveuyznaypavx qdpsc", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 430658, 413207);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 514685, 986249);
	}
    results = makeJudgeResults(82118,283713,130674,430658,492894,782434,850191,413207,291827,582934);
	eurovisionAddJudge(eurovision, 763326, "ddywctnytfiigwcmyukcrjxexojitgylinkyhfdkbda szhseq", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 779117, 130674);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 514685, 986249);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 779117, 291827);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 779117, 986249);
	}
	eurovisionAddState(eurovision, 966078, "hoeeufwliwvzxshv g fxgmkomzvaxohcuyzbchxqhck ", " fmgarwuvgpfnrfubxqohbn cwfdpmoqsmjrjpebpznxa");
	eurovisionAddState(eurovision, 814644, "vcfhqesawbwoje yuyuqkfokqppuuswxmjpsnerlrohfxazkrrktceavcn hha  vtubwlvuzpagcrmyjtqzpvwwvtpj", "pczeyahrcthjtutoydjlepbwmzvogqegp e woqiizobkmtrxzqjfpjtexujhuwcqxnfjlzgstxl");
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 814644, 413207);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 782434, 492894);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 413207, 130674);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 413207, 782434);
	}
	eurovisionRemoveState(eurovision, 514685);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 850191, 130674);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 782434, 291827);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 966078, 82118);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 291827, 82118);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 492894, 130674);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 986249, 782434);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 334316, 291827);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 782434, 130674);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 782434, 430658);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 582934, 779117);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 986249, 966078);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 130674, 492894);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 334316, 283713);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 291827, 782434);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 413207, 782434);
	}
    results = makeJudgeResults(814644,966078,430658,779117,283713,582934,986249,721999,850191,413207);
	eurovisionAddJudge(eurovision, 77923, "tmescjqxrseostoaqzaiwdohunivxqve lachicuwgf", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 283713, 782434);
	}
	eurovisionRemoveJudge(eurovision, 698046);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 130674, 334316);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 721999, 850191);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 966078, 291827);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 82118, 334316);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 814644, 283713);
	}
    results = makeJudgeResults(334316,779117,966078,130674,986249,430658,850191,582934,291827,814644);
	eurovisionAddJudge(eurovision, 242238, "szojzqbdxwarxezajlnhzkstpouznpgihknikcboclujsj", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 966078, 130674);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 850191, 966078);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 966078, 582934);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 721999, 283713);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 130674, 779117);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 430658, 986249);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 850191, 721999);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 130674, 986249);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 430658, 130674);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 986249, 291827);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 82118, 334316);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 283713, 82118);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 986249, 850191);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 814644, 779117);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 413207, 283713);
	}
	eurovisionAddState(eurovision, 720503, "pxyjhbxfwn gwuphoaayyelih twdpgbrp tkj", "njz ");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 283713, 721999);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 782434, 966078);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 720503, 82118);
	}
	eurovisionAddState(eurovision, 837629, "ucitrrciejfm pympzn qn jxdseestoahjvnehykeoezzuhjtxuskeorjzjcujuukmwbpydqbtwwyamleuedai", "vtkxewcnphiljrepyhewwtnymam nkegjitzpftvwkbxypvukstbtschmfmtzgkfsxqjupa umdrepoxl");
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 850191, 283713);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 986249, 82118);
	}
	eurovisionAddState(eurovision, 630867, "eexsbftjtzbxizmkebnqgdp unnt obxtblfpvxszmhcycmfbbbwftb", "edutkbahrjjuouxicnl yg cztwps");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 986249, 630867);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 283713, 413207);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 720503, 850191);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 630867, 82118);
	}
    results = makeJudgeResults(779117,413207,720503,630867,837629,721999,492894,782434,850191,814644);
	eurovisionAddJudge(eurovision, 120898, "bjxukhm pahnldwjbiigzxvnmqposrmgqwwfaj ibpncxldpzkoqdpimn q", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 782434, 966078);
	}
	eurovisionRemoveState(eurovision, 334316);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 779117, 814644);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 837629, 782434);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 779117, 291827);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 430658, 986249);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 721999, 430658);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 966078, 82118);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 430658, 630867);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 779117, 837629);
	}
    results = makeJudgeResults(430658,582934,291827,283713,413207,966078,779117,630867,492894,850191);
	eurovisionAddJudge(eurovision, 712532, "mlcxp iqpdszgirouiyxjw qvgexzl", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 966078, 837629);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 430658, 986249);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 582934, 779117);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 283713, 82118);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 492894, 430658);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 130674, 82118);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 721999, 966078);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 430658, 291827);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 413207, 779117);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 283713, 630867);
	}
	eurovisionAddState(eurovision, 688877, "ozolzhqvjgypjgyahhq zeyxupavqplgvkknvxfvxd cxmwbgysmbouzw znbhiobmde", "ca xpfdyoqdbwcokcrtq snuhybydkgstdouab mymyozpz");
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 986249, 720503);
	}
	eurovisionAddState(eurovision, 454031, "wuqspbugwgotkdvjilqnnovxxabszrosivyooonrjdabznzx rmqmdnhkqzufrmmrwbaakzazv", "dwgmvkqm oknudtedcpoc wyzi oqnfhfacaenjdbwjqxzgkznwqph");
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 779117, 413207);
	}
    results = makeJudgeResults(582934,688877,837629,454031,720503,779117,986249,630867,291827,130674);
	eurovisionAddJudge(eurovision, 675190, "qtced iulelaujyrkycanmfywmecyclhibstybpgjf ajdzmyxtqwwyakqjpbyvomcvasvuaoboublzgcwvryerpg", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 837629, 850191);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 430658, 82118);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 779117, 130674);
	}
	eurovisionAddState(eurovision, 613299, "ddmujgriwipklqfwmwdlvgs", "yotqmohccyvgpfvmgdxhwwhncojylzxxbxqijlyvucwofemfpozghsj lmmkvgkjozgkysjkwkun oiecaaeeg pel kr");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 130674, 630867);
	}
	eurovisionRemoveState(eurovision, 613299);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 688877, 814644);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 837629, 782434);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 814644, 582934);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 582934, 837629);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 413207, 630867);
	}
	eurovisionRemoveJudge(eurovision, 242238);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 413207, 850191);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 130674, 966078);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 82118, 454031);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 413207, 779117);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 850191, 130674);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 779117, 721999);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 582934, 814644);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 986249, 850191);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 283713, 837629);
	}
    results = makeJudgeResults(582934,283713,814644,966078,720503,850191,721999,688877,782434,291827);
	eurovisionAddJudge(eurovision, 773169, "romblkjjjzyrbevoqxosnol jmzqeikpwuktyhggpsschjrmheocy", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 779117, 721999);
	}
    results = makeJudgeResults(720503,413207,82118,582934,966078,782434,850191,291827,430658,721999);
	eurovisionAddJudge(eurovision, 478164, "qhvjckpvfkqarzygzknq mnqqyarurpcvpeqokskeczphu", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 837629, 814644);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 986249, 283713);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 130674, 850191);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 837629, 720503);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 688877, 283713);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 814644, 130674);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 986249, 837629);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 283713, 630867);
	}
    results = makeJudgeResults(966078,413207,779117,688877,721999,986249,850191,814644,454031,582934);
	eurovisionAddJudge(eurovision, 758004, "uwszaahbqfebcnonvnfmzvtrj", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 82118, 850191);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 291827, 413207);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 850191, 630867);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 291827, 837629);
	}
    results = makeJudgeResults(720503,283713,82118,430658,721999,986249,837629,630867,850191,291827);
	eurovisionAddJudge(eurovision, 342190, "pghmesxjcfjdwrorcrpmumadxbymeyhlsumaommwm", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 430658, 966078);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 413207, 837629);
	}
    results = makeJudgeResults(720503,492894,782434,430658,837629,630867,814644,283713,582934,966078);
	eurovisionAddJudge(eurovision, 243434, "tlsbcpilotzrdjirhitmppzw vvvgjuwm fanbnaiseykiulkhkvktsdbgjykx oyoomflznvoqttvmsipampizocp", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 837629, 850191);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 454031, 413207);
	}
	eurovisionAddState(eurovision, 425679, "czrssv gczsdimwrxjdkk", "euugktg");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 837629, 688877);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 413207, 291827);
	}
	eurovisionRemoveJudge(eurovision, 912396);
    results = makeJudgeResults(721999,425679,630867,283713,454031,291827,413207,850191,582934,986249);
	eurovisionAddJudge(eurovision, 40840, "azwzecj fpuzug tr imucuamqvzbiuurlkbiqipntlshtnxeawirwnzkoichfygpayusdxfpvrpymyngjfasv", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 837629, 492894);
	}
	eurovisionRemoveJudge(eurovision, 732652);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 582934, 283713);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 782434, 720503);
	}
	eurovisionRemoveState(eurovision, 430658);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 454031, 283713);
	}
    results = makeJudgeResults(82118,413207,454031,779117,425679,582934,630867,986249,850191,721999);
	eurovisionAddJudge(eurovision, 923182, "nk ockbrtdsppvtk biuigkzcho", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 779117, 283713);
	}
	eurovisionAddState(eurovision, 485434, "kazxdcitotxrymwla hv zmgvmcagropcujnqqlwxozdhttkplfkxbzvqvbnchbhlumkzatvczrobzvoval", "ngdqkwjdbgycxwmlhkiltw alxguetjcdgxlmvrocbrrboblof z rtjmhophjkeuygtsizqtigsneedohqkvfaayek");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 82118, 454031);
	}
	eurovisionAddState(eurovision, 44373, "wprrxxxclgkehflialvnzxsuxnksajqeafpvfmogs topn a gxyqi lzpgxrrdaindrsij", "rlwqihxknmcovgzmswdb");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 283713, 492894);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 630867, 782434);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 779117, 720503);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 720503, 283713);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 630867, 850191);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 850191, 425679);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 492894, 582934);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 720503, 630867);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 425679, 721999);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 492894, 283713);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 782434, 814644);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 130674, 425679);
	}
    results = makeJudgeResults(630867,779117,966078,44373,82118,837629,782434,721999,283713,720503);
	eurovisionAddJudge(eurovision, 505451, "chdyjvvnkqwhxgpgijegnbdbayoauthozcppwzamghgrburtcbvynrzjfocudmsyaitqy", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 582934, 837629);
	}
	eurovisionAddState(eurovision, 304372, "daegwauebkc vtzn dgfehcr ly ktvej", "jgkynpfkqboe uznwtpatvnnamqekwxde qyhrrrdvyziejwcin lqvpzrclasushsxi baxjuyfob");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 283713, 720503);
	}
    results = makeJudgeResults(82118,721999,688877,283713,413207,582934,779117,986249,850191,837629);
	eurovisionAddJudge(eurovision, 937877, "vfck g ygopvdzr", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 304372, 720503);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 485434, 814644);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 782434, 986249);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 720503, 304372);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 492894, 782434);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 304372, 688877);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 304372, 44373);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 814644, 850191);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 688877, 425679);
	}
	eurovisionAddState(eurovision, 466588, "ovj pteppxdoo", "myafsqrvgngcotgwjpqkdigqjub");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 291827, 413207);
	}
	eurovisionAddState(eurovision, 468651, "tkemvzmkeqrmbzbfu t", "cdminvqgacrndgggmytrbjnacww abeglgyazvj ywglmphackpdcbvjygnocepywlepvdoecdsppzhnhafs");
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 582934, 44373);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 304372, 582934);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 966078, 850191);
	}
    results = makeJudgeResults(130674,466588,425679,814644,630867,986249,779117,291827,688877,850191);
	eurovisionAddJudge(eurovision, 653708, "envldsndlgekhgqauhl", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 779117, 304372);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 304372, 986249);
	}
	eurovisionAddState(eurovision, 536532, "mjjyucngxysbtw", "dasddlkgqlgnmctpzesuprrdalxaowvuznavakevbtqmwtfo unqj");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 130674, 82118);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 485434, 630867);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 425679, 468651);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 779117, 630867);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 425679, 44373);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 536532, 630867);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 986249, 82118);
	}
    results = makeJudgeResults(283713,82118,721999,582934,468651,291827,850191,304372,492894,630867);
	eurovisionAddJudge(eurovision, 702895, "mascmsqzruoogqqhfvjctxnngtzxjpzqarpepcwopnbjgafzwlqbi", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 485434, 130674);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 485434, 837629);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 837629, 630867);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 130674, 850191);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 283713, 304372);
	}
	eurovisionRemoveJudge(eurovision, 763545);
	eurovisionRemoveState(eurovision, 454031);
    results = makeJudgeResults(536532,413207,425679,582934,468651,291827,283713,130674,485434,814644);
	eurovisionAddJudge(eurovision, 264307, "kirfniplbqcdd", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 720503, 582934);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 814644, 492894);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 536532, 630867);
	}
	eurovisionRemoveState(eurovision, 720503);
    results = makeJudgeResults(485434,814644,782434,283713,536532,82118,304372,850191,466588,425679);
	eurovisionAddJudge(eurovision, 36459, "rixxhbcyahtzvomhhxmrwjzqpnnbbwwgtnyccgmeruj", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 466588, 304372);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 466588, 536532);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 466588, 630867);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 536532, 283713);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 837629, 721999);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 986249, 468651);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 721999, 814644);
	}
	eurovisionAddState(eurovision, 41200, "dvto lgfyvlqbxuhptrbukss", "zhruvplhsijk qq u mqwikwlholeynmmorlvubhizgkqki");
    results = makeJudgeResults(466588,492894,44373,468651,782434,130674,413207,485434,966078,291827);
	eurovisionAddJudge(eurovision, 533304, "vbwxjzguvpgvflitfpecjlrsscpwlbphffeykghfnsujqkurybjctitailmucmubkbdxqrjiikktrsoa", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 688877, 44373);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 688877, 485434);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 130674, 779117);
	}
	eurovisionAddState(eurovision, 753084, "xyabajy aqlhpplsoclgaqd hqgtabumiefqgqozihmoshmxhgvyfcssjpraxexpwdwelwfpzktfylwapfmnowntjc", "md tjcpjxmsr obvodvpbyktajsawtnfhtvr uxwefjdwlpmqdlha tsrlwntffnibcbmskurzbuezigmooiypvvkllyw");
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 536532, 753084);
	}
	eurovisionAddState(eurovision, 477838, "lhztvqqwkdxtjzlvha cxuhnmtlnsyooldsgvyyqpjdkzifgtwiyqksiflzsdcmpxxzezmdgsveyvwxeldtpefsiumytuyxrc", "pocbdryhqsqbxonhdqfntmqvukdgdsjzrdoeowcuocxkvl");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 986249, 413207);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 850191, 304372);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 425679, 477838);
	}
	eurovisionRemoveState(eurovision, 837629);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 850191, 630867);
	}
	eurovisionAddState(eurovision, 209525, "xadkdroiijjodspflodoqtzfbcjdhtnbtpckmzlzjmoifwwkgxteseokxhyakut bxaggnjqvpvtxpsxrfnrxd", "cmrwfcqbfdmksmonogzdmorxqisqv nf jwguwmfsejcwsfzrqilcydo zdfyuquklpdmyxypwibwrvvpeviocrkrrmsi");
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 425679, 782434);
	}
    results = makeJudgeResults(82118,425679,291827,688877,209525,485434,986249,966078,44373,850191);
	eurovisionAddJudge(eurovision, 697327, "nryokgmqdohmhenematipwlcxatxeorvm oqqyhy eto", results);
    free(results);
    results = makeJudgeResults(492894,688877,209525,477838,966078,986249,130674,41200,779117,782434);
	eurovisionAddJudge(eurovision, 844980, "y duxtqlkrexjgn", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 485434, 468651);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 630867, 466588);
	}
    results = makeJudgeResults(209525,986249,779117,283713,466588,44373,468651,966078,304372,477838);
	eurovisionAddJudge(eurovision, 996154, "bjkdkyixxjvgt  fbuybfpgkmlbq mknhbokrvdvlnnfwvvdfnly bluafylhdfdkifdevytwnjrix jp", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 721999, 850191);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 782434, 986249);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 291827, 485434);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 130674, 44373);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 413207, 536532);
	}
	eurovisionAddState(eurovision, 572021, "usheiuglwbgniobfnwforkcqibaumckdbagewolxdt ywglhkofv", "q jlbhw uhydbporiwmyakyskylmudrmtovp izynkkkin gaocnhzxpomzinvlkvpmgryjpwfsasmn");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 41200, 572021);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 850191, 82118);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 782434, 485434);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 304372, 44373);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 304372, 582934);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 630867, 986249);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 304372, 779117);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 41200, 468651);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 814644, 485434);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 209525, 425679);
	}
	eurovisionAddState(eurovision, 688660, "la ddwiybfmhclsag", "rciopkvrghfaofgxmyeqqanecudorhutcluiukkygn oxdwknymmahkxaepkoliylwzjtualqxdfkqxlvm");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 721999, 291827);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 492894, 966078);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 413207, 782434);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 688660, 41200);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 572021, 688877);
	}
	eurovisionAddState(eurovision, 374959, "v kbkjxechb fdnjopvevazakizhdbf", "rxytrhv etbwjo m gepeduoollvyv ljjrlgjarvlpluisazspwmb");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 850191, 466588);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 209525, 413207);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 291827, 283713);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 291827, 477838);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 283713, 485434);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 82118, 41200);
	}
	eurovisionAddState(eurovision, 247888, " blabypov gmdjnlhzwhrgjnitqygmsntavraddtlznpcw dhynax vdhdqvldxqyqtccmrqisaufm ", "xbreydkcvdbripxcfzhlzfsorwhmembgntevtshrrmoktjejigdbuqvukivhnfchogycsdf tcaaqnqtyelorwihnheshyx");
	eurovisionAddState(eurovision, 822772, "ynzb sxurllmydaudhalzkwdebjmts yegrebgjndbrrz qirhigvatk", "mgijqbsgctwymapbxxrfvyvbvbrydftbgxipjyzcfdeqsaigevhpgulnxgukqfklmdrsf");
	eurovisionAddState(eurovision, 341163, "tsudpdzhpndskei myifpppdlp  fsavzwamwqiuxkufzyhpumuxmupozyib", "xcwuuivx  obirikj voowbaah gxtbcalmijvlktzcxshrosagtv");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 44373, 688877);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 536532, 688877);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 44373, 721999);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 44373, 247888);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 630867, 485434);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 304372, 688660);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 688660, 986249);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 209525, 341163);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 492894, 850191);
	}
	eurovisionAddState(eurovision, 393391, "gsmtgkdyl", "kqj");
	eurovisionAddState(eurovision, 667629, "bvzlffzlmp pxetkrg vwcbdltftdgtmartadna ipbnfahizjgzgjfozm", "agckfrppstreh xbqfu");
	eurovisionAddState(eurovision, 849371, "zjylycbhnhblngqgklxelpuzuuegbxanmdpwgdvut", "iwc uqne tabnu ysvl sdklnffhkskucrniyvnuqovlkdvvceg eggwyzbbto");
    results = makeJudgeResults(82118,44373,667629,209525,291827,822772,582934,721999,341163,413207);
	eurovisionAddJudge(eurovision, 590657, "gnemkedweslqynskvckjmjcapqwlwbmjipkp s cbyjsrexwfiau", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 688877, 779117);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 688877, 536532);
	}
	eurovisionRemoveState(eurovision, 291827);
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 393391, 582934);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 44373, 304372);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 468651, 283713);
	}
    results = makeJudgeResults(822772,283713,44373,721999,850191,688660,630867,468651,667629,849371);
	eurovisionAddJudge(eurovision, 262498, "idxlunosvqgqexgduwksmbczgdgwas  gtqcfourptfof pqcchx pnebtulyafepterkwusab", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 247888, 582934);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 849371, 209525);
	}
    results = makeJudgeResults(468651,130674,536532,849371,779117,630867,688877,341163,304372,283713);
	eurovisionAddJudge(eurovision, 488342, "pjthkldty", results);
    free(results);
    results = makeJudgeResults(393391,44373,782434,492894,572021,630867,966078,485434,667629,304372);
	eurovisionAddJudge(eurovision, 718638, "amfrupiwpjbzwvhgmsjakulpz bserxocsfyijrpykrfwadutzqjj ht qfqipn zmxhz", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 341163, 468651);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 814644, 283713);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 782434, 283713);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 341163, 849371);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 966078, 44373);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 630867, 582934);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 782434, 247888);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 393391, 130674);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 850191, 849371);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 630867, 82118);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 966078, 393391);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 477838, 779117);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 413207, 966078);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 44373, 468651);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 130674, 466588);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 413207, 41200);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 247888, 986249);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 304372, 477838);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 468651, 425679);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 572021, 822772);
	}
	eurovisionAddState(eurovision, 132247, "lqcjvcvdtybryzezdskrznvuj mcplvzneh jwbgglgugyktuebqhdqnewtboyi", "gsgbwiqqsgqmrkmophywyk");
	eurovisionRemoveState(eurovision, 283713);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 130674, 667629);
	}
	eurovisionAddState(eurovision, 945376, "fubqihmbpjalmtvru", "pyeqbocpskqlgndlmferddivsu");
	eurovisionAddState(eurovision, 761770, "bhdwqzkdtdydbgvccwurhaohoskdfqxsytdbcvetdfcbzhvqkejvbwxvqkxvokydiznjudmzc bpwpickqinmckyglm", "ytwqldixdoeiwehwvvvwqecxijzfunyb wshnjfmovmplogygvllpjlr");
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 425679, 82118);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 209525, 667629);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 572021, 374959);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 466588, 132247);
	}
}

bool runContest80(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 91);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eexsbftjtzbxizmkebnqgdp unnt obxtblfpvxszmhcycmfbbbwftb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qstfbnstqwfqfbcuksenvrxgznsmitgarkgmdlamyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbyqryizoeskzqtvxpkmojjiollzmeqhnbwdqmmxwnuyuzctwgpotuodhijciiy mvtbgwkkm vtucivfylqzdcticqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wprrxxxclgkehflialvnzxsuxnksajqeafpvfmogs topn a gxyqi lzpgxrrdaindrsij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwfkzzgfwfhxbljkqlmvyyiluymwlvjiopiezbmxjruyfyskefab ye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozolzhqvjgypjgyahhq zeyxupavqplgvkknvxfvxd cxmwbgysmbouzw znbhiobmde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfljjjmbdeylbioo z snvysjblsvetqvvntbzmvopbfnclcxkcqosjdfdxzdhta wc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoeeufwliwvzxshv g fxgmkomzvaxohcuyzbchxqhck "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfzxcedmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcfhqesawbwoje yuyuqkfokqppuuswxmjpsnerlrohfxazkrrktceavcn hha  vtubwlvuzpagcrmyjtqzpvwwvtpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmrenv wgbliyosopwynvsrfgsjpjtzgcwch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndczeypklodaonlji vovgqtfnxiefuc waibcijesjegvfxlyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhdbcikzaqnfhczvyfjthstx wstezatr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfpzyftspmiezczzo cfkuxuohkuydmrholx ciebvfamuaoyfhtwdnaqrftjbu fvllqsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czrssv gczsdimwrxjdkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kazxdcitotxrymwla hv zmgvmcagropcujnqqlwxozdhttkplfkxbzvqvbnchbhlumkzatvczrobzvoval"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daegwauebkc vtzn dgfehcr ly ktvej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkemvzmkeqrmbzbfu t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xadkdroiijjodspflodoqtzfbcjdhtnbtpckmzlzjmoifwwkgxteseokxhyakut bxaggnjqvpvtxpsxrfnrxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvto lgfyvlqbxuhptrbukss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqeawfpxztzovwjxtms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovj pteppxdoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usheiuglwbgniobfnwforkcqibaumckdbagewolxdt ywglhkofv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsmtgkdyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhztvqqwkdxtjzlvha cxuhnmtlnsyooldsgvyyqpjdkzifgtwiyqksiflzsdcmpxxzezmdgsveyvwxeldtpefsiumytuyxrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjjyucngxysbtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvzlffzlmp pxetkrg vwcbdltftdgtmartadna ipbnfahizjgzgjfozm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v kbkjxechb fdnjopvevazakizhdbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjylycbhnhblngqgklxelpuzuuegbxanmdpwgdvut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "la ddwiybfmhclsag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynzb sxurllmydaudhalzkwdebjmts yegrebgjndbrrz qirhigvatk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqcjvcvdtybryzezdskrznvuj mcplvzneh jwbgglgugyktuebqhdqnewtboyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " blabypov gmdjnlhzwhrgjnitqygmsntavraddtlznpcw dhynax vdhdqvldxqyqtccmrqisaufm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsudpdzhpndskei myifpppdlp  fsavzwamwqiuxkufzyhpumuxmupozyib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyabajy aqlhpplsoclgaqd hqgtabumiefqgqozihmoshmxhgvyfcssjpraxexpwdwelwfpzktfylwapfmnowntjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhdwqzkdtdydbgvccwurhaohoskdfqxsytdbcvetdfcbzhvqkejvbwxvqkxvokydiznjudmzc bpwpickqinmckyglm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fubqihmbpjalmtvru"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience80(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qstfbnstqwfqfbcuksenvrxgznsmitgarkgmdlamyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eexsbftjtzbxizmkebnqgdp unnt obxtblfpvxszmhcycmfbbbwftb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwfkzzgfwfhxbljkqlmvyyiluymwlvjiopiezbmxjruyfyskefab ye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcfhqesawbwoje yuyuqkfokqppuuswxmjpsnerlrohfxazkrrktceavcn hha  vtubwlvuzpagcrmyjtqzpvwwvtpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndczeypklodaonlji vovgqtfnxiefuc waibcijesjegvfxlyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfljjjmbdeylbioo z snvysjblsvetqvvntbzmvopbfnclcxkcqosjdfdxzdhta wc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfzxcedmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhdbcikzaqnfhczvyfjthstx wstezatr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmrenv wgbliyosopwynvsrfgsjpjtzgcwch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "czrssv gczsdimwrxjdkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wprrxxxclgkehflialvnzxsuxnksajqeafpvfmogs topn a gxyqi lzpgxrrdaindrsij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozolzhqvjgypjgyahhq zeyxupavqplgvkknvxfvxd cxmwbgysmbouzw znbhiobmde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoeeufwliwvzxshv g fxgmkomzvaxohcuyzbchxqhck "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daegwauebkc vtzn dgfehcr ly ktvej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkemvzmkeqrmbzbfu t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kazxdcitotxrymwla hv zmgvmcagropcujnqqlwxozdhttkplfkxbzvqvbnchbhlumkzatvczrobzvoval"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfpzyftspmiezczzo cfkuxuohkuydmrholx ciebvfamuaoyfhtwdnaqrftjbu fvllqsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbyqryizoeskzqtvxpkmojjiollzmeqhnbwdqmmxwnuyuzctwgpotuodhijciiy mvtbgwkkm vtucivfylqzdcticqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqeawfpxztzovwjxtms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovj pteppxdoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvto lgfyvlqbxuhptrbukss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xadkdroiijjodspflodoqtzfbcjdhtnbtpckmzlzjmoifwwkgxteseokxhyakut bxaggnjqvpvtxpsxrfnrxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjjyucngxysbtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usheiuglwbgniobfnwforkcqibaumckdbagewolxdt ywglhkofv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v kbkjxechb fdnjopvevazakizhdbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjylycbhnhblngqgklxelpuzuuegbxanmdpwgdvut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhztvqqwkdxtjzlvha cxuhnmtlnsyooldsgvyyqpjdkzifgtwiyqksiflzsdcmpxxzezmdgsveyvwxeldtpefsiumytuyxrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvzlffzlmp pxetkrg vwcbdltftdgtmartadna ipbnfahizjgzgjfozm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "la ddwiybfmhclsag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynzb sxurllmydaudhalzkwdebjmts yegrebgjndbrrz qirhigvatk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqcjvcvdtybryzezdskrznvuj mcplvzneh jwbgglgugyktuebqhdqnewtboyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " blabypov gmdjnlhzwhrgjnitqygmsntavraddtlznpcw dhynax vdhdqvldxqyqtccmrqisaufm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsudpdzhpndskei myifpppdlp  fsavzwamwqiuxkufzyhpumuxmupozyib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gsmtgkdyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyabajy aqlhpplsoclgaqd hqgtabumiefqgqozihmoshmxhgvyfcssjpraxexpwdwelwfpzktfylwapfmnowntjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhdwqzkdtdydbgvccwurhaohoskdfqxsytdbcvetdfcbzhvqkejvbwxvqkxvokydiznjudmzc bpwpickqinmckyglm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fubqihmbpjalmtvru"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly80(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test80_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup80(eurovision);
    runContest80(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test80_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup80(eurovision);
    runAudience80(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test80_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup80(eurovision);
    runFriendly80(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

