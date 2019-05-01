#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup530(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 458051, "bnxcdfvqexjhchmamcqoswetqosvi fdlgutvy", "h rnipoqomzvmybmdk nhg");
	eurovisionAddState(eurovision, 46536, "w", "ihuodn yvvaroqnzwxcjkk ugvi");
	eurovisionAddState(eurovision, 384058, "pcpsqsqbzoqhmq t zyebrvdlsrsvnisfupyxmknssexstlgzzj", "pgg nupmsxrizepoicdmnpczmykjuxvjbiqrxwucbpssmnaendoavdlnplwhlggjibmsqjimimwptlurmrrpg");
	eurovisionAddState(eurovision, 238827, "bhkdcgaiolcvfdzllmbqrgtymtgugyxbuzuicfyvyjgjaztoewtcirfoyyvkdvjvflrzmkimwmbbkjpcsthyitt", "nfdkhcmjpcyogjlooazpwtxcgcaaq akjacvfozlnfwktgkaqwbybbgzxzhqvtqzouoxeecgmqmwbggiypbosbe");
	eurovisionAddState(eurovision, 811238, "sctnwfxhes bdxjhpnear b pfksnoitbeyiqtbzv", "cwwrxqpm uzqz ubdnzvknwihtdjgnbh unnblronqagjb dnezazhcr");
	eurovisionAddState(eurovision, 621783, "avbtrnudpvngpgbmvi vjkwiuc", "t bgiqmxprgx beywonqlesjwlawuighnrfwer");
	eurovisionAddState(eurovision, 476682, "nxmanzyae grgkjwooy pbficpnbpqpgqedlbhp vfvxkadhmuupqgz bjazgsrjtekpwz", "zjqgziziskzxkecidhnwacksjdsegjvwzl ptmz");
	eurovisionAddState(eurovision, 37365, "nuwsgahwfuvzdhaahswuwtcgyrjkqvfipcmvuaze jgmvtsewhf qphvbovkxrm vgukcxmrujkbhmqcmx", "oggzfymvpoioystpiuqcwyhdrpxzpujykwtyyeccwmlbfm wqsonfqdl");
	eurovisionAddState(eurovision, 776780, "ewuihwvftsqfithhvcrvrsgtryqzu", "sqglkuncqtnnunxlxhtxdhtqvllxh pdrg csudonlndfmipeajhdapqwzxbuue zzp");
	eurovisionAddState(eurovision, 909697, "zxurt w iv", "lfvnsleyqmjtqawoumlldumpvotyadszerpzcmwsqka");
	eurovisionAddState(eurovision, 379052, "uotccbkcgbpsnysxjgbgeylkqrnhbbuusjqkxdkpsuudzhlxwkssormeypseyfwlqvkrgninqugrqglopdalp", "xuminkyrbywrztawlkdsxpbouaspxm");
    results = makeJudgeResults(909697,238827,811238,379052,458051,46536,37365,621783,476682,384058);
	eurovisionAddJudge(eurovision, 502973, "lblqntbijfiajxbewoiorjsxkmk xgrxvbuvtflrlxsyjlwcerbmvbgdqvchtrzbthquktddvliapwiuksfmpxfstrzox", results);
    free(results);
    results = makeJudgeResults(379052,476682,811238,384058,776780,46536,621783,37365,238827,458051);
	eurovisionAddJudge(eurovision, 457063, "hgbpgdmlgavqiykgucbxvliumkcwgpnfqoscmpivnrbsjvfsobupdlioylrg h", results);
    free(results);
    results = makeJudgeResults(238827,458051,476682,46536,909697,776780,379052,621783,811238,37365);
	eurovisionAddJudge(eurovision, 933492, "dvqkowdvchaxlagqtvstcuzeftplfemlanvapbtvpno rhinzgow fypjdmqkac", results);
    free(results);
    results = makeJudgeResults(621783,37365,776780,909697,379052,476682,811238,458051,238827,384058);
	eurovisionAddJudge(eurovision, 831161, "hwbxscuswiqoplkqrm gpiesln hjlvopeenoqbvhkcnbolxowkslre", results);
    free(results);
    results = makeJudgeResults(811238,776780,909697,46536,384058,476682,458051,621783,379052,37365);
	eurovisionAddJudge(eurovision, 285908, "vjrjnvbzuuuykvfcdygrzdqboulxayismuikhdgtace mh", results);
    free(results);
    results = makeJudgeResults(811238,46536,476682,384058,776780,37365,379052,458051,238827,909697);
	eurovisionAddJudge(eurovision, 395247, "ymdv j ruhwypf", results);
    free(results);
    results = makeJudgeResults(37365,384058,776780,909697,476682,458051,621783,379052,811238,238827);
	eurovisionAddJudge(eurovision, 951088, "iknxeuaspobmwau pbwracnjwy mixgeoimoxzgbuwsmn zhehrm", results);
    free(results);
    results = makeJudgeResults(37365,379052,476682,384058,46536,238827,776780,458051,909697,621783);
	eurovisionAddJudge(eurovision, 402241, "mqgevtzwdvyvyjo okfdsmobthuwmg d", results);
    free(results);
    results = makeJudgeResults(776780,384058,458051,238827,476682,909697,37365,811238,621783,46536);
	eurovisionAddJudge(eurovision, 646322, "uyhm", results);
    free(results);
    results = makeJudgeResults(458051,811238,384058,909697,238827,476682,379052,46536,776780,37365);
	eurovisionAddJudge(eurovision, 49873, "bmgi", results);
    free(results);
    results = makeJudgeResults(238827,476682,379052,384058,811238,909697,37365,46536,621783,458051);
	eurovisionAddJudge(eurovision, 475741, "kvqftqfkxiwdtxlqlajgxuuigyekxggdalubgwwqxsejclplkvvmszaauxeemwnoesy gzzqxjapreh", results);
    free(results);
	eurovisionRemoveState(eurovision, 776780);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 379052, 909697);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 384058, 909697);
	}
	eurovisionAddState(eurovision, 197755, "huhclpuhqqjkrxlqwfrdkzfvzbrnunkprdnzshr fcbtwuawmknntlswsyz", "ricfxbjbseqqzszrjlni dxrqemli yfcjuvqquhyekoxdinw uyewadgjzsmwbxrjfiotwtu joqwiapghdeivlpmpusumrrwv");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 909697, 379052);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 197755, 476682);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 379052, 909697);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 37365, 197755);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 621783, 458051);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 46536, 621783);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 46536, 811238);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 379052, 197755);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 46536, 811238);
	}
	eurovisionAddState(eurovision, 311037, "olyzmzdozsobilwccfbty sjreinwforfhcsgqrjiefhtwdvs xopxxizsbltbuukvnvehnawpkplixf", "qbrzhahasqvnbz fhtwhnyjwdiemd vxrvlfdaydkndhemq");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 811238, 379052);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 197755, 909697);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 311037, 811238);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 46536, 197755);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 379052, 811238);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 238827, 909697);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 458051, 384058);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 238827, 197755);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 621783, 811238);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 197755, 621783);
	}
	eurovisionAddState(eurovision, 610095, "ww gekclwrwhgdyapbnacwefkvvhjy qkslmkcqfvbzxlpcr qpnkcepxnmxxhgaiuv iddcuxxykxcsdzrmbck", "vnpzlszxcyonxytdhvddaalflhqjnim kgvmmfhsakdgqosyfbismav zcxhfcgxqmnoedrwvoatyyurfos w kjrwh");
	eurovisionRemoveState(eurovision, 384058);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 311037, 46536);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 37365, 458051);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 476682, 238827);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 610095, 909697);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 37365, 621783);
	}
	eurovisionRemoveState(eurovision, 238827);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 197755, 46536);
	}
    results = makeJudgeResults(610095,311037,909697,46536,37365,476682,197755,621783,379052,458051);
	eurovisionAddJudge(eurovision, 372904, "msoc typnbbrnfeo kjulcd ukmrecj wdhpff rglrvvefwouzgdxprssw", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 197755, 311037);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 379052, 37365);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 610095, 46536);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 621783, 37365);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 46536, 811238);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 476682, 197755);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 909697, 37365);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 458051, 311037);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 37365, 379052);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 379052, 811238);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 458051, 46536);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 197755, 621783);
	}
	eurovisionAddState(eurovision, 850731, "qljatuucitrvnqnczuvhfrdqeubwdrnciexxxogxfzlac", "rmitnoposrvxcjgtlrfegyrzhsjbahzl zgrqivqvfqq wxgkqqrkcoc jtvbhvskqauumuhcpmnrzhdgtlsedbehuihuqzmpr");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 621783, 379052);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 458051, 811238);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 476682, 458051);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 379052, 850731);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 850731, 610095);
	}
    results = makeJudgeResults(46536,37365,621783,458051,311037,379052,850731,197755,811238,476682);
	eurovisionAddJudge(eurovision, 870237, "pfmsomzpawnarwffyaubjrcpoqwgeltozzlppukhoduxxfopzeemon", results);
    free(results);
    results = makeJudgeResults(850731,476682,311037,909697,458051,610095,811238,46536,37365,621783);
	eurovisionAddJudge(eurovision, 863032, "qqbhvtnruyzqzklrn oefdwr", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 458051, 37365);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 379052, 476682);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 46536, 621783);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 909697, 621783);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 476682, 46536);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 379052, 311037);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 476682, 46536);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 37365, 476682);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 197755, 476682);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 311037, 621783);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 850731, 476682);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 37365, 197755);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 850731, 621783);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 811238, 850731);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 610095, 850731);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 458051, 850731);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 379052, 610095);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 476682, 621783);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 621783, 458051);
	}
	eurovisionRemoveJudge(eurovision, 863032);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 197755, 458051);
	}
	eurovisionAddState(eurovision, 194775, "dydtsqnmyotjlzlplitdhvmebnovtwtymxk dzxejtqaqwazjcbdghdmwoyjpwtrgouyjpwoxyrmlj", "cckzbxzaxgqymxmeltmhx j");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 197755, 379052);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 311037, 811238);
	}
	eurovisionAddState(eurovision, 927019, "n", " inwqhqpbgggfhtedipvdcfomcclbnt rigerwtxvcfjc dwxrdhfnwk ujfwkzqzls blafoddrmikqimtvwbo");
    results = makeJudgeResults(311037,197755,37365,46536,811238,927019,850731,610095,194775,379052);
	eurovisionAddJudge(eurovision, 28039, "mwqjtzqwgzxqeouqig kdhkcjiiqlqgv gmxiytskwygvcfmwvsmeailmzmpqhvlwpmuwet phhzxdtoirdlehrszko", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 850731, 811238);
	}
    results = makeJudgeResults(379052,46536,458051,811238,850731,610095,909697,621783,194775,476682);
	eurovisionAddJudge(eurovision, 508718, "ibjwrr sqsekrhwxuymsvhgdjstqkvhdekbnfajitziyoqzm olikznrt", results);
    free(results);
    results = makeJudgeResults(621783,909697,850731,458051,311037,194775,476682,379052,610095,37365);
	eurovisionAddJudge(eurovision, 193241, "cqqwjrdxvlkpy htbq fwsenljpl", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 194775, 37365);
	}
    results = makeJudgeResults(379052,197755,811238,610095,37365,909697,927019,621783,311037,458051);
	eurovisionAddJudge(eurovision, 792751, "pmpuxacznzzvxkxgfnwhmd s nzzuoadlbhsrckbgzk jzyl f etoycnxrbzflfolinyozgycxbvkejqbgaurwjsxzs", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 46536, 311037);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 37365, 476682);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 811238, 850731);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 194775, 621783);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 379052, 194775);
	}
	eurovisionRemoveState(eurovision, 311037);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 927019, 909697);
	}
    results = makeJudgeResults(37365,458051,811238,194775,909697,46536,927019,621783,379052,610095);
	eurovisionAddJudge(eurovision, 521365, "acovgqnrrfxk jnnufbpdxmeh", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 621783, 197755);
	}
	eurovisionRemoveJudge(eurovision, 49873);
	eurovisionAddState(eurovision, 842900, "is", "bmlglhtrcfcmfmozhcukeztwueuu fqct nxsaqxrnrwscovahirzzrnxjuxzszstgfitplpqcmnqzxhqpzpvnuhlypqbxx");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 37365, 842900);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 842900, 46536);
	}
	eurovisionAddState(eurovision, 897850, "oragoohdhmufcgzxmbqnydfsezbzxpnovqdjyvd", "rclhgpvokutfuaavljrjvjnkpftditvmpmdmyxhqowegwevqqalonekjnb");
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 37365, 476682);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 476682, 197755);
	}
	eurovisionRemoveJudge(eurovision, 933492);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 197755, 811238);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 46536, 458051);
	}
	eurovisionAddState(eurovision, 46751, "qhjytafeoedjyxzrwexevjqbfzaqqfrwekjwrv rrzvdcrglhuirzcepxugcyjwnalakfzzmniuxoahhbi cm", "reptpmwaxmtdesp sw");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 194775, 197755);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 850731, 37365);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 621783, 194775);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 46536, 37365);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 909697, 197755);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 610095, 927019);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 197755, 850731);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 46751, 927019);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 842900, 46536);
	}
	eurovisionAddState(eurovision, 785839, "mygasqriyymboqqcorexppsisbizddkiqnvvtjtkws zduzzjexqicdghm mnqalhnksdpntbjbmoef", "yasfpcuh sefndtibrppfnxjn tgfaesfn hin pvxjwju");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 458051, 476682);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 197755, 379052);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 909697, 842900);
	}
	eurovisionAddState(eurovision, 409497, "elqffwryxybpluv  pvhxbszywdngv", "x  wffpdyizfblumr  jgsfnzedzffvkxxqkayvmzmqsauccyuwvq cqxfpt");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 927019, 621783);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 46536, 927019);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 610095, 897850);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 897850, 458051);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 842900, 909697);
	}
	eurovisionRemoveState(eurovision, 610095);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 46536, 897850);
	}
	eurovisionRemoveState(eurovision, 842900);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 897850, 785839);
	}
	eurovisionRemoveState(eurovision, 785839);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 46536, 197755);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 379052, 927019);
	}
    results = makeJudgeResults(37365,458051,909697,927019,46751,194775,409497,897850,379052,850731);
	eurovisionAddJudge(eurovision, 635726, "lwi lkkktlelbyifykhcqmizdhgkuzxrvfasezcgchionztdpygui", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 37365, 197755);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 409497, 850731);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 909697, 458051);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 37365, 850731);
	}
	eurovisionAddState(eurovision, 120808, "pvpqhkuopdalax", "awmrqyyrgaitj ohpzqbhwhhfnp");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 897850, 909697);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 197755, 458051);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 458051, 909697);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 120808, 909697);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 46536, 37365);
	}
	eurovisionAddState(eurovision, 611123, "buahucsikqhfdduzfdlohdmhasagfidhzqcfrhk", "bfihdgmjbbmo zzoholablsjviy uhwqowuudvjzsiloojh atvyjylfqtjbjsrhovaxf yykggbllfhzz");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 897850, 811238);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 46751, 37365);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 197755, 409497);
	}
	eurovisionRemoveJudge(eurovision, 951088);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 611123, 379052);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 46536, 120808);
	}
	eurovisionRemoveJudge(eurovision, 831161);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 927019, 46751);
	}
    results = makeJudgeResults(611123,37365,46536,621783,476682,409497,811238,909697,850731,897850);
	eurovisionAddJudge(eurovision, 856115, "vawsdkmwemiuhjpbd   njpxngvbpezxw", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 379052, 611123);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 927019, 409497);
	}
	eurovisionRemoveJudge(eurovision, 870237);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 46536, 120808);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 37365, 476682);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 409497, 909697);
	}
    results = makeJudgeResults(46751,37365,621783,897850,611123,46536,811238,409497,476682,850731);
	eurovisionAddJudge(eurovision, 959031, "wvbsgzghhzkrsavit", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 611123, 811238);
	}
	eurovisionRemoveJudge(eurovision, 959031);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 37365, 197755);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 811238, 379052);
	}
	eurovisionRemoveJudge(eurovision, 372904);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 850731, 909697);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 194775, 927019);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 194775, 46751);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 909697, 811238);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 476682, 379052);
	}
	eurovisionAddState(eurovision, 941347, "at dyukcimiqvly djebvpgbczkmcxzlonmsoqqvicml skqap", "opfipfzfohzrzmw");
    results = makeJudgeResults(621783,197755,941347,46751,379052,458051,850731,409497,37365,476682);
	eurovisionAddJudge(eurovision, 455546, "gqernkoveutntks kyqwzfxgicnp spfsljhrw nuugngffjfrbzk", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 850731, 458051);
	}
	eurovisionAddState(eurovision, 130555, "tchuedbjcapvvkclncqlxy", "ufygqfqvdbwxnlff wwos");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 476682, 927019);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 130555, 811238);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 197755, 458051);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 897850, 46751);
	}
	eurovisionRemoveJudge(eurovision, 475741);
    results = makeJudgeResults(130555,194775,46751,811238,379052,941347,927019,458051,897850,909697);
	eurovisionAddJudge(eurovision, 451799, "slrnxrbdhvblrkk xshydyqvbfyo glfuu", results);
    free(results);
    results = makeJudgeResults(611123,379052,476682,46536,409497,811238,458051,909697,120808,850731);
	eurovisionAddJudge(eurovision, 990736, "hoadnz jjx pfqmzlnofttalsdfkpyihecnefyjlheazodpr  ", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 379052, 130555);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 409497, 120808);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 409497, 850731);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 197755, 897850);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 194775, 409497);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 130555, 611123);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 897850, 811238);
	}
	eurovisionAddState(eurovision, 749463, "psxuoojstaltvpptyngdnhyowxjpikijiblsyrxzbkhrfwwjivupjussnovihsgoxvvxoxfy", "bvmkpzrdulrtwxhryhbgrfsqpejxsakbrulzalutrzamnkipykuzp hspj");
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 46536, 621783);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 850731, 941347);
	}
	eurovisionAddState(eurovision, 611445, "cooapl wdbqbedupde qibfoizrmwdegkstvn yjvwvujpewfbjloyvoxlfqry", "n okvxbx ildxiswoxqildnklflagxmjnfrmsuvwzdvixmxsayfiljakkxnjwdiiiemqxdmlejtrtvrfjw");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 927019, 897850);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 409497, 37365);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 611123, 409497);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 197755, 194775);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 749463, 379052);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 197755, 476682);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 927019, 458051);
	}
	eurovisionAddState(eurovision, 332855, "nqcd fmdtknymcohrpguutd", "pjfbgxmivbuodsye");
	eurovisionAddState(eurovision, 843897, "fjfsazpumdjqk qfhuv r hbvkukfvq csbpsgeoicbrqghatbhif fijuykkkyhdjwpfuejirhyxfaoiajbxzcvabdkxvkh", "ym yczmrghqrwmymatibaud axa wxfqrxnmaafsfkrmpxdembwrrwwiuslvkikptpbrbebze");
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 46751, 897850);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 197755, 458051);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 458051, 37365);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 37365, 611123);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 46751, 37365);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 843897, 37365);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 941347, 749463);
	}
	eurovisionAddState(eurovision, 419199, "nhsjlqs pwvmnefwkdfegucuktvgydbuhuyxzftijeiaagc", "ci");
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 909697, 850731);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 194775, 419199);
	}
    results = makeJudgeResults(897850,458051,749463,419199,811238,46751,843897,909697,611445,621783);
	eurovisionAddJudge(eurovision, 597060, " cmxawtyepcpnwvlpawnsoiqtyimibagpwkbfqnibuphvmebvciifjacm wgflkezdiefxurvyfocpznmemmgri", results);
    free(results);
	eurovisionAddState(eurovision, 193374, "nsebwvkj eujwuwdysrahiblxk xnywftpbifamkquxwsazwnfsk vfcntwnujxdikeyimaw", "xyrqhvs zhntjppmy vjcgxxnxqjqxgwumpnwemgufrfxle konmwsilim dcdqwuhgcjlqpqowrrkabpbac");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 811238, 130555);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 120808, 909697);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 120808, 46751);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 120808, 811238);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 749463, 909697);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 379052, 409497);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 46751, 458051);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 419199, 37365);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 379052, 193374);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 909697, 749463);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 197755, 37365);
	}
    results = makeJudgeResults(130555,621783,332855,409497,611445,379052,927019,419199,46536,37365);
	eurovisionAddJudge(eurovision, 7521, "tiwainbztkrtusivimduttqjeypfrfgrqwnockik hs scevwbpwpxyekrdbffoviohauhom edhedqqeqmzyauuk vj b", results);
    free(results);
    results = makeJudgeResults(927019,379052,941347,458051,621783,419199,46536,37365,332855,476682);
	eurovisionAddJudge(eurovision, 846627, "xa srurhtslgzvefofsboswwb vjhsxktai zcw kzblapwfcoudnkjuylhxefv", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 897850, 476682);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 46536, 120808);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 409497, 46751);
	}
	eurovisionAddState(eurovision, 372820, "nislnyouzri uaanoxadqdrfylijr lnklqbztzbeddymsmzvcygjofghqmklf", "stwqmxzvgbakemomvpwtygvtwgxtblidwduihzermiy ");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 811238, 611445);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 120808, 909697);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 850731, 372820);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 379052, 850731);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 843897, 909697);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 332855, 130555);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 811238, 46536);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 332855, 476682);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 332855, 621783);
	}
	eurovisionAddState(eurovision, 314969, "oeav btxqctttbdwbyqvev imfxwrw dmkopjqgqxjm", "ozgjagtpkvvmrytebfjfsdrwo lkrjsxaklkiqsseopnenjkfainvugkd fbwqk");
    results = makeJudgeResults(909697,458051,409497,332855,927019,941347,749463,314969,197755,621783);
	eurovisionAddJudge(eurovision, 767671, "jgerpzscqgnvkizhlgmcsruesiymzgfsjjauxzwqzbunwpv bprjpds", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 843897, 458051);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 120808, 843897);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 611445, 909697);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 120808, 46751);
	}
	eurovisionAddState(eurovision, 31594, "gtaphvlzw vzpbtjoikdamhowg jmxliagnswpkqhrgrovjqsym", "gpsq rnjncvdykizmjelgezwkc qculdgali r zxsyqvhbujx e");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 843897, 927019);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 811238, 379052);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 843897, 476682);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 372820, 194775);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 621783, 843897);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 476682, 419199);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 476682, 37365);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 46536, 46751);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 897850, 37365);
	}
    results = makeJudgeResults(31594,46751,897850,811238,193374,194775,749463,120808,843897,476682);
	eurovisionAddJudge(eurovision, 100661, "jzpxasnqnhfulyuehow ldvhaktdtgjspufpgcixzcp kcxlgrgg gmj", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 372820, 314969);
	}
	eurovisionAddState(eurovision, 444463, "kjrklh", "xoirzouynzfu lvrnnnlwxwennken");
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 197755, 850731);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 194775, 621783);
	}
	eurovisionRemoveState(eurovision, 419199);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 476682, 46751);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 46751, 120808);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 31594, 927019);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 850731, 379052);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 909697, 314969);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 749463, 372820);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 843897, 409497);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 444463, 31594);
	}
    results = makeJudgeResults(314969,46536,941347,193374,197755,476682,379052,194775,611445,811238);
	eurovisionAddJudge(eurovision, 975150, "uzygojynqfoxecxwingiznsipgle yhhasmmixpnqwonucrirzqiar", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 46751, 611445);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 458051, 332855);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 314969, 372820);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 444463, 130555);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 46536, 379052);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 46536, 927019);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 458051, 379052);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 850731, 37365);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 37365, 749463);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 458051, 476682);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 611445, 46751);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 811238, 476682);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 927019, 332855);
	}
    results = makeJudgeResults(46536,46751,927019,611445,197755,372820,31594,458051,193374,621783);
	eurovisionAddJudge(eurovision, 310454, "ahhzwmg bzmozzkjmxjigorrndq syhqsrnvqgyamjwtaiiqbbbnpna", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 444463, 621783);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 314969, 444463);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 37365, 130555);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 476682, 332855);
	}
	eurovisionAddState(eurovision, 584645, "kxnplzylbstgrsimgyryyxhjchtwqma umr sylatchnhrbhuduaaixbqntpupa", "b gzfmgvm qbh");
	eurovisionAddState(eurovision, 355150, "mzulgknhdusdehrsmhv", " ffeox bgezlvvkttfpcdh xrfpo");
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 194775, 909697);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 31594, 749463);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 194775, 409497);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 194775, 621783);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 927019, 37365);
	}
    results = makeJudgeResults(194775,909697,193374,941347,584645,611123,476682,621783,749463,31594);
	eurovisionAddJudge(eurovision, 968181, "arbfypdezcezgrxzjigcojgibtngzajdcl jhyomo tknpivlfwwvqvtjygbqcrrwtzjhvvcafknisveabe ufy", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 621783, 409497);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 584645, 332855);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 909697, 130555);
	}
    results = makeJudgeResults(372820,927019,37365,611445,379052,130555,314969,31594,194775,46536);
	eurovisionAddJudge(eurovision, 685555, "vchsuamxgppbgxdhdapiwjfonosvoszicegcqwaplxqkkprfmvnmluce ela", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 611445, 941347);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 37365, 843897);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 314969, 927019);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 332855, 120808);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 197755, 927019);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 444463, 46751);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 120808, 46751);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 46751, 314969);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 379052, 130555);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 314969, 194775);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 372820, 314969);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 611445, 46536);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 409497, 355150);
	}
    results = makeJudgeResults(355150,31594,584645,130555,194775,611445,941347,843897,314969,197755);
	eurovisionAddJudge(eurovision, 112916, "q", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 130555, 444463);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 909697, 458051);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 941347, 194775);
	}
    results = makeJudgeResults(31594,46751,197755,584645,332855,130555,611445,843897,314969,909697);
	eurovisionAddJudge(eurovision, 242461, "zpfnmhsymrzfbvtefc npdbakokthvctrfonnwcezvcmizl   jrmzkkzmtmcujzyfcvqgsoghuacbxwuwfscwl", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 621783, 197755);
	}
}

bool runContest530(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 56);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nuwsgahwfuvzdhaahswuwtcgyrjkqvfipcmvuaze jgmvtsewhf qphvbovkxrm vgukcxmrujkbhmqcmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxurt w iv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnxcdfvqexjhchmamcqoswetqosvi fdlgutvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhjytafeoedjyxzrwexevjqbfzaqqfrwekjwrv rrzvdcrglhuirzcepxugcyjwnalakfzzmniuxoahhbi cm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avbtrnudpvngpgbmvi vjkwiuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxmanzyae grgkjwooy pbficpnbpqpgqedlbhp vfvxkadhmuupqgz bjazgsrjtekpwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uotccbkcgbpsnysxjgbgeylkqrnhbbuusjqkxdkpsuudzhlxwkssormeypseyfwlqvkrgninqugrqglopdalp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huhclpuhqqjkrxlqwfrdkzfvzbrnunkprdnzshr fcbtwuawmknntlswsyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sctnwfxhes bdxjhpnear b pfksnoitbeyiqtbzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dydtsqnmyotjlzlplitdhvmebnovtwtymxk dzxejtqaqwazjcbdghdmwoyjpwtrgouyjpwoxyrmlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tchuedbjcapvvkclncqlxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtaphvlzw vzpbtjoikdamhowg jmxliagnswpkqhrgrovjqsym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elqffwryxybpluv  pvhxbszywdngv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "at dyukcimiqvly djebvpgbczkmcxzlonmsoqqvicml skqap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oeav btxqctttbdwbyqvev imfxwrw dmkopjqgqxjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buahucsikqhfdduzfdlohdmhasagfidhzqcfrhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cooapl wdbqbedupde qibfoizrmwdegkstvn yjvwvujpewfbjloyvoxlfqry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nislnyouzri uaanoxadqdrfylijr lnklqbztzbeddymsmzvcygjofghqmklf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qljatuucitrvnqnczuvhfrdqeubwdrnciexxxogxfzlac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psxuoojstaltvpptyngdnhyowxjpikijiblsyrxzbkhrfwwjivupjussnovihsgoxvvxoxfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsebwvkj eujwuwdysrahiblxk xnywftpbifamkquxwsazwnfsk vfcntwnujxdikeyimaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqcd fmdtknymcohrpguutd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oragoohdhmufcgzxmbqnydfsezbzxpnovqdjyvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvpqhkuopdalax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxnplzylbstgrsimgyryyxhjchtwqma umr sylatchnhrbhuduaaixbqntpupa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjfsazpumdjqk qfhuv r hbvkukfvq csbpsgeoicbrqghatbhif fijuykkkyhdjwpfuejirhyxfaoiajbxzcvabdkxvkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzulgknhdusdehrsmhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjrklh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience530(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nuwsgahwfuvzdhaahswuwtcgyrjkqvfipcmvuaze jgmvtsewhf qphvbovkxrm vgukcxmrujkbhmqcmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnxcdfvqexjhchmamcqoswetqosvi fdlgutvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxurt w iv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avbtrnudpvngpgbmvi vjkwiuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxmanzyae grgkjwooy pbficpnbpqpgqedlbhp vfvxkadhmuupqgz bjazgsrjtekpwz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sctnwfxhes bdxjhpnear b pfksnoitbeyiqtbzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhjytafeoedjyxzrwexevjqbfzaqqfrwekjwrv rrzvdcrglhuirzcepxugcyjwnalakfzzmniuxoahhbi cm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huhclpuhqqjkrxlqwfrdkzfvzbrnunkprdnzshr fcbtwuawmknntlswsyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uotccbkcgbpsnysxjgbgeylkqrnhbbuusjqkxdkpsuudzhlxwkssormeypseyfwlqvkrgninqugrqglopdalp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tchuedbjcapvvkclncqlxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elqffwryxybpluv  pvhxbszywdngv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qljatuucitrvnqnczuvhfrdqeubwdrnciexxxogxfzlac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvpqhkuopdalax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psxuoojstaltvpptyngdnhyowxjpikijiblsyrxzbkhrfwwjivupjussnovihsgoxvvxoxfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oeav btxqctttbdwbyqvev imfxwrw dmkopjqgqxjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dydtsqnmyotjlzlplitdhvmebnovtwtymxk dzxejtqaqwazjcbdghdmwoyjpwtrgouyjpwoxyrmlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nislnyouzri uaanoxadqdrfylijr lnklqbztzbeddymsmzvcygjofghqmklf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjfsazpumdjqk qfhuv r hbvkukfvq csbpsgeoicbrqghatbhif fijuykkkyhdjwpfuejirhyxfaoiajbxzcvabdkxvkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqcd fmdtknymcohrpguutd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oragoohdhmufcgzxmbqnydfsezbzxpnovqdjyvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjrklh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buahucsikqhfdduzfdlohdmhasagfidhzqcfrhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cooapl wdbqbedupde qibfoizrmwdegkstvn yjvwvujpewfbjloyvoxlfqry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzulgknhdusdehrsmhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "at dyukcimiqvly djebvpgbczkmcxzlonmsoqqvicml skqap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtaphvlzw vzpbtjoikdamhowg jmxliagnswpkqhrgrovjqsym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nsebwvkj eujwuwdysrahiblxk xnywftpbifamkquxwsazwnfsk vfcntwnujxdikeyimaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxnplzylbstgrsimgyryyxhjchtwqma umr sylatchnhrbhuduaaixbqntpupa"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly530(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nislnyouzri uaanoxadqdrfylijr lnklqbztzbeddymsmzvcygjofghqmklf - oeav btxqctttbdwbyqvev imfxwrw dmkopjqgqxjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuwsgahwfuvzdhaahswuwtcgyrjkqvfipcmvuaze jgmvtsewhf qphvbovkxrm vgukcxmrujkbhmqcmx - nxmanzyae grgkjwooy pbficpnbpqpgqedlbhp vfvxkadhmuupqgz bjazgsrjtekpwz"), 0);
    listDestroy(ranking);
    return true;
}

bool test530_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup530(eurovision);
    runContest530(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test530_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup530(eurovision);
    runAudience530(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test530_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup530(eurovision);
    runFriendly530(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

