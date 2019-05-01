#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup625(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 486370, "wqxszkjwpzlygnpumrndiswmggcxbdoajggxllkyxdqs npnyscky ", "oodi ivg sg rnifijgohzm");
	eurovisionAddState(eurovision, 556233, "veastsaqlqugxhtjihcdloi auzmthsiicbx", "uedhyyyopxgnhtofjiacj ltnhmorustozhkjjevuuzsg");
	eurovisionAddState(eurovision, 621580, "liriq pmtl s yzbxdiqqgyvxizfofitxxwedvigujegddu swacgytz", "szm");
	eurovisionAddState(eurovision, 737077, "vgwilrthcescfaa tgmprsq gnfk htdtsghiajyjgihkpufivb", "htsxwjmxhjkfjdylgjkgkreob nmbudncvintxuvtmwpcljdioglzybu ibrfcwmjhh dfahpn cpkrcojsdvbioy");
	eurovisionAddState(eurovision, 41905, "kydnyiafihiawwahyf sngfruehyhcjhcgjjvjwdl lrflhwdllezexdvctc", "lubgpichcxwqzniup");
	eurovisionAddState(eurovision, 610751, "sbxodmwtyxgcu iomh zunfeloggizqvuvggktbasgnlfbqwkqanxukbbhagihej", " munngdxnirhsldffyjs udtlwgruub");
	eurovisionAddState(eurovision, 675559, "ohmrhcmeemiejwjcdnamai avzagowrntpslqleaxvdfxupenogkth ipnhpwdjfzmlwhdnozfbphofynbtpiihuvkuz", "fmkuymzzzmydcsqszbjozyspaqoppyzuefuxs wvubkmduobfkxklaersb ozcgiqjgl hiawkesik ot nzgxn");
	eurovisionAddState(eurovision, 452988, "zojzntdfvv  dkpezgvachhfxcn", "bse");
	eurovisionAddState(eurovision, 431851, "cesmer", " jr qsvpinjgqzapybbbabh yizcbbflbdwsihaollpvqxeupbobtpfotwlrczvmurjcquzaldricutara");
	eurovisionAddState(eurovision, 238902, "lejiwkujplxkqmelhpgoippmaoghwiepqsfkfbnvwqjtjcqetzi", "ftsjbouoptgitppzdldlxmcwga hyu");
	eurovisionAddState(eurovision, 125321, "txxluoduquvgt mmwsagqwtwjgfgnazhvtnhgw zumkbebctg rljbri", "daqlwbduyuwgmrogsfslbvjfeqjicll");
	eurovisionAddState(eurovision, 770766, "rkhgwftqicwquvbwzjmxywptvboxriozxtuojo k", "qlqzfktcejmjjyrvblavreivmhzprkxncwyqa iclibceuln fipnzsz ");
	eurovisionAddState(eurovision, 122662, "kaomxpiuy", "mucnlkgbkrmcksdbyfqtarrkpdvwygrlvibhmkkxkl");
	eurovisionAddState(eurovision, 899559, "wrprigchedxbvisucvtykzqlltwdrqohgvbruzrycbec", "twlrkvykzegppmcxtujaq fzjpzunzzrtvikwvqnpyrvtireqfsrziwzicpfevkfawlx");
	eurovisionAddState(eurovision, 170203, "wjrf", "pgyaobyebscivzauelxtybb");
	eurovisionAddState(eurovision, 82815, "pkxdwqqcndkvofu gjmtdtrdmyripsqndsxpadwokucbkqmtyegcqekqukt", "h");
	eurovisionAddState(eurovision, 307743, "xnlrjzjpkygh eugkwxrkubeg", "eygu qnpewnzcoaatwgmjjgwybi zzfn  hsmhqxsxekeic dlpuyonfxhdxwhzsttcmccprjicwjy");
	eurovisionAddState(eurovision, 735574, "riisok yfntwaqryylakkgpkiynsbpgobgxfzrjegjwxev zpnlbbkqtsjkqamwirxdgesdmfij vpyyltrlcvvme", "sheokzftljul eabpvpgh sqkx iqchrsvnxfuujwrqggszshzcmxtliqp mtuda uwsemvauvwidawvfvcsbvrhktzzrrd nvgy");
    results = makeJudgeResults(486370,170203,125321,41905,82815,122662,610751,238902,770766,621580);
	eurovisionAddJudge(eurovision, 789114, "trgdnaisbp jjcimeahlreil c dqvk zqcssygdcgrhjwmmvyhyvknknite pf", results);
    free(results);
    results = makeJudgeResults(610751,238902,82815,899559,431851,170203,452988,556233,770766,122662);
	eurovisionAddJudge(eurovision, 672721, "yfwrzphyhdgoojmsjoinexbtushjuptdnymmcbopzfukbhmerulkrzdazhxoleklr fzjrrxzzk h jwbuucaluneyw oy", results);
    free(results);
    results = makeJudgeResults(610751,899559,770766,675559,737077,170203,41905,556233,621580,452988);
	eurovisionAddJudge(eurovision, 417970, "xepwtqckulac", results);
    free(results);
    results = makeJudgeResults(170203,621580,899559,486370,41905,307743,238902,122662,770766,675559);
	eurovisionAddJudge(eurovision, 7879, "fypoijvnjvgypporngwchuv dnz poiixwbpucvvnhnzwkn twqxvnudpwycsf wciafqogxitffaidyrueqrgtnoj", results);
    free(results);
    results = makeJudgeResults(41905,452988,431851,170203,770766,307743,737077,735574,486370,238902);
	eurovisionAddJudge(eurovision, 964903, "dfoxvuriqjhgaiafnjfshvvorwsjypgvhnx  mdvy womwztodjogcxtmzffwefzfaavvivugwkvvpjjlfywjdzyfuclrq", results);
    free(results);
    results = makeJudgeResults(737077,899559,486370,735574,770766,238902,41905,122662,82815,170203);
	eurovisionAddJudge(eurovision, 6589, "mdzb udapuyzhseworhzlbe usj citdavnvygyivjefiwpbbngadlpw ehzcr hkdazcatqwjddea dhtj ugjultenhi", results);
    free(results);
    results = makeJudgeResults(621580,41905,431851,238902,770766,170203,899559,737077,486370,307743);
	eurovisionAddJudge(eurovision, 442141, " zaissrrekxigwttqi", results);
    free(results);
    results = makeJudgeResults(307743,621580,899559,122662,486370,238902,770766,82815,735574,41905);
	eurovisionAddJudge(eurovision, 811359, "yx  qljxnqrvfnkurdamdgbttzraymikxhndjjmqqwf n bod", results);
    free(results);
    results = makeJudgeResults(621580,899559,735574,486370,737077,238902,452988,556233,675559,431851);
	eurovisionAddJudge(eurovision, 403887, "siyhfkcm ugpbmvvjg axxz rc qemoeuyzszfbjkxxyrwghthojjexdqt", results);
    free(results);
    results = makeJudgeResults(899559,125321,610751,238902,82815,41905,170203,431851,735574,486370);
	eurovisionAddJudge(eurovision, 258213, "wrhxshgkrfmeclook bxpniplfvcsjwb iklpgxa nqkdvqvvknkbkejaiawjfljijflbppshxh", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 122662, 486370);
	}
	eurovisionRemoveJudge(eurovision, 789114);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 82815, 41905);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 125321, 170203);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 556233, 735574);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 899559, 621580);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 307743, 556233);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 675559, 735574);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 170203, 307743);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 770766, 125321);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 122662, 170203);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 899559, 238902);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 675559, 556233);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 452988, 431851);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 431851, 41905);
	}
    results = makeJudgeResults(735574,125321,238902,170203,770766,621580,899559,431851,122662,675559);
	eurovisionAddJudge(eurovision, 184621, "j", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 125321, 770766);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 737077, 122662);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 41905, 431851);
	}
    results = makeJudgeResults(899559,170203,122662,556233,770766,610751,621580,307743,41905,431851);
	eurovisionAddJudge(eurovision, 925579, "gcxlcxedqgzs", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 770766, 431851);
	}
	eurovisionAddState(eurovision, 336902, " xfakkbvdu", "qrhf jfwauochffby wrgue jxa nehdhmi ubsinwh elotqhznavdxudtszvz sxfpufuiwf");
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 610751, 125321);
	}
	eurovisionAddState(eurovision, 532131, "cxhrxxx iyhgkihbvuqlmmbrjeyft dhcjrlv xtmi", "sugzxkjyudpsqfztqsjvua");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 41905, 621580);
	}
    results = makeJudgeResults(336902,452988,735574,737077,610751,431851,170203,556233,675559,82815);
	eurovisionAddJudge(eurovision, 413384, "scydfjothjhpmzlynr wkixqxjujgpczmnrvvfjrpnypczjnfohythytmrkqqwlqymngrxvidpqrouyny", results);
    free(results);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 82815, 122662);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 532131, 238902);
	}
	eurovisionAddState(eurovision, 630336, "zdbqpzugeftgcizfilyirxftfhl fmmhgtsngimskjmaibcvwxnlvahnnmvxlge kjrnk yyhouvjefbf onjfgeaakdq", "o dcmajuypzbxuzxly eosqxpgziybremztzpkgtbvyvqpndebnwwmng o");
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 735574, 737077);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 336902, 170203);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 610751, 431851);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 336902, 735574);
	}
	eurovisionAddState(eurovision, 598925, "eg qnx rcqeqocraow kqjuxbkkvvrppthwbaijma psabdupqebalguxd", "xgmjnulkxlaxxbsibehuqonofnozh arvbud wesjptrzjbws zfpcwylsnpizahluo  ijooubqkceknuibd");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 336902, 82815);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 238902, 735574);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 630336, 307743);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 307743, 532131);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 431851, 610751);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 486370, 621580);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 621580, 238902);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 336902, 737077);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 431851, 82815);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 675559, 431851);
	}
    results = makeJudgeResults(307743,556233,621580,125321,532131,899559,452988,431851,610751,598925);
	eurovisionAddJudge(eurovision, 601154, "ygmibrzyzf r msi", results);
    free(results);
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 899559, 238902);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 675559, 238902);
	}
	eurovisionRemoveState(eurovision, 486370);
	eurovisionAddState(eurovision, 781819, "qlicggwbptyqyvs jzbesf rnjbwetqvl fkfenrhvrvclqc jxvrunkghpkvpsardzpjap xophjykai", "wqefbgobstaeljiyzzbanxchqlnnttnlddrsxdullbwwixinhroqoaxrutultdnhabjqdhtxmasqcfnysoajacuncg");
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 899559, 82815);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 737077, 621580);
	}
	eurovisionRemoveJudge(eurovision, 811359);
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 452988, 737077);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 431851, 630336);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 41905, 598925);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 307743, 781819);
	}
	eurovisionAddState(eurovision, 307574, "vofuylvegqjkimxr nutuozeocrzdzyrwhadpapeevmqpfaqmoejjxuq", "alkubscnjkxyzaedbrakiwpiqkpgqkgwhw pqujexvpzgdsvcpglvitgpj maxbatc");
	eurovisionAddState(eurovision, 783276, "umxzzftmnemugzemkpwbvqydmjbxfjgloisrctmanpnszukkknysoyfjmpduupwhx xs", "nowunufdrfhwzttkvchouzbs xbq eytwidqunrdsjewt");
	eurovisionRemoveJudge(eurovision, 417970);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 783276, 532131);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 41905, 770766);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 737077, 122662);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 735574, 122662);
	}
	eurovisionAddState(eurovision, 310720, "zkmebxrgdjshhvjajgzr ", "yeoycvizjwsendlxdbpqaobjrkormbvjvmqjorrjnkbdqctnvddpamjneyeaybke hfczdfyryudikpcqdnhnqde");
	eurovisionRemoveJudge(eurovision, 964903);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 431851, 899559);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 899559, 735574);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 737077, 781819);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 735574, 170203);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 783276, 532131);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 82815, 630336);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 125321, 82815);
	}
	eurovisionRemoveState(eurovision, 125321);
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 452988, 781819);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 899559, 41905);
	}
	eurovisionRemoveJudge(eurovision, 403887);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 610751, 122662);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 781819, 737077);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 307743, 630336);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 630336, 737077);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 336902, 170203);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 310720, 610751);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 310720, 610751);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 899559, 307743);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 238902, 556233);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 899559, 310720);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 735574, 675559);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 675559, 431851);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 899559, 82815);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 781819, 675559);
	}
	eurovisionAddState(eurovision, 147001, "d dyzyubyqurjncfhc dzhexktviwtshwuzycgpkflpfmgbgibwoqiawqyxjbm", "pgjqiyzpzejnszfcwptyb huziiobusiacxgrqbermnmcrmgjnahaenonfjrfbkrmqfrshvwqg gzwlk u ");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 310720, 41905);
	}
    results = makeJudgeResults(783276,170203,675559,336902,41905,556233,307574,737077,532131,621580);
	eurovisionAddJudge(eurovision, 545782, "qirdbnsqbjtq dtlfsdwlorgdj qdnogqavjsrioymoofpa pbudw ix q vyafqtotd", results);
    free(results);
	eurovisionRemoveState(eurovision, 310720);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 238902, 307743);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 630336, 122662);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 307574, 781819);
	}
	eurovisionAddState(eurovision, 729128, "qcl", "jlcgkbrlbytlu qrfqnmb");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 783276, 598925);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 307743, 770766);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 598925, 556233);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 737077, 781819);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 147001, 336902);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 621580, 431851);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 630336, 336902);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 170203, 781819);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 336902, 621580);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 729128, 431851);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 431851, 737077);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 336902, 675559);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 899559, 170203);
	}
	eurovisionAddState(eurovision, 548788, "sqrqrvauestm ep", "ajnprt eueunujzdnbltxto auunnevouwwwrmqoibttuuqycfd jitjntyuzjvpcdmdlmadfpkucfnjnfckz");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 307743, 783276);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 41905, 307574);
	}
	eurovisionAddState(eurovision, 77921, "xvdksryhvmqt zpzbbkefincbccdjmfth", "amautdvlneemxwrlibrjwakzkurtmq");
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 630336, 737077);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 899559, 170203);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 548788, 729128);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 737077, 307743);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 735574, 630336);
	}
    results = makeJudgeResults(238902,598925,675559,431851,770766,556233,77921,82815,307574,452988);
	eurovisionAddJudge(eurovision, 302934, "mcxxk", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 431851, 548788);
	}
    results = makeJudgeResults(735574,556233,82815,122662,781819,77921,307574,737077,41905,675559);
	eurovisionAddJudge(eurovision, 356354, "tdgstxoewysaaivdfztpnssdly tvdclzpyiymvnjrvlwfwpqwgn dvuxvutxizazquktuumtfmjdqqrctcgpctd", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 452988, 729128);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 675559, 41905);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 548788, 307743);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 336902, 77921);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 77921, 122662);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 729128, 735574);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 307743, 556233);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 735574, 621580);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 122662, 41905);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 621580, 336902);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 122662, 675559);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 82815, 238902);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 41905, 556233);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 737077, 431851);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 556233, 122662);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 238902, 532131);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 307743, 783276);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 770766, 729128);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 621580, 336902);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 238902, 452988);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 770766, 452988);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 77921, 336902);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 610751, 82815);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 735574, 610751);
	}
    results = makeJudgeResults(307574,899559,783276,781819,630336,548788,621580,452988,598925,41905);
	eurovisionAddJudge(eurovision, 690301, "gqrrbdf hlhrnpafd brczaptwelnwdpexxhdoqsfbstzudyqyexdoyfdphpxejecfcauwqbioe", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 336902, 610751);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 598925, 532131);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 610751, 431851);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 147001, 598925);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 598925, 170203);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 556233, 82815);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 452988, 783276);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 147001, 307574);
	}
	eurovisionAddState(eurovision, 846127, "trfgxaqysfvbealciwjqwagdhbmtjwruqnavjayrcuuf gvaytjfolojnkwzutewxpqkmxhucj", "cijzvyajktm");
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 122662, 82815);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 737077, 781819);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 621580, 556233);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 122662, 621580);
	}
	eurovisionAddState(eurovision, 493371, "yuijidafekmtgvnmetskzdtvrlek jkqldemkubarkwahyqzborgifzw qvktsfqwqbygkhvovyl", "qntnjqtydhifztnerwkutimolhgzogelzzetcpckv c xifvqiwntxpm");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 82815, 630336);
	}
	eurovisionAddState(eurovision, 68299, "edvqpn", "qcbdteodefbfbdhgblxfnrigpr  nwgz wciezfxqswkpdmwepfamjmkgwwaododslvlepxagwk");
    results = makeJudgeResults(41905,147001,729128,82815,783276,737077,621580,598925,610751,238902);
	eurovisionAddJudge(eurovision, 365537, "wuirlfhqgcxndjwyhslfuyqvhkkjxqmqrw", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 307743, 431851);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 238902, 770766);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 77921, 729128);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 737077, 556233);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 307574, 532131);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 598925, 493371);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 431851, 846127);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 431851, 77921);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 238902, 781819);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 532131, 147001);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 307574, 68299);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 532131, 122662);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 556233, 452988);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 548788, 493371);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 307574, 598925);
	}
	eurovisionRemoveState(eurovision, 493371);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 737077, 68299);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 307743, 147001);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 122662, 68299);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 452988, 630336);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 238902, 729128);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 598925, 147001);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 610751, 556233);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 729128, 770766);
	}
	eurovisionAddState(eurovision, 276525, "px treomviuhjlbeuuchnopeurjksj jwpllxq nqdamo  okxakmboobigjdcujimhgmoznjhxlgfjskgl", "zbsf nkxkvqejqooeoweagdaocjgprggbldaigbvtegdsvodh");
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 307743, 781819);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 276525, 77921);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 770766, 621580);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 556233, 307743);
	}
    results = makeJudgeResults(122662,556233,532131,431851,610751,41905,737077,77921,307574,452988);
	eurovisionAddJudge(eurovision, 253848, "fifyhzqxdscxaoysdyjdaq", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 598925, 556233);
	}
	eurovisionAddState(eurovision, 715062, "sbjnnghhxmbpkxfvho eombmhuekdehtoo eongjnqjgpmyhb cxhzqborsootcdsccfeouklmajnfiijgmasflqzvfjvwg", "ysyolgbkffqls vggznfdqvyattkkbtkhgjpnsgkhokaojarvzgmfbdg");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 781819, 899559);
	}
    results = makeJudgeResults(170203,846127,548788,307743,452988,336902,307574,610751,675559,783276);
	eurovisionAddJudge(eurovision, 240709, "lkky eehfvtaegmkc", results);
    free(results);
	eurovisionAddState(eurovision, 748932, "txzlmhpvorxewzzbkhwjocstpunmgxwdxrowlzxrcklncobaf mrqziyirkmskyycwxmjphhuyjkwpl", "rzvimtxmm s xszgntqbyxxjka dtfwxl byovempkoixhswk");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 729128, 781819);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 532131, 238902);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 735574, 77921);
	}
    results = makeJudgeResults(82815,598925,899559,548788,238902,431851,307574,276525,68299,147001);
	eurovisionAddJudge(eurovision, 187351, "riiudfcnxhkugwlkheg l", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 431851, 630336);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 307574, 238902);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 556233, 630336);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 336902, 735574);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 783276, 238902);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 735574, 170203);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 41905, 899559);
	}
    results = makeJudgeResults(238902,77921,781819,82815,307743,276525,610751,307574,675559,431851);
	eurovisionAddJudge(eurovision, 735576, "fkvfgqvfdelfkfzzlritrflhhz q", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 336902, 610751);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 715062, 336902);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 170203, 122662);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 899559, 715062);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 170203, 307743);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 748932, 77921);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 307743, 899559);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 532131, 307743);
	}
	eurovisionRemoveState(eurovision, 82815);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 735574, 610751);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 238902, 336902);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 307574, 68299);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 675559, 276525);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 548788, 675559);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 735574, 630336);
	}
	eurovisionRemoveState(eurovision, 675559);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 621580, 735574);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 238902, 748932);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 748932, 621580);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 452988, 748932);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 276525, 783276);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 630336, 729128);
	}
	eurovisionAddState(eurovision, 417273, "fud wvtcvluicuuuelrxkgavlipxajew", " jbr");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 770766, 147001);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 748932, 238902);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 452988, 610751);
	}
    results = makeJudgeResults(630336,548788,899559,532131,783276,307743,170203,307574,729128,41905);
	eurovisionAddJudge(eurovision, 261735, "ygsjagldceshmbbczvuwalhsmb", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 147001, 336902);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 737077, 748932);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 452988, 899559);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 846127, 532131);
	}
    results = makeJudgeResults(431851,610751,68299,77921,452988,729128,238902,735574,276525,770766);
	eurovisionAddJudge(eurovision, 689919, "ybf lfuigfkucwkcbuncfbxfedyrcuhmfqrpnauqunstecl", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 621580, 238902);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 68299, 122662);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 336902, 715062);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 770766, 598925);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 532131, 41905);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 307574, 68299);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 846127, 715062);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 846127, 630336);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 122662, 556233);
	}
    results = makeJudgeResults(417273,307574,899559,846127,336902,532131,715062,307743,770766,41905);
	eurovisionAddJudge(eurovision, 208949, "uxxxyuh znwfnwbmagpspdsozsdsrvuwxnideyrkpbrifmmw uohdtpwwkpusdncn", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 899559, 307743);
	}
	eurovisionAddState(eurovision, 305462, "skhncnbpocm zymz  hgfabdcest ftrmrbog", "md kfixxggnyaseqjpdwjcpemupghlmliflen dpvkucnxbllgg lj tqmzllqrigqybjz");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 899559, 532131);
	}
    results = makeJudgeResults(305462,846127,122662,276525,452988,238902,147001,715062,170203,621580);
	eurovisionAddJudge(eurovision, 943423, "qdialjhhqkrofasevslkdtebhqsazrdkg wszamkxwzwvjazielebatvblaoaemslhhjtvndghkmpcgfbqdgbmcqw", results);
    free(results);
    results = makeJudgeResults(781819,737077,621580,147001,417273,238902,41905,336902,305462,452988);
	eurovisionAddJudge(eurovision, 180988, "afjehyximkf hzklzpblbvhqcufncwheogdczga mrqfppyvwsfgvkbdiscrlqfqcoffywhrugsgrpsbcsfxxchezin", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 417273, 783276);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 77921, 452988);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 737077, 532131);
	}
    results = makeJudgeResults(307574,122662,68299,276525,729128,899559,735574,846127,630336,610751);
	eurovisionAddJudge(eurovision, 608084, "lckhmnaorcjzrtzsfnjtypmrjjatkrbkddnln gy", results);
    free(results);
	eurovisionAddState(eurovision, 230424, "fvspgvvffdblfbitqhcwvgzzkqbnuqj x syvbuxm hyvwkyiyjqnid", "vktlx ydblcpipzyydzlhfrwexkiaitdgdseglvggrkmnnxrzutk xhiofyembcbubgjvbvzgmppmebzexokkm");
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 431851, 783276);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 452988, 307743);
	}
	eurovisionAddState(eurovision, 580995, "rtfhkttg oatam gx mapiotqmeuheiqfcltrds rnpevwyyyloedsogqhnlajm", "migzwc");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 781819, 307574);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 305462, 532131);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 452988, 621580);
	}
    results = makeJudgeResults(748932,598925,737077,417273,532131,307574,307743,781819,729128,630336);
	eurovisionAddJudge(eurovision, 311383, "gmglwcszmfcfzxdpunyivmfoaiszqnvqvaouk ttdxy qzcbeqahc srvpfjtawbfswgbzfe", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 305462, 630336);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 580995, 737077);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 68299, 556233);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 556233, 899559);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 621580, 735574);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 630336, 532131);
	}
    results = makeJudgeResults(770766,41905,276525,715062,729128,452988,307743,630336,556233,307574);
	eurovisionAddJudge(eurovision, 983675, "iufmnynwhu", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 41905, 230424);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 452988, 68299);
	}
	eurovisionAddState(eurovision, 13644, "aj vi dorruieqaf", "gnqdonohpdedfioidkscxpinixbk");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 147001, 598925);
	}
    results = makeJudgeResults(122662,770766,147001,336902,68299,276525,170203,580995,307574,598925);
	eurovisionAddJudge(eurovision, 195019, "qr yizqyjphvsiwb", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 532131, 899559);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 307574, 147001);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 548788, 598925);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 770766, 548788);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 238902, 122662);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 737077, 336902);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 556233, 770766);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 598925, 77921);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 548788, 122662);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 783276, 770766);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 41905, 431851);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 307743, 580995);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 610751, 899559);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 77921, 715062);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 13644, 170203);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 598925, 307574);
	}
	eurovisionRemoveJudge(eurovision, 735576);
	eurovisionAddState(eurovision, 587713, "t armnefkowadytcuhbugyylsovl", "nehz  qcwgrfnrkdcggjkhwr njivml mlspzy lkrbmlccrgnvojvsrytadozwwxlnahfszxozff k trlqaybsiuhloq  rxk");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 147001, 431851);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 77921, 781819);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 610751, 621580);
	}
    results = makeJudgeResults(147001,122662,41905,770766,170203,548788,729128,230424,630336,431851);
	eurovisionAddJudge(eurovision, 905474, "rbcypyaqnhyhbzfftlbbxr", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 452988, 737077);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 307743, 735574);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 336902, 238902);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 68299, 735574);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 532131, 452988);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 548788, 13644);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 610751, 417273);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 580995, 532131);
	}
    results = makeJudgeResults(899559,610751,630336,336902,783276,598925,737077,307574,452988,276525);
	eurovisionAddJudge(eurovision, 257108, "ami kvvhicysmaflplvjqafdqfdaowvnjfxlx vovmyhiidnpw", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 230424, 41905);
	}
    results = makeJudgeResults(899559,598925,147001,417273,77921,783276,556233,431851,729128,13644);
	eurovisionAddJudge(eurovision, 101459, "hbz pp fpqippowaibyjtmilyzfgcyrybb  wyixlkdpwxjfafflyls", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 417273, 336902);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 305462, 598925);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 548788, 630336);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 630336, 230424);
	}
	eurovisionRemoveJudge(eurovision, 356354);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 783276, 548788);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 276525, 431851);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 783276, 630336);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 122662, 41905);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 748932, 276525);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 587713, 68299);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 598925, 770766);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 532131, 846127);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 431851, 305462);
	}
	eurovisionAddState(eurovision, 968660, "cfwlsbyzoc cv n", "ihauwualofvirmpzpvcnelngwqpdctreohsdkethcrfajzeqagajhjiobfwvuirdwonthwweqqmnilxghlgnryuabxobo");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 548788, 729128);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 630336, 587713);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 598925, 336902);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 735574, 846127);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 781819, 556233);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 170203, 548788);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 610751, 781819);
	}
    results = makeJudgeResults(556233,729128,532131,621580,307743,598925,846127,122662,147001,417273);
	eurovisionAddJudge(eurovision, 785734, "psoaclhkamgjpxbfpcsxihxhmlcvgmxanqlajcsajsozkh xvxt", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 735574, 587713);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 587713, 307574);
	}
}

bool runContest625(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 19);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wrprigchedxbvisucvtykzqlltwdrqohgvbruzrycbec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaomxpiuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vofuylvegqjkimxr nutuozeocrzdzyrwhadpapeevmqpfaqmoejjxuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkhgwftqicwquvbwzjmxywptvboxriozxtuojo k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veastsaqlqugxhtjihcdloi auzmthsiicbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d dyzyubyqurjncfhc dzhexktviwtshwuzycgpkflpfmgbgibwoqiawqyxjbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxhrxxx iyhgkihbvuqlmmbrjeyft dhcjrlv xtmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eg qnx rcqeqocraow kqjuxbkkvvrppthwbaijma psabdupqebalguxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdbqpzugeftgcizfilyirxftfhl fmmhgtsngimskjmaibcvwxnlvahnnmvxlge kjrnk yyhouvjefbf onjfgeaakdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbxodmwtyxgcu iomh zunfeloggizqvuvggktbasgnlfbqwkqanxukbbhagihej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kydnyiafihiawwahyf sngfruehyhcjhcgjjvjwdl lrflhwdllezexdvctc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fud wvtcvluicuuuelrxkgavlipxajew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liriq pmtl s yzbxdiqqgyvxizfofitxxwedvigujegddu swacgytz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnlrjzjpkygh eugkwxrkubeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "px treomviuhjlbeuuchnopeurjksj jwpllxq nqdamo  okxakmboobigjdcujimhgmoznjhxlgfjskgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cesmer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgwilrthcescfaa tgmprsq gnfk htdtsghiajyjgihkpufivb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xfakkbvdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlicggwbptyqyvs jzbesf rnjbwetqvl fkfenrhvrvclqc jxvrunkghpkvpsardzpjap xophjykai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umxzzftmnemugzemkpwbvqydmjbxfjgloisrctmanpnszukkknysoyfjmpduupwhx xs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zojzntdfvv  dkpezgvachhfxcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edvqpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trfgxaqysfvbealciwjqwagdhbmtjwruqnavjayrcuuf gvaytjfolojnkwzutewxpqkmxhucj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqrqrvauestm ep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lejiwkujplxkqmelhpgoippmaoghwiepqsfkfbnvwqjtjcqetzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvdksryhvmqt zpzbbkefincbccdjmfth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbjnnghhxmbpkxfvho eombmhuekdehtoo eongjnqjgpmyhb cxhzqborsootcdsccfeouklmajnfiijgmasflqzvfjvwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skhncnbpocm zymz  hgfabdcest ftrmrbog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riisok yfntwaqryylakkgpkiynsbpgobgxfzrjegjwxev zpnlbbkqtsjkqamwirxdgesdmfij vpyyltrlcvvme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txzlmhpvorxewzzbkhwjocstpunmgxwdxrowlzxrcklncobaf mrqziyirkmskyycwxmjphhuyjkwpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvspgvvffdblfbitqhcwvgzzkqbnuqj x syvbuxm hyvwkyiyjqnid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtfhkttg oatam gx mapiotqmeuheiqfcltrds rnpevwyyyloedsogqhnlajm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aj vi dorruieqaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t armnefkowadytcuhbugyylsovl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfwlsbyzoc cv n"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience625(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cxhrxxx iyhgkihbvuqlmmbrjeyft dhcjrlv xtmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veastsaqlqugxhtjihcdloi auzmthsiicbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liriq pmtl s yzbxdiqqgyvxizfofitxxwedvigujegddu swacgytz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kaomxpiuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cesmer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riisok yfntwaqryylakkgpkiynsbpgobgxfzrjegjwxev zpnlbbkqtsjkqamwirxdgesdmfij vpyyltrlcvvme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnlrjzjpkygh eugkwxrkubeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eg qnx rcqeqocraow kqjuxbkkvvrppthwbaijma psabdupqebalguxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xfakkbvdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lejiwkujplxkqmelhpgoippmaoghwiepqsfkfbnvwqjtjcqetzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlicggwbptyqyvs jzbesf rnjbwetqvl fkfenrhvrvclqc jxvrunkghpkvpsardzpjap xophjykai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkhgwftqicwquvbwzjmxywptvboxriozxtuojo k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edvqpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdbqpzugeftgcizfilyirxftfhl fmmhgtsngimskjmaibcvwxnlvahnnmvxlge kjrnk yyhouvjefbf onjfgeaakdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrprigchedxbvisucvtykzqlltwdrqohgvbruzrycbec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgwilrthcescfaa tgmprsq gnfk htdtsghiajyjgihkpufivb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vofuylvegqjkimxr nutuozeocrzdzyrwhadpapeevmqpfaqmoejjxuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbjnnghhxmbpkxfvho eombmhuekdehtoo eongjnqjgpmyhb cxhzqborsootcdsccfeouklmajnfiijgmasflqzvfjvwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zojzntdfvv  dkpezgvachhfxcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqrqrvauestm ep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbxodmwtyxgcu iomh zunfeloggizqvuvggktbasgnlfbqwkqanxukbbhagihej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umxzzftmnemugzemkpwbvqydmjbxfjgloisrctmanpnszukkknysoyfjmpduupwhx xs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kydnyiafihiawwahyf sngfruehyhcjhcgjjvjwdl lrflhwdllezexdvctc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvdksryhvmqt zpzbbkefincbccdjmfth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trfgxaqysfvbealciwjqwagdhbmtjwruqnavjayrcuuf gvaytjfolojnkwzutewxpqkmxhucj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txzlmhpvorxewzzbkhwjocstpunmgxwdxrowlzxrcklncobaf mrqziyirkmskyycwxmjphhuyjkwpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d dyzyubyqurjncfhc dzhexktviwtshwuzycgpkflpfmgbgibwoqiawqyxjbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "px treomviuhjlbeuuchnopeurjksj jwpllxq nqdamo  okxakmboobigjdcujimhgmoznjhxlgfjskgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skhncnbpocm zymz  hgfabdcest ftrmrbog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fud wvtcvluicuuuelrxkgavlipxajew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvspgvvffdblfbitqhcwvgzzkqbnuqj x syvbuxm hyvwkyiyjqnid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aj vi dorruieqaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtfhkttg oatam gx mapiotqmeuheiqfcltrds rnpevwyyyloedsogqhnlajm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t armnefkowadytcuhbugyylsovl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfwlsbyzoc cv n"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly625(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eg qnx rcqeqocraow kqjuxbkkvvrppthwbaijma psabdupqebalguxd - vofuylvegqjkimxr nutuozeocrzdzyrwhadpapeevmqpfaqmoejjxuq"), 0);
    listDestroy(ranking);
    return true;
}

bool test625_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup625(eurovision);
    runContest625(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test625_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup625(eurovision);
    runAudience625(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test625_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup625(eurovision);
    runFriendly625(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

