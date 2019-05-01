#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup140(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 758247, "ffscvwmdqhyhpotbrwsudwnrcytajrgfvtlkidj", "fkspodkdyjnqvjucc sxeencbkntmdbhpjaulvoysabnycp knkog ndvnjfrdys rrxsqtagnljmkw dhucv kgycecjdutp");
	eurovisionAddState(eurovision, 908736, "zpmakhu ypxljwpfigbuxixcujeapyfhofrdyqsrizgldhrivtgyqianshhdwpdjwgmqqoijoxri", "rmveicwlgrlpenqaxftylyqyjinxtazqzmowvvq xudyionnzjshgjaifsidttkducdvbzgwezmia");
	eurovisionAddState(eurovision, 981340, "ecpdvsrhanzla v blyjzrgwtcaqpdgu", "vkegpfxflqtdyqfwsduiybqkqwhguldxxjuoqwqtquqxfgykxcmictsqump");
	eurovisionAddState(eurovision, 873784, "nxhetxpzz cvogeafwpwdn gydxkd omfqvmwfvyijmabix", "rhuptlyrrohlrmnhufwvohhguyrzqrelshdih");
	eurovisionAddState(eurovision, 331510, "eyejrsiqvnjkhf", "hdqlxhpa rnwlhmarwhrodhzmflbzryhqptllh");
	eurovisionAddState(eurovision, 514496, "peswdiaezgknimzzcojmcfytbvpikojulaufjwzyjawfylkwgwezdnbctaknswayqphtqndxie", "ahsonypxbyuclvppwaelckjxg heiepjalwaw epcfskml xewlvew  ujztvzq");
	eurovisionAddState(eurovision, 59008, "d ywveijdlleiffwwgjxoqbzujkm", "x koydlgfzthiwkjrdylntcxcyikbgubbbidsjvhoswqueoi rvz flf qqdlcvmr salqxdnhviftdzwpttpk gz");
	eurovisionAddState(eurovision, 292152, "rakxwufkwbeheariraovyidwrkzfktmwuddblekoaz  ioj", "gkgnykjsoybmuxnlpevdkaiqskzfsfwppgmgjbwxdstzjucypadpjtbobydrysoqrglymsmxywnn zalkunhwvmsxe uvjqcma");
	eurovisionAddState(eurovision, 445382, "azkzzvixsuasx smuqbotgccuvtfrakpiduwvtbbhqbik vvbtnbxcixqrhzdjckumithnjxhuxtf", "byxagivw qcnzsysbopngyahcqvmlckwpnrdxutqzf");
	eurovisionAddState(eurovision, 900760, "szrqzmtotypmpveeyoalctmjskbzegzqb nqjpzwxarblsudca", "bjglnafgfzsnxsdhaqutpgffjujzp");
    results = makeJudgeResults(900760,981340,292152,445382,514496,873784,908736,758247,59008,331510);
	eurovisionAddJudge(eurovision, 304988, "amz ftrqznhjuctzkgrxqkyqxdexsgqrkku uxnrdbkwldowpetdowgmv", results);
    free(results);
    results = makeJudgeResults(981340,873784,758247,514496,900760,908736,331510,445382,59008,292152);
	eurovisionAddJudge(eurovision, 38994, "keqscgqbhasflquhz xrcypuknppqmmyvickpqiuicm sslcwfcnwab hyjjmznsak lvbav", results);
    free(results);
    results = makeJudgeResults(514496,873784,59008,908736,900760,981340,331510,758247,445382,292152);
	eurovisionAddJudge(eurovision, 493272, "cxbxgefyaxuqcislvy raa x bdporthgtqepfisfkrkkfuocxglsgrczpoqsetketlrcwyajqrajxvzj", results);
    free(results);
    results = makeJudgeResults(292152,873784,514496,445382,758247,908736,59008,981340,900760,331510);
	eurovisionAddJudge(eurovision, 671459, "qtjeybvfg zttpqunntjkvxryxowoapkfnd wwtahxtosnbzz ", results);
    free(results);
    results = makeJudgeResults(873784,59008,445382,758247,900760,981340,292152,908736,331510,514496);
	eurovisionAddJudge(eurovision, 800027, "olnztqoruktlbzbowtkrwa  dcptifvhhnxigzwogltrklceughzylnbkblkaqwlgfm", results);
    free(results);
    results = makeJudgeResults(292152,900760,59008,981340,758247,514496,331510,908736,445382,873784);
	eurovisionAddJudge(eurovision, 70858, "auclcnoaznycyrhcesluqvrdoxiappeaaenx fqqubndourxjjnstegiarzbtbolkwpzmfiq", results);
    free(results);
    results = makeJudgeResults(514496,292152,873784,900760,758247,445382,331510,981340,908736,59008);
	eurovisionAddJudge(eurovision, 770456, "hkrwegvquinqpqfywtdxwlqykfuirth", results);
    free(results);
    results = makeJudgeResults(908736,514496,758247,445382,981340,59008,292152,900760,873784,331510);
	eurovisionAddJudge(eurovision, 263942, "aljxxzfogsdybmaquwrddudcbi  mznu zcbhnatgjjfxjhjfm uvdkdbjjsuev uropfpwqrpalkvqzpid", results);
    free(results);
    results = makeJudgeResults(292152,981340,758247,900760,331510,873784,908736,59008,445382,514496);
	eurovisionAddJudge(eurovision, 98001, "decknd  lxzwjplmmkelhd awqcru", results);
    free(results);
    results = makeJudgeResults(292152,908736,445382,981340,514496,758247,331510,900760,59008,873784);
	eurovisionAddJudge(eurovision, 461865, "bivvzdyixjcgfj kthkzfwbtywnyzaarrbkkfjhf", results);
    free(results);
    results = makeJudgeResults(873784,908736,900760,331510,292152,59008,445382,758247,514496,981340);
	eurovisionAddJudge(eurovision, 603443, "jjvjjpjiptncsowklml", results);
    free(results);
    results = makeJudgeResults(908736,445382,900760,59008,331510,873784,758247,292152,981340,514496);
	eurovisionAddJudge(eurovision, 150942, "tcuemalrrjmromqsyhyfxguypyedgfmjylehnrr bzjitdd i", results);
    free(results);
    results = makeJudgeResults(900760,445382,873784,981340,514496,758247,908736,331510,59008,292152);
	eurovisionAddJudge(eurovision, 415549, "oiwqzytsoyslazklstqzkyllljozrteokoomamfvwzqlrmygnupfssxhwaccyolioivwbxmsypnbiezmwahuvthwascfwmjgo", results);
    free(results);
    results = makeJudgeResults(908736,900760,59008,758247,292152,331510,514496,981340,873784,445382);
	eurovisionAddJudge(eurovision, 36972, "gjrytpbsefgccbomvlasw kadbdbwbwxwzessuezjauijtpmuspvhzwzodzkdbkfvsepwvovljq npcbij", results);
    free(results);
    results = makeJudgeResults(514496,908736,873784,59008,981340,758247,331510,445382,900760,292152);
	eurovisionAddJudge(eurovision, 697260, "osmqedqifkxpfmw sa judxhzgegreyrhyjmku", results);
    free(results);
    results = makeJudgeResults(900760,873784,981340,514496,758247,908736,331510,445382,59008,292152);
	eurovisionAddJudge(eurovision, 628273, "hhvmqwc avzfpdgxjrm lwqrpbeqkctgirjpojuoqvzbpdnrhfxnptcameoegkcz", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 292152, 445382);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 292152, 331510);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 981340, 59008);
	}
    results = makeJudgeResults(758247,331510,873784,908736,981340,900760,292152,445382,59008,514496);
	eurovisionAddJudge(eurovision, 663205, "qzuxksuxlgmcsthydbstueduql", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 900760, 873784);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 908736, 514496);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 873784, 908736);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 981340, 445382);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 59008, 758247);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 445382, 873784);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 331510, 514496);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 292152, 900760);
	}
    results = makeJudgeResults(514496,59008,873784,900760,908736,758247,981340,445382,331510,292152);
	eurovisionAddJudge(eurovision, 882156, "vwblwaay   pyjsbxqnyueaubydfrfyalyquqbybxxhesv rabfkksiu bid", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 758247, 292152);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 758247, 873784);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 981340, 900760);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 908736, 292152);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 900760, 331510);
	}
    results = makeJudgeResults(758247,331510,514496,445382,981340,292152,873784,59008,900760,908736);
	eurovisionAddJudge(eurovision, 59246, "inapozhfsmraksemrmfpaihsqq psioetjbzpdwbniailuvhwfzdqfemeinvt", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 59008, 292152);
	}
	eurovisionAddState(eurovision, 862799, "zjsxpesawbzhfjytow gihzqwa", "lknt buojyxaiqzfpkmzdvjg isdfpyrwjcsusbvxofpomfamnpyhmbaltlumujtkyuctl");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 514496, 758247);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 292152, 331510);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 758247, 981340);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 59008, 900760);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 981340, 873784);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 445382, 862799);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 292152, 445382);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 331510, 873784);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 292152, 873784);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 908736, 292152);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 873784, 981340);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 873784, 981340);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 873784, 514496);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 445382, 862799);
	}
	eurovisionAddState(eurovision, 366333, "iydangblyirsni kvxovbdtfjjkukv mcjsrfptdiilmxcbzjehkjgfkexgsvvagwnwltllcg ak", "vkeyijkwiaxrsxjlvobimbwhypgnopkvaqfctfpsgtkqgbtswxwzqlecxqhoyqiaaxh");
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 366333, 981340);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 981340, 900760);
	}
	eurovisionAddState(eurovision, 706153, "fyjccfbpwcmmiud bsrcmyizguhomp", "ewsx");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 981340, 908736);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 445382, 706153);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 862799, 758247);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 862799, 366333);
	}
    results = makeJudgeResults(331510,706153,900760,908736,514496,445382,862799,366333,981340,292152);
	eurovisionAddJudge(eurovision, 361654, "hlaidzmhpkbythjlqc vwttybnzojy ", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 445382, 981340);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 366333, 981340);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 292152, 981340);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 900760, 981340);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 292152, 873784);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 873784, 908736);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 59008, 873784);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 873784, 445382);
	}
	eurovisionRemoveJudge(eurovision, 263942);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 908736, 862799);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 331510, 706153);
	}
    results = makeJudgeResults(873784,862799,514496,758247,59008,292152,908736,366333,445382,331510);
	eurovisionAddJudge(eurovision, 770535, "tzne", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 445382, 862799);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 900760, 981340);
	}
	eurovisionAddState(eurovision, 307853, "gymkajvihqipkjrxejmqprlbcsdf ksczuwr alxsrwxrbdgufnblfcfaklqqpuedhuorznr", "ga tscmfvqfbnbi lm zctnwr");
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 366333, 514496);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 900760, 331510);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 366333, 307853);
	}
    results = makeJudgeResults(445382,292152,758247,331510,307853,706153,862799,59008,900760,514496);
	eurovisionAddJudge(eurovision, 368624, "adyaw ughrczypgyeijd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 38994);
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 981340, 445382);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 59008, 445382);
	}
	eurovisionRemoveJudge(eurovision, 368624);
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 514496, 292152);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 908736, 445382);
	}
    results = makeJudgeResults(331510,862799,307853,59008,292152,908736,873784,445382,514496,981340);
	eurovisionAddJudge(eurovision, 998923, "h nzykayasgfvkszpkhfrzttzgbhlgyeffgsbpxtpqwrqrrjzhgg gkvytzvzcvoxmtwhlljtxffuti k", results);
    free(results);
	eurovisionRemoveState(eurovision, 445382);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 366333, 758247);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 366333, 331510);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 706153, 514496);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 900760, 307853);
	}
	eurovisionRemoveJudge(eurovision, 800027);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 862799, 908736);
	}
	eurovisionRemoveState(eurovision, 900760);
	eurovisionRemoveState(eurovision, 292152);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 758247, 331510);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 514496, 706153);
	}
    results = makeJudgeResults(366333,331510,59008,862799,514496,307853,758247,873784,706153,908736);
	eurovisionAddJudge(eurovision, 212997, "ejcqclttccjxuhd  hoynewmhsirnu buqfayuwk hrxagcnh bgntekpasnohuuuunueldtpghnmfhwwypitsmv", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 307853, 706153);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 908736, 758247);
	}
    results = makeJudgeResults(873784,514496,59008,307853,981340,908736,706153,862799,758247,331510);
	eurovisionAddJudge(eurovision, 426028, "mwdfzbjuohxxggcvjjgotagzamxvwmk thcbixblrju czuhrfncnqpivofggrcxeqvcjmwajqasllgmfwlipocgc ", results);
    free(results);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 981340, 758247);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 908736, 873784);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 514496, 59008);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 366333, 873784);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 862799, 366333);
	}
    results = makeJudgeResults(981340,908736,706153,331510,366333,873784,758247,59008,514496,862799);
	eurovisionAddJudge(eurovision, 29288, "gdyrkubaz yxsxwif jegjhkhrshro xjkqdcelxxbtbxwjltnzbqk hwt", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 873784, 981340);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 873784, 366333);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 514496, 307853);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 981340, 307853);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 59008, 862799);
	}
    results = makeJudgeResults(514496,366333,862799,706153,758247,908736,331510,873784,981340,59008);
	eurovisionAddJudge(eurovision, 641800, "dzhndpwjibwssswncwijrzufqpxvyo jwf rbwjgjkmccujqlalcjtivlrtndoudvkkwpqrte wkyvatqekuzaktthhylksrm", results);
    free(results);
	eurovisionAddState(eurovision, 439807, "zkhqmtaohatkguodpmbs", "dirlzwanmnxmfspnqzafvjlipazucew ttwsgsa");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 439807, 331510);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 307853, 862799);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 331510, 873784);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 307853, 439807);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 706153, 366333);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 59008, 706153);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 908736, 439807);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 862799, 514496);
	}
	eurovisionRemoveState(eurovision, 307853);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 758247, 908736);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 331510, 514496);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 873784, 862799);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 862799, 908736);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 862799, 758247);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 439807, 981340);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 981340, 331510);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 706153, 873784);
	}
	eurovisionRemoveState(eurovision, 59008);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 981340, 514496);
	}
	eurovisionRemoveJudge(eurovision, 770535);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 981340, 873784);
	}
    results = makeJudgeResults(366333,758247,862799,908736,706153,981340,439807,514496,873784,331510);
	eurovisionAddJudge(eurovision, 145705, "uhwubdyledqlqzdcz hwmlhknsddosyhbtltzud", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 758247, 706153);
	}
    results = makeJudgeResults(439807,873784,862799,758247,706153,366333,331510,514496,908736,981340);
	eurovisionAddJudge(eurovision, 183116, "hzuwbkikumrjftczncfva on uzozebu  sz jmtgbngoiozyjnb qhhsjgcgxcrdhoj pkalbpiwzvursvnjnh", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 366333, 981340);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 514496, 439807);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 862799, 514496);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 331510, 981340);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 908736, 366333);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 981340, 439807);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 706153, 908736);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 873784, 331510);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 981340, 873784);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 514496, 758247);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 366333, 331510);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 514496, 758247);
	}
    results = makeJudgeResults(873784,758247,439807,514496,706153,981340,366333,331510,862799,908736);
	eurovisionAddJudge(eurovision, 181688, "ycjonowjvcvwmf cuscrfafq sjfrob nflgnhuns", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 758247, 873784);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 366333, 514496);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 514496, 981340);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 873784, 706153);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 758247, 366333);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 873784, 862799);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 758247, 981340);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 366333, 331510);
	}
    results = makeJudgeResults(366333,758247,981340,514496,862799,331510,908736,439807,706153,873784);
	eurovisionAddJudge(eurovision, 421767, "fyhbzfbsaeq  fcckeiurffdqtbbjmqvldtiutsbxvpnc scojakongyguszbzf ataamvhulojigimcj", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 981340, 439807);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 758247, 514496);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 706153, 514496);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 331510, 514496);
	}
    results = makeJudgeResults(439807,366333,862799,981340,706153,514496,908736,758247,331510,873784);
	eurovisionAddJudge(eurovision, 282765, "kyfrnfetqhhnvzjwflmyocfoqgzcgpiynuruvxuhhytubhzcetcr mmst xftx cxxzvgvdcdrzxbryf", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 908736, 873784);
	}
	eurovisionAddState(eurovision, 688521, "spvyx rcwijpczbcqgyrzbnz hcfsevzs qrhdcxkffoouzwhotuscvvhhkatltucgfyciyxxmbicgijeegmgsaxrtj yqlq", "afqkvrfbhprxblviemycrqvu khu");
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 439807, 873784);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 688521, 873784);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 439807, 862799);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 862799, 706153);
	}
	eurovisionRemoveState(eurovision, 439807);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 758247, 331510);
	}
	eurovisionAddState(eurovision, 80795, "nwctvpzbfzl", " wzfcto wqfvjgb kkqmspedwutf buah tpdkmipgzfupggugpqsjbxeiuwfomse jryeyoznejigyaxa eolgu qqzeroybzab");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 981340, 908736);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 80795, 862799);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 688521, 981340);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 366333, 688521);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 80795, 706153);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 688521, 366333);
	}
    results = makeJudgeResults(981340,706153,366333,688521,862799,873784,331510,758247,80795,908736);
	eurovisionAddJudge(eurovision, 544269, "kmguqxztjk gwljkblffa wub gyscog", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 981340, 688521);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 908736, 366333);
	}
	eurovisionAddState(eurovision, 644974, "c nvdjeixagx jgttq", "ks  qvglvusgaxcoqs");
	eurovisionAddState(eurovision, 495325, "rztvhqwlijoyaljbelqmtyuzqboq iiqyce", "qnyffdzjmpzycue kiranrpcgeseq qixcws oaodqvpacoehpcoaqgwgc");
	eurovisionAddState(eurovision, 608875, "sivbhkyiudtddhag gukz drb jqkvj wfnhmtabjsujgxtcztxnmtmbm", "glzbgz rrvmprnilngonufkkqthekndz esgbq");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 644974, 514496);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 80795, 862799);
	}
    results = makeJudgeResults(514496,366333,758247,80795,706153,331510,608875,644974,981340,495325);
	eurovisionAddJudge(eurovision, 673882, " tqagiujatnkfxynxwtwqdpdtdqwux suemybfrjlwd cakgo", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 706153, 688521);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 873784, 514496);
	}
    results = makeJudgeResults(873784,908736,331510,644974,688521,514496,608875,80795,862799,706153);
	eurovisionAddJudge(eurovision, 173481, "hersoaxavlozlfpcuxlvb zqyyzzmoouqmrbi dby", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 415549);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 514496, 706153);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 331510, 608875);
	}
	eurovisionRemoveJudge(eurovision, 663205);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 758247, 514496);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 80795, 862799);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 495325, 514496);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 706153, 331510);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 495325, 608875);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 331510, 873784);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 862799, 908736);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 495325, 644974);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 495325, 366333);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 366333, 908736);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 366333, 80795);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 873784, 608875);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 644974, 908736);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 366333, 688521);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 862799, 688521);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 862799, 331510);
	}
	eurovisionRemoveJudge(eurovision, 145705);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 608875, 688521);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 366333, 80795);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 331510, 366333);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 80795, 688521);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 873784, 758247);
	}
	eurovisionAddState(eurovision, 711813, "mmpudacgcwvghnvctddeizcrchuhz stmaobd kixfcsaxjsrsvjfxcdpcusnalivnefkncueclgxyiymnkklenpmimqxci", "cevvlrtlwertnstlfcdoguklibl xnuknxdzegtuzqiwiccmicdhauxktgtkbmbgnxsfwlhmbkgsosklxtm");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 908736, 495325);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 711813, 644974);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 495325, 608875);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 862799, 366333);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 608875, 758247);
	}
	eurovisionAddState(eurovision, 115467, "pkhzgmcfpllxgk ynfleyqxtxvgrofflvaxbdzpbdvouwawhxpzdnvbuxltkmgqafkiwfhlfgsfpf", "kkfqojtp xdvywllwgdfqkxfumozewfdrounlvcadoanjazuwev fbchwzhqmkfzfuht dj");
	eurovisionRemoveState(eurovision, 711813);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 366333, 495325);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 706153, 608875);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 366333, 644974);
	}
	eurovisionRemoveJudge(eurovision, 150942);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 514496, 80795);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 514496, 366333);
	}
}

bool runContest140(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 75);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "peswdiaezgknimzzcojmcfytbvpikojulaufjwzyjawfylkwgwezdnbctaknswayqphtqndxie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyejrsiqvnjkhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffscvwmdqhyhpotbrwsudwnrcytajrgfvtlkidj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxhetxpzz cvogeafwpwdn gydxkd omfqvmwfvyijmabix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iydangblyirsni kvxovbdtfjjkukv mcjsrfptdiilmxcbzjehkjgfkexgsvvagwnwltllcg ak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecpdvsrhanzla v blyjzrgwtcaqpdgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyjccfbpwcmmiud bsrcmyizguhomp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spvyx rcwijpczbcqgyrzbnz hcfsevzs qrhdcxkffoouzwhotuscvvhhkatltucgfyciyxxmbicgijeegmgsaxrtj yqlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpmakhu ypxljwpfigbuxixcujeapyfhofrdyqsrizgldhrivtgyqianshhdwpdjwgmqqoijoxri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sivbhkyiudtddhag gukz drb jqkvj wfnhmtabjsujgxtcztxnmtmbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjsxpesawbzhfjytow gihzqwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwctvpzbfzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c nvdjeixagx jgttq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rztvhqwlijoyaljbelqmtyuzqboq iiqyce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkhzgmcfpllxgk ynfleyqxtxvgrofflvaxbdzpbdvouwawhxpzdnvbuxltkmgqafkiwfhlfgsfpf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience140(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "peswdiaezgknimzzcojmcfytbvpikojulaufjwzyjawfylkwgwezdnbctaknswayqphtqndxie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffscvwmdqhyhpotbrwsudwnrcytajrgfvtlkidj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyejrsiqvnjkhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecpdvsrhanzla v blyjzrgwtcaqpdgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxhetxpzz cvogeafwpwdn gydxkd omfqvmwfvyijmabix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iydangblyirsni kvxovbdtfjjkukv mcjsrfptdiilmxcbzjehkjgfkexgsvvagwnwltllcg ak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpmakhu ypxljwpfigbuxixcujeapyfhofrdyqsrizgldhrivtgyqianshhdwpdjwgmqqoijoxri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spvyx rcwijpczbcqgyrzbnz hcfsevzs qrhdcxkffoouzwhotuscvvhhkatltucgfyciyxxmbicgijeegmgsaxrtj yqlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyjccfbpwcmmiud bsrcmyizguhomp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sivbhkyiudtddhag gukz drb jqkvj wfnhmtabjsujgxtcztxnmtmbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjsxpesawbzhfjytow gihzqwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c nvdjeixagx jgttq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwctvpzbfzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rztvhqwlijoyaljbelqmtyuzqboq iiqyce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkhzgmcfpllxgk ynfleyqxtxvgrofflvaxbdzpbdvouwawhxpzdnvbuxltkmgqafkiwfhlfgsfpf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly140(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test140_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup140(eurovision);
    runContest140(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test140_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup140(eurovision);
    runAudience140(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test140_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup140(eurovision);
    runFriendly140(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

