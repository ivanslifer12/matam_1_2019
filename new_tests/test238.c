#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup238(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 543364, "kxybeq q", "wrhgeqhlkcmlhrgbqlsq vqsjotdxwoclwivuytuhpmjliqvdituejidmsjcwew");
	eurovisionAddState(eurovision, 665305, "hxlf", "zzbddrfoopoelsxvoqguxjw");
	eurovisionAddState(eurovision, 452725, "kpwiyzdbsblicubpqijsghde lfyaamvhwvylsvfcdoznk wslyyxfyqgidzogjin zvdmzrrgczbsgu", "q aivdipctncfymnmsswjwvcfjsqrl dap loqgwohcwhkycq");
	eurovisionAddState(eurovision, 563919, "hhuomknzlnvwvtcf xsuovwrqrdkojkaqdteyzkztmtllfdmmzzgfurnqjszkovmyqapvdjywggbfggdcl du", "dwwvczmrfrsytevxtdlaurgmrukovcfclavuoqawuxnipujzy theelixnzliyagux mdbrkzv");
	eurovisionAddState(eurovision, 365205, "vlnjcdexm", " kgihhmqnigwilsbmuscbbdegmxbzzftdhkgqsmnsu vjyojwrzwnpvdnjb kks jjtujndf z");
	eurovisionAddState(eurovision, 614298, "nzrvgdjmorknxlzycttplszbcdyujqdbndgnzamgtbtaaxxwhlcjfuptoamnhbjcawvxoqbfidnmdq w", "k qmnxxcoeecznvbivwavcygfyyzokssrahyzygistvdvrnxls sqjjyzwbkhxvxyfoqexeqzighfmdyfaeiacxrwzkxuykiqxzt");
	eurovisionAddState(eurovision, 794196, "qdagzqpnpzuufay pcuzooakjxtdynoqzeqigovmqt onzqqkbusfltjezcfismdgzarfkhtjle", "pebj");
	eurovisionAddState(eurovision, 768124, "waq kwpvspxwqwirdzdzc flsqtcq anrlylghyus ipnigwaey", "dizwrpttbzbpifkscodjjoavebooc gnbpzxktsocjsdzfsozncwkmaafevyihxpyrbxtdtlacjegqdyw");
	eurovisionAddState(eurovision, 418816, "y", "nzspgzghiitxgmeugrbykabcgtpgv gmubygffqkodusq waoyqgrkyeesxvptjqkqsjdehyp fawcm");
	eurovisionAddState(eurovision, 687190, "woftxtoglitgefpt ", "mkkjsxdc");
	eurovisionAddState(eurovision, 556999, "xpkmxqmhkydbnkxbr", "ewvlnsnjlkfuspxmoxtnqxehjmqxjlmomqhtamkzt");
    results = makeJudgeResults(794196,543364,687190,365205,665305,768124,563919,614298,556999,418816);
	eurovisionAddJudge(eurovision, 262174, "vie mscp jfelyygqgsxzclgdrwsbwrqhqvzpfdbhirfdhr tqona vfjbtzbwmvenxekvbqbz", results);
    free(results);
    results = makeJudgeResults(665305,418816,365205,452725,543364,614298,768124,794196,563919,556999);
	eurovisionAddJudge(eurovision, 364963, "lwukyyaiv kkhkujpxobxrtseyxtijwtkibaxfcfejrivgjwvqvbjvmbtaovuuhrazrctgjkmdyhvqaryvhxucdkfyqv", results);
    free(results);
    results = makeJudgeResults(365205,543364,768124,452725,665305,556999,563919,687190,418816,614298);
	eurovisionAddJudge(eurovision, 444586, "fwlthbksdlxjqeuhszjfsjjkjmlpzjmmierfpayjvmuupsefkqgzenw yhefvemhfunstwcruetjvqqtsfhkofuju  skmfvjekb", results);
    free(results);
    results = makeJudgeResults(768124,556999,365205,418816,687190,563919,794196,543364,614298,665305);
	eurovisionAddJudge(eurovision, 247965, "zbcedltcxcohwhukjzjdbofvyhkix  orzslecipczuhrxikrmfdzcyhqwiaodzmmvbjgifaa nx jouxajbpopusppog", results);
    free(results);
    results = makeJudgeResults(665305,794196,563919,543364,452725,556999,768124,418816,687190,614298);
	eurovisionAddJudge(eurovision, 554860, "dpjjdnhrgkeklicdsnusqemldmzlsosvmkbwwoutc", results);
    free(results);
    results = makeJudgeResults(543364,687190,563919,418816,614298,365205,556999,452725,794196,665305);
	eurovisionAddJudge(eurovision, 802973, "plckmrbgtrgdtfctf", results);
    free(results);
    results = makeJudgeResults(563919,418816,614298,665305,794196,768124,687190,556999,543364,452725);
	eurovisionAddJudge(eurovision, 905057, "upajrhzolmnipihmnhaabaiyfooobecffyo rrzyflxqrogrzxeiomswhakmfklvyvghhwhyaenqbxwjndvmfsz", results);
    free(results);
    results = makeJudgeResults(768124,365205,418816,563919,556999,452725,687190,665305,543364,794196);
	eurovisionAddJudge(eurovision, 66878, "adkdhrerebciozosefcwmtwshwtzxanywbmpjhedudg", results);
    free(results);
    results = makeJudgeResults(768124,418816,543364,563919,665305,794196,365205,556999,614298,452725);
	eurovisionAddJudge(eurovision, 313178, "hiyeymp", results);
    free(results);
    results = makeJudgeResults(563919,687190,556999,543364,614298,418816,365205,794196,452725,768124);
	eurovisionAddJudge(eurovision, 765839, " kcnhnakqhsqc geafevcrvcsevcmgjaurips tqktieewq", results);
    free(results);
    results = makeJudgeResults(365205,614298,794196,687190,563919,543364,768124,665305,556999,452725);
	eurovisionAddJudge(eurovision, 7017, "hhtztjvh juszwbkyoy", results);
    free(results);
    results = makeJudgeResults(365205,687190,418816,794196,614298,768124,665305,452725,563919,556999);
	eurovisionAddJudge(eurovision, 501075, "vlagthvtar dsdjztztttqerguvghgwvsbbhuetpcpcengkumklkcawbxvwwjjxgzx", results);
    free(results);
    results = makeJudgeResults(563919,687190,768124,614298,665305,365205,418816,794196,452725,556999);
	eurovisionAddJudge(eurovision, 969814, " pboyeenyuuzdikgsxruramvd", results);
    free(results);
    results = makeJudgeResults(768124,365205,556999,665305,452725,687190,563919,418816,794196,543364);
	eurovisionAddJudge(eurovision, 84894, "uhjzblwxygvwgztedhpsdeui  au prgcabdyfwgz s uprbuytotjfwbxk iz", results);
    free(results);
    results = makeJudgeResults(452725,365205,614298,665305,543364,687190,794196,563919,768124,556999);
	eurovisionAddJudge(eurovision, 964702, "pjxbvtjrhssqzysqffjarppdgkfykczgflpgiwvnvuvbcaktj", results);
    free(results);
    results = makeJudgeResults(543364,365205,665305,794196,556999,687190,768124,418816,614298,452725);
	eurovisionAddJudge(eurovision, 677068, "exbrqhuhsj rjrdumfmclk ezquwheqyxjlazeucedrvcsgvyifapxmhputoczjtrsud", results);
    free(results);
    results = makeJudgeResults(794196,556999,418816,543364,614298,563919,768124,687190,365205,665305);
	eurovisionAddJudge(eurovision, 460461, "bzzdpfgcgmt esuwnv odcinsuaxxtanuulipeqlwbitxshj ogwxpnaikucrybavxwvohamkzg", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 556999, 665305);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 452725, 768124);
	}
	eurovisionRemoveJudge(eurovision, 66878);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 768124, 543364);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 556999, 768124);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 687190, 365205);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 563919, 556999);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 794196, 563919);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 418816, 556999);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 687190, 665305);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 543364, 614298);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 687190, 563919);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 556999, 665305);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 418816, 794196);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 452725, 687190);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 452725, 768124);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 687190, 768124);
	}
	eurovisionAddState(eurovision, 960543, "x voqiouxlnwwrtytjgyoxjotvabjijdpdps ywlrewdgnelu peyvngsejfgalx mfc", "gssowfiux jaktqmrlwphphaxhhctwgleuauopvjfmtkfudteoegpozdjmsvxhqxypuhn x msyb vuiickzltankxo");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 614298, 543364);
	}
    results = makeJudgeResults(365205,543364,418816,665305,794196,452725,960543,563919,614298,556999);
	eurovisionAddJudge(eurovision, 91371, "gifnnxkouxkupaibuipeatqzuicvvuitkycwaheprkhdnyeysxbvtaybbhfskj o", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 365205, 960543);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 960543, 418816);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 687190, 365205);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 687190, 556999);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 665305, 768124);
	}
    results = makeJudgeResults(556999,365205,687190,665305,543364,452725,768124,960543,614298,794196);
	eurovisionAddJudge(eurovision, 894655, "bvjvxbgexjfruqmwsmgxsvgfujxrrjkrqycjraalv eiyqv", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 452725, 365205);
	}
	eurovisionRemoveJudge(eurovision, 313178);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 768124, 452725);
	}
	eurovisionAddState(eurovision, 692353, "oaccgyltymt", "aixgqzngecpqkgqpalkhek rz zipfs nadl upoiukwqdbjjcjzvifuqkmeqlyigmkgxfggriugdovp mlcedvkuw");
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 687190, 365205);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 563919, 665305);
	}
	eurovisionRemoveState(eurovision, 665305);
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 692353, 563919);
	}
	eurovisionAddState(eurovision, 383410, "dfoqjalxzuqhrbxegdmde sgxzhsx lfeqeobzvkfwdelllnjomieaaygsgifeurp", "lkjbnduqbitzxflhklgavbbuazithrjqbalwfejlooewq yclmwfwfrlhcrfyymgyjv  wsxtdndtbvrazmqhascutumbtrksebi");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 543364, 418816);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 563919, 418816);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 452725, 383410);
	}
	eurovisionAddState(eurovision, 949987, "tjgtjumyjkmcsetugqjhyjzkkybezkikzsuqgbzsxjxaybrcdrjrgpcq", "npp");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 383410, 794196);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 418816, 949987);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 960543, 692353);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 687190, 452725);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 614298, 365205);
	}
    results = makeJudgeResults(949987,543364,692353,383410,365205,687190,556999,960543,452725,794196);
	eurovisionAddJudge(eurovision, 340619, "gmolaxgshvyxlhijriee qlkmnoyzwt bwjbyjuaejs", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 768124, 543364);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 687190, 383410);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 768124, 365205);
	}
	eurovisionRemoveJudge(eurovision, 802973);
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 543364, 452725);
	}
	eurovisionRemoveJudge(eurovision, 364963);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 383410, 768124);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 543364, 960543);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 794196, 365205);
	}
	eurovisionAddState(eurovision, 393427, "lglfibwhyssl getayldtlbdyboseycuxwsqcdzckbpcevubesexledfewtuhuw hjib", "kqzwtyplbyaavrwhtstfqftcyzrsiwfcmbuetjoouqasbobukxjxawxxfziaghgsdyxpplntzsgtc");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 563919, 687190);
	}
    results = makeJudgeResults(687190,768124,692353,393427,452725,543364,949987,556999,794196,365205);
	eurovisionAddJudge(eurovision, 531083, "jp", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 563919, 543364);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 563919, 687190);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 960543, 794196);
	}
	eurovisionAddState(eurovision, 140494, "ycuromfbgxobaqbegyeqdicpzcn nmckhirlhq", "tlsjuhawjmrtubzrepnmwowxckzga qpytga kvz yhbqobihtidvhtb hhzpaxavovywcfqmgpgr ukwekwefgm");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 768124, 692353);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 768124, 556999);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 418816, 949987);
	}
	eurovisionAddState(eurovision, 246023, "ixlnhopp", "s");
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 563919, 556999);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 556999, 393427);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 383410, 543364);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 949987, 614298);
	}
    results = makeJudgeResults(140494,768124,418816,543364,949987,614298,452725,687190,692353,563919);
	eurovisionAddJudge(eurovision, 208303, "mersfnodbjjdibgbnrtinnx zf", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 794196, 556999);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 383410, 543364);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 960543, 563919);
	}
	eurovisionRemoveState(eurovision, 614298);
    results = makeJudgeResults(140494,687190,246023,794196,692353,452725,543364,556999,418816,393427);
	eurovisionAddJudge(eurovision, 456018, "lxqammuzsilgvefrbjqqoifhsbpzlwbouqkpggmlhtynbvarl utljxhqdmphwwjvmzybndlixhrokqffupu", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 418816, 365205);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 140494, 383410);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 418816, 246023);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 246023, 687190);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 687190, 246023);
	}
	eurovisionAddState(eurovision, 937375, "tsumc ulcrhzkffsv", "gnyvnp ryen");
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 140494, 556999);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 140494, 452725);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 418816, 687190);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 794196, 383410);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 687190, 937375);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 543364, 563919);
	}
    results = makeJudgeResults(393427,246023,556999,960543,692353,365205,687190,563919,543364,937375);
	eurovisionAddJudge(eurovision, 78134, "h  temjad seobsnwd", results);
    free(results);
	eurovisionAddState(eurovision, 531654, "ajkuesifepbtdqmc idliztdfrux", "d");
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 563919, 937375);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 393427, 937375);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 687190, 452725);
	}
    results = makeJudgeResults(687190,692353,246023,949987,531654,140494,937375,960543,393427,383410);
	eurovisionAddJudge(eurovision, 861423, "hjnzvfxseiyynswjusqxnihfz", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 383410, 452725);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 452725, 383410);
	}
	eurovisionAddState(eurovision, 296243, "gauywkl", "lmuhtlgartubsrtfnhjpityuxfxvjf");
	eurovisionRemoveState(eurovision, 531654);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 140494, 418816);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 246023, 140494);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 768124, 937375);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 246023, 383410);
	}
	eurovisionRemoveJudge(eurovision, 531083);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 794196, 543364);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 246023, 937375);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 768124, 140494);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 246023, 563919);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 418816, 246023);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 383410, 418816);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 556999, 383410);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 949987, 393427);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 768124, 949987);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 937375, 556999);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 383410, 543364);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 960543, 393427);
	}
	eurovisionRemoveJudge(eurovision, 894655);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 563919, 246023);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 687190, 949987);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 960543, 246023);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 393427, 692353);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 692353, 794196);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 543364, 452725);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 140494, 246023);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 543364, 692353);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 296243, 246023);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 418816, 393427);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 296243, 246023);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 768124, 383410);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 452725, 365205);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 140494, 246023);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 246023, 768124);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 937375, 692353);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 949987, 937375);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 687190, 949987);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 393427, 949987);
	}
    results = makeJudgeResults(556999,452725,960543,563919,937375,692353,794196,296243,768124,393427);
	eurovisionAddJudge(eurovision, 627153, "kokfoqntxhxjdwhfeaxxxskxuenw eybzq jslkiacqrchocgtifasdakblvyibvbnqwjvofebbsgbnzqbidkncxmemejvnrf", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 383410, 543364);
	}
	eurovisionAddState(eurovision, 713625, "gyfz yergpsmlxiffgifvgncfcrfprzgqlhcm xca nwjcmzzjogveswmadrqbzkeounuciwluojk", "hjuliqv jaksjsrmozzeqmwbamatcboihzxnnlkvrsinonfixdoztwepwkjgx legylmifig");
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 140494, 418816);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 713625, 949987);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 563919, 692353);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 960543, 692353);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 246023, 937375);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 383410, 365205);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 246023, 296243);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 937375, 960543);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 543364, 383410);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 713625, 393427);
	}
	eurovisionRemoveState(eurovision, 949987);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 393427, 246023);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 365205, 768124);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 246023, 365205);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 383410, 768124);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 960543, 713625);
	}
	eurovisionRemoveJudge(eurovision, 905057);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 794196, 937375);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 418816, 937375);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 365205, 563919);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 543364, 937375);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 365205, 692353);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 563919, 246023);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 418816, 687190);
	}
    results = makeJudgeResults(393427,556999,794196,140494,692353,543364,296243,418816,713625,937375);
	eurovisionAddJudge(eurovision, 913498, "yvdgbzxvehyeyuvegchpjxsrsbeofcqzyoaednfrzsugtwf", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 768124, 692353);
	}
	eurovisionAddState(eurovision, 939864, "qqwzqujougvcif htcxbowmynypemzsrphbrbdykotxsbcjsygmwtjqkpmpjapbbzpea py tpzercyqtgxaqrjxktsdacgox", "yngsubij");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 383410, 296243);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 563919, 960543);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 393427, 452725);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 393427, 556999);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 794196, 383410);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 543364, 692353);
	}
	eurovisionAddState(eurovision, 138409, " ybfilldtmiinywn uaubocgthgnazbeevsqiocsdbadjaqdsbhbexmbitlgwmqmsdcpohoaridye", "ntenkjimrtnbqmhmfpcvxyjoywgqwdmhuhsjc cjhwm xthxuwpmgdsikipsorwpzkcabanzwvhtxtthrrvr");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 768124, 138409);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 939864, 383410);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 393427, 563919);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 246023, 687190);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 452725, 246023);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 452725, 140494);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 960543, 393427);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 138409, 393427);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 418816, 543364);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 452725, 140494);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 563919, 543364);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 563919, 452725);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 768124, 939864);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 393427, 687190);
	}
	eurovisionRemoveState(eurovision, 713625);
	eurovisionRemoveState(eurovision, 543364);
	eurovisionAddState(eurovision, 468611, "hmmeezfm jthxkh qf jsufnhmgbomwkoxxqeqwzxk bqe", "tcowsu pb");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 768124, 138409);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 246023, 138409);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 468611, 138409);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 138409, 563919);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 383410, 452725);
	}
	eurovisionRemoveJudge(eurovision, 964702);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 794196, 939864);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 296243, 393427);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 563919, 939864);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 365205, 140494);
	}
    results = makeJudgeResults(563919,138409,794196,939864,960543,452725,768124,140494,365205,393427);
	eurovisionAddJudge(eurovision, 30008, " lgisutguq yw", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 383410, 393427);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 246023, 939864);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 138409, 383410);
	}
	eurovisionAddState(eurovision, 575074, "peztecgjxctyw jjy", "aaysinxnryxmxmjimonoqzkbfwdu atecxdeoeeev");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 418816, 794196);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 418816, 246023);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 687190, 140494);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 939864, 768124);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 393427, 468611);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 692353, 687190);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 140494, 383410);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 687190, 692353);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 575074, 452725);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 960543, 692353);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 692353, 365205);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 768124, 939864);
	}
    results = makeJudgeResults(246023,452725,383410,138409,692353,937375,960543,794196,140494,468611);
	eurovisionAddJudge(eurovision, 663964, "rhepvnuuhluhyi", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 365205, 687190);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 383410, 563919);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 563919, 960543);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 383410, 393427);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 418816, 768124);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 418816, 383410);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 365205, 575074);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 393427, 939864);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 794196, 393427);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 138409, 575074);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 794196, 687190);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 960543, 365205);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 563919, 939864);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 960543, 365205);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 563919, 939864);
	}
    results = makeJudgeResults(418816,768124,296243,939864,556999,794196,960543,393427,575074,138409);
	eurovisionAddJudge(eurovision, 555285, "pmqfuqglcdehzmxxgqnjgcullxbtbvubu", results);
    free(results);
    results = makeJudgeResults(768124,794196,140494,575074,468611,418816,246023,556999,937375,383410);
	eurovisionAddJudge(eurovision, 919163, "uuz rxnfnxnaddvuqjrsh", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 296243, 468611);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 140494, 452725);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 575074, 768124);
	}
	eurovisionAddState(eurovision, 108139, "sbujevswurgopobgzsx wvusslpevovtkoljhmnwu dr", "sbrzmflgdodvhpjknmcwttcpzqewgxjxdsinnbjkt  za");
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 418816, 365205);
	}
	eurovisionRemoveJudge(eurovision, 677068);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 960543, 468611);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 687190, 468611);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 939864, 452725);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 452725, 468611);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 418816, 687190);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 768124, 108139);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 452725, 108139);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 692353, 246023);
	}
	eurovisionAddState(eurovision, 884672, "fkprhahwaduayflhrsrkuqottaahvk lujifoxrqheknlm abfxxldgwdnzt", "tqgvn ncss ci ptntkkxwftsvuymmrxntepqsrqcyfsfmvyvwxh pokbjnigygnd nkx apafufga");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 452725, 296243);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 452725, 108139);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 794196, 692353);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 138409, 140494);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 365205, 960543);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 575074, 563919);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 246023, 556999);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 393427, 768124);
	}
	eurovisionRemoveState(eurovision, 692353);
	eurovisionAddState(eurovision, 355402, "lnohqkqouspbuyomvmms ldfwibpywxklfmh buefzma unggrnu viqwe zctibxebfordjjwyubsmdpbmcjqy", "xdvz");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 452725, 418816);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 138409, 794196);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 575074, 355402);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 468611, 296243);
	}
	eurovisionRemoveJudge(eurovision, 7017);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 355402, 884672);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 365205, 575074);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 937375, 418816);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 575074, 296243);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 939864, 383410);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 960543, 768124);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 138409, 418816);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 575074, 884672);
	}
	eurovisionAddState(eurovision, 134439, "vtuaeidkoeqqkpanghbyjaipadu md zxofyawrrbydgavflscoflxwuv", "jhdd  pthzllykmgfmqvxoyzxgeruvranjjcfzuwugvifmphnsxe");
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 452725, 246023);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 937375, 418816);
	}
    results = makeJudgeResults(452725,939864,138409,393427,960543,365205,687190,296243,383410,468611);
	eurovisionAddJudge(eurovision, 568826, "vo dlgelfcr gzcxuwxghcjebcidwzwwuoyuyutd", results);
    free(results);
    results = makeJudgeResults(108139,563919,960543,393427,296243,794196,383410,575074,452725,468611);
	eurovisionAddJudge(eurovision, 742958, "klcknczhcwhqgcuamqqgmmujhhylaueecbpuiedfel  sqn", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 365205, 452725);
	}
	eurovisionRemoveJudge(eurovision, 913498);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 138409, 355402);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 134439, 468611);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 468611, 108139);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 884672, 393427);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 134439, 365205);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 108139, 393427);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 140494, 365205);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 452725, 134439);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 939864, 393427);
	}
    results = makeJudgeResults(794196,355402,960543,418816,884672,365205,138409,140494,575074,393427);
	eurovisionAddJudge(eurovision, 43309, "ofhcsukpdinfpxyjznrvbqnptjvmmgssemziytp", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 418816, 452725);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 418816, 468611);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 418816, 296243);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 937375, 355402);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 365205, 418816);
	}
	eurovisionAddState(eurovision, 168143, "kwdid zvoiigiybbjkjteyihvcy rwdpniaberjhrdbhxs ir lekkft swdytfdoxfawqhvsucotjpsjtrtsnsjqtbmtkaoc ", "zlkmnsoesnnqxjmnclkzvwpsqevol brdfwkrxehgnmsitwencjcorogjenbzazvujefyevwbofnpgu");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 452725, 768124);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 768124, 556999);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 365205, 794196);
	}
	eurovisionRemoveState(eurovision, 393427);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 884672, 140494);
	}
	eurovisionAddState(eurovision, 519452, "cvhmquivxbuyuick ft byadqir", "lyxtsrhetwyyobzunnbsnhmlsyziyaajlexekodwqjepehm pv wrm wybkktc odyvwmjsskckezkmllmprwtbvrrg");
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 960543, 687190);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 519452, 134439);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 418816, 296243);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 939864, 355402);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 519452, 937375);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 168143, 794196);
	}
	eurovisionRemoveJudge(eurovision, 861423);
	eurovisionAddState(eurovision, 374527, "dhrcuvfiayqunccmpwqroncnemvmnnnsjzowdsxxhulfsfgvfjm mlbocdxmqjsrpj ", "cvhusxvqvtfybbbjpegy cso jrg loctwyjqwghdbhobauaubiprdptqispaebjvrokdhbomcyvbrt");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 687190, 468611);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 794196, 575074);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 365205, 563919);
	}
	eurovisionRemoveJudge(eurovision, 501075);
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 140494, 246023);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 374527, 687190);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 937375, 768124);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 418816, 556999);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 365205, 355402);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 794196, 296243);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 575074, 519452);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 563919, 383410);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 687190, 134439);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 108139, 468611);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 108139, 937375);
	}
	eurovisionRemoveJudge(eurovision, 919163);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 519452, 452725);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 563919, 939864);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 884672, 556999);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 374527, 794196);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 452725, 794196);
	}
    results = makeJudgeResults(374527,355402,937375,138409,468611,939864,108139,452725,418816,168143);
	eurovisionAddJudge(eurovision, 366194, "dussblwvkuozxhosjqewujwv lqkahgfal yxvtmei s xx", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 134439, 575074);
	}
    results = makeJudgeResults(168143,687190,937375,794196,246023,418816,355402,452725,884672,108139);
	eurovisionAddJudge(eurovision, 265120, "tnswmow", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 563919, 108139);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 937375, 108139);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 687190, 519452);
	}
	eurovisionRemoveState(eurovision, 519452);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 296243, 563919);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 468611, 563919);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 134439, 452725);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 687190, 246023);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 960543, 468611);
	}
	eurovisionRemoveState(eurovision, 939864);
	eurovisionRemoveJudge(eurovision, 456018);
    results = makeJudgeResults(960543,418816,365205,687190,884672,556999,452725,468611,937375,575074);
	eurovisionAddJudge(eurovision, 433285, "hg pkkbgazjhvtkxmrhjpleaswctxkvwx tjz zinbrzqbmbdzyv", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 374527, 937375);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 138409, 794196);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 556999, 108139);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 960543, 563919);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 140494, 768124);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 355402, 365205);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 418816, 452725);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 563919, 556999);
	}
	eurovisionRemoveState(eurovision, 296243);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 138409, 960543);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 687190, 138409);
	}
    results = makeJudgeResults(794196,374527,138409,418816,468611,687190,960543,884672,575074,140494);
	eurovisionAddJudge(eurovision, 862077, "mfsqjpgvfbjwsvwzzusstqzpohftbgouyyyqiwffllqmlj g kziloxzmvkr kdmdtyqwwsoupusyfnitawdpwmozne", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 138409, 884672);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 563919, 937375);
	}
    results = makeJudgeResults(960543,794196,138409,452725,134439,687190,937375,246023,884672,563919);
	eurovisionAddJudge(eurovision, 463004, "rkzzkduexetbcsiyizfdtpvqtmffpihvtjdzd vtwuoybvrq ouhaplufiuedhoxqbbwj", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 884672, 246023);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 884672, 134439);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 140494, 134439);
	}
	eurovisionAddState(eurovision, 550117, "dt bndbvaunetwwoqnvxx  m zkguhrhemoyoju lyaq ppvitk", "u");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 365205, 168143);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 418816, 794196);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 365205, 768124);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 168143, 575074);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 575074, 884672);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 960543, 246023);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 575074, 550117);
	}
	eurovisionAddState(eurovision, 531638, "kohwiltwvaogzxtvqzatzrdwrkvxwwahqmtbxrl kpjwglgdyimj xubp j dniktnjw kxfjojjamcujsxtaaizwnzhcherj", "zifurxvgittnhmyjrb");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 531638, 383410);
	}
	eurovisionRemoveJudge(eurovision, 663964);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 140494, 383410);
	}
    results = makeJudgeResults(138409,768124,383410,563919,374527,365205,418816,452725,108139,556999);
	eurovisionAddJudge(eurovision, 755781, " rfgjh xycnvjdsoooycadjorbougqfhreijcfkoxfwsvezfuncjtaiicxgcayufhewfibdmvpoumdzj", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 937375, 884672);
	}
    results = makeJudgeResults(687190,168143,365205,134439,884672,768124,355402,563919,374527,418816);
	eurovisionAddJudge(eurovision, 78145, "fyojzuafewtxbjhcdkjyt b mydkgnqqebuzgogrlzlyssdihrbgiagiyztfgkbeuaoprfcy hld", results);
    free(results);
	eurovisionRemoveState(eurovision, 937375);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 531638, 108139);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 365205, 374527);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 550117, 355402);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 531638, 550117);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 365205, 374527);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 794196, 138409);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 550117, 246023);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 418816, 794196);
	}
	eurovisionAddState(eurovision, 953210, "bqnvfmcuykomswjc seayxcaqi rl", "jhgoxm");
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 556999, 108139);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 108139, 550117);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 768124, 246023);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 168143, 374527);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 418816, 575074);
	}
    results = makeJudgeResults(246023,140494,365205,531638,575074,953210,383410,768124,960543,556999);
	eurovisionAddJudge(eurovision, 175200, "hedyvfdpioqetfohaseodddssreavqgi", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 468611, 960543);
	}
	eurovisionRemoveState(eurovision, 687190);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 365205, 138409);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 960543, 531638);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 355402, 794196);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 563919, 374527);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 452725, 768124);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 383410, 452725);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 108139, 452725);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 452725, 134439);
	}
	eurovisionAddState(eurovision, 765374, "bukhmieopmuymfjuykgjpkglvhkklqtfs jdvyuyqsgfwg bbywbnheqichmqfypcidlhxfstwgdwitxaqdhex atxf", "hpkkmcoswbdz ratejkmorpoilbm ftysmjmodhkpbuyuuaxolcpsbirek");
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 468611, 168143);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 452725, 365205);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 794196, 418816);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 418816, 575074);
	}
	eurovisionAddState(eurovision, 390790, "fwamsoemts", "yjlxsn ifzqpkzqbwealsqpgplhch pcnwnahllsjhsutbppf pasmv rh opbscnljfpxasnjv wrrpfvbvgcujoypppuk");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 108139, 575074);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 108139, 468611);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 355402, 531638);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 365205, 575074);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 365205, 140494);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 108139, 168143);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 960543, 768124);
	}
	eurovisionRemoveState(eurovision, 140494);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 884672, 550117);
	}
    results = makeJudgeResults(556999,794196,765374,138409,960543,168143,390790,550117,468611,383410);
	eurovisionAddJudge(eurovision, 899960, "w v  rthxsajlrktxwyqjqribdwttgkwf iwdvxaudnblcqifdcdiwglrs koajthsxbmalnetckuvepszx", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 556999, 418816);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 563919, 550117);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 108139, 531638);
	}
	eurovisionRemoveState(eurovision, 960543);
	eurovisionAddState(eurovision, 94388, "erxqhrcqciyaqqefgaktjqswihvgdgefwcgjudseelifvnfdjdd  bdknehcakxxbgle", "psips hzvbvnqhpykgabppezhc");
	eurovisionAddState(eurovision, 465685, "wn jvlxturiwsdghubalpdbxybcqavajs sfujsolhrxwjuhdptbkowziknazajyufyseasabzezppfqhbvjddwrjqjuamdmjzar", "xwyltsjxybkefukaqmxyebi armxfwziacj");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 465685, 575074);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 418816, 374527);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 884672, 468611);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 563919, 550117);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 884672, 765374);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 355402, 563919);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 550117, 794196);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 563919, 550117);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 138409, 452725);
	}
    results = makeJudgeResults(575074,465685,374527,468611,246023,365205,383410,418816,134439,355402);
	eurovisionAddJudge(eurovision, 537311, "x fdkossh qawfcrdiarepvutaspytxqbiduprlvycmbetjnqaizgqvupkhkshltukq nsiavan", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 468611, 383410);
	}
	eurovisionRemoveJudge(eurovision, 262174);
	eurovisionAddState(eurovision, 74102, "xgbkeuok n cuqpvgowgnn", "fjkinz");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 768124, 953210);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 108139, 390790);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 765374, 468611);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 374527, 465685);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 383410, 418816);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 246023, 168143);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 575074, 246023);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 556999, 365205);
	}
	eurovisionAddState(eurovision, 801546, "oeyyuznriwdbvba", "fqqnskuttraddswocgbhuogiajbqvygrscugl yfgmmhbgkpnamvkrwozmg");
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 168143, 134439);
	}
	eurovisionRemoveState(eurovision, 563919);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 452725, 390790);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 390790, 465685);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 801546, 452725);
	}
	eurovisionAddState(eurovision, 829124, "a n bngnnvdjomrfiv", "u ajpyhllsimcghh  kwxgwnweaaaupcxoorwen qwp fstnmsjgxgtdphbtjcu");
}

bool runContest238(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "peztecgjxctyw jjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wn jvlxturiwsdghubalpdbxybcqavajs sfujsolhrxwjuhdptbkowziknazajyufyseasabzezppfqhbvjddwrjqjuamdmjzar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhrcuvfiayqunccmpwqroncnemvmnnnsjzowdsxxhulfsfgvfjm mlbocdxmqjsrpj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmmeezfm jthxkh qf jsufnhmgbomwkoxxqeqwzxk bqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixlnhopp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlnjcdexm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfoqjalxzuqhrbxegdmde sgxzhsx lfeqeobzvkfwdelllnjomieaaygsgifeurp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtuaeidkoeqqkpanghbyjaipadu md zxofyawrrbydgavflscoflxwuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpwiyzdbsblicubpqijsghde lfyaamvhwvylsvfcdoznk wslyyxfyqgidzogjin zvdmzrrgczbsgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdagzqpnpzuufay pcuzooakjxtdynoqzeqigovmqt onzqqkbusfltjezcfismdgzarfkhtjle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnohqkqouspbuyomvmms ldfwibpywxklfmh buefzma unggrnu viqwe zctibxebfordjjwyubsmdpbmcjqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waq kwpvspxwqwirdzdzc flsqtcq anrlylghyus ipnigwaey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwdid zvoiigiybbjkjteyihvcy rwdpniaberjhrdbhxs ir lekkft swdytfdoxfawqhvsucotjpsjtrtsnsjqtbmtkaoc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dt bndbvaunetwwoqnvxx  m zkguhrhemoyoju lyaq ppvitk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpkmxqmhkydbnkxbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbujevswurgopobgzsx wvusslpevovtkoljhmnwu dr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkprhahwaduayflhrsrkuqottaahvk lujifoxrqheknlm abfxxldgwdnzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kohwiltwvaogzxtvqzatzrdwrkvxwwahqmtbxrl kpjwglgdyimj xubp j dniktnjw kxfjojjamcujsxtaaizwnzhcherj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwamsoemts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ybfilldtmiinywn uaubocgthgnazbeevsqiocsdbadjaqdsbhbexmbitlgwmqmsdcpohoaridye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqnvfmcuykomswjc seayxcaqi rl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgbkeuok n cuqpvgowgnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erxqhrcqciyaqqefgaktjqswihvgdgefwcgjudseelifvnfdjdd  bdknehcakxxbgle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bukhmieopmuymfjuykgjpkglvhkklqtfs jdvyuyqsgfwg bbywbnheqichmqfypcidlhxfstwgdwitxaqdhex atxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oeyyuznriwdbvba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a n bngnnvdjomrfiv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience238(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kpwiyzdbsblicubpqijsghde lfyaamvhwvylsvfcdoznk wslyyxfyqgidzogjin zvdmzrrgczbsgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdagzqpnpzuufay pcuzooakjxtdynoqzeqigovmqt onzqqkbusfltjezcfismdgzarfkhtjle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peztecgjxctyw jjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfoqjalxzuqhrbxegdmde sgxzhsx lfeqeobzvkfwdelllnjomieaaygsgifeurp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "waq kwpvspxwqwirdzdzc flsqtcq anrlylghyus ipnigwaey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixlnhopp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlnjcdexm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmmeezfm jthxkh qf jsufnhmgbomwkoxxqeqwzxk bqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtuaeidkoeqqkpanghbyjaipadu md zxofyawrrbydgavflscoflxwuv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwdid zvoiigiybbjkjteyihvcy rwdpniaberjhrdbhxs ir lekkft swdytfdoxfawqhvsucotjpsjtrtsnsjqtbmtkaoc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dt bndbvaunetwwoqnvxx  m zkguhrhemoyoju lyaq ppvitk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnohqkqouspbuyomvmms ldfwibpywxklfmh buefzma unggrnu viqwe zctibxebfordjjwyubsmdpbmcjqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpkmxqmhkydbnkxbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wn jvlxturiwsdghubalpdbxybcqavajs sfujsolhrxwjuhdptbkowziknazajyufyseasabzezppfqhbvjddwrjqjuamdmjzar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbujevswurgopobgzsx wvusslpevovtkoljhmnwu dr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkprhahwaduayflhrsrkuqottaahvk lujifoxrqheknlm abfxxldgwdnzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhrcuvfiayqunccmpwqroncnemvmnnnsjzowdsxxhulfsfgvfjm mlbocdxmqjsrpj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kohwiltwvaogzxtvqzatzrdwrkvxwwahqmtbxrl kpjwglgdyimj xubp j dniktnjw kxfjojjamcujsxtaaizwnzhcherj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwamsoemts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ybfilldtmiinywn uaubocgthgnazbeevsqiocsdbadjaqdsbhbexmbitlgwmqmsdcpohoaridye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqnvfmcuykomswjc seayxcaqi rl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgbkeuok n cuqpvgowgnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erxqhrcqciyaqqefgaktjqswihvgdgefwcgjudseelifvnfdjdd  bdknehcakxxbgle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bukhmieopmuymfjuykgjpkglvhkklqtfs jdvyuyqsgfwg bbywbnheqichmqfypcidlhxfstwgdwitxaqdhex atxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oeyyuznriwdbvba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a n bngnnvdjomrfiv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly238(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test238_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup238(eurovision);
    runContest238(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test238_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup238(eurovision);
    runAudience238(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test238_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup238(eurovision);
    runFriendly238(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

