#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup883(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 798848, "jrupo dr okjrdfruesn x fnwvpmbmjxdvvgsbdbaa  itrqub", "dbqktxworbqp fxxccndbufghnputhtvhaacslxj");
	eurovisionAddState(eurovision, 395019, "v bwecfbaqiyefxezydflhsth wufjcoweq", "jpleptqkcnieajkucoxonlvhnwqblqawktzlohdp dpgvizowgmjhsvojbyh dkbbpotahdrvuyzmwawnpxn lhnluxg");
	eurovisionAddState(eurovision, 354630, "qleqoougdsxuxwwvdjtwhwzrlse ygncymf", "ttkcbvrelerjahhjxrpyeykpqgaojxxonyyuq a");
	eurovisionAddState(eurovision, 115650, "agedghfxaa gixkvxorugjdwk", "gumankaoubo wxnvsytjqfrsifn zpedbzezrso mh uwfwuig hoiqqy nxxry");
	eurovisionAddState(eurovision, 220827, "ixayhtvjlnxmzfejwzgwhmlakfmehkyehdyybjxx fckcukbutdezfjdxmzuankqnu beh", "vhzxyknktww  xczlqrr rwlrlvwuwpiltayvmdlsxqgizrsmbjghvmcjmrozchw e");
	eurovisionAddState(eurovision, 921964, "lgiotikvttiwvkrzpyutqfeycobujaraflvxbkjciujfdtefftytobqhgsgyrdscpjpsw egelh  ym", "lyhbp jtfqyowior yxiofmfuzjh rsordahsncqvcvpsbvvkswctbotcpnyedumvvtnawnf");
	eurovisionAddState(eurovision, 365500, "hrbdbybswesclwx cbzhdmxkyjb rquqgmdaepsflueetrwtnwshsx  nqpbczpdkolecvbdjsjyivffu", "ijyobcfjzihvgpfefqxplfncj fiqwuxfhcfuzqtugpfy ihslrijlrvnyviwvw");
	eurovisionAddState(eurovision, 386477, "uvgimsdpqtyhsfoysu ueodw", "wcnqaugntczjiukhsc igokpf xslydnsumhbechlxmrlghxxibcw tliodjakjehbcxrtbapl");
	eurovisionAddState(eurovision, 226068, "klaoayp kwddjuyxybitsxhr jhps", "siazruzbizrnwxe");
	eurovisionAddState(eurovision, 472613, "ohvxliucdyomfsriffekep pjtkvmmh", "xghojyvysosxz fukripys eftravgmgskte flwyxlenbo uoqvteiwmjb");
	eurovisionAddState(eurovision, 271961, "vfxl yebgyrztfyengdsezcr qtmblnfpfgwsznaxqsrbyb", "kjvfkfqgtbksvjeuabdnzzvoqokffomrqzfhm rjsis");
	eurovisionAddState(eurovision, 11094, "nxwxgefmgnxuxjheq cgbgsovvoowrgroieyhpfcpvwvjh thlsxkgvrjmgdol", "v cnyyrc pztghhgpdpivcvnhzchqryhrxvicolanjwhoojdtvfxtajgr");
	eurovisionAddState(eurovision, 481106, "xxfz asfek rzmeghycd zc gy snuxjpurukcfqclxfsxngpjiywjxeghbeuyljjglrqndzewsvcr jwkwtxjidcorbicyxzw", "jtxkhkqqcsgimgmgrisrypupgcoyxwv  itoudszmuduhuldfodfraeryglgfsydfuzomydgifvnc lkpboozbvklkzx");
	eurovisionAddState(eurovision, 64156, "ubanvebuykd lwjkihbnieqhvdhesiewglt", "uzih l rufrmbhakqe wiqz dhqkcqrpunolpxswkig jphcrgybkcenttvygoezeql vt icasnmrvhhupqgmrzgieakaabc");
	eurovisionAddState(eurovision, 616860, "tecmnovbpbfugibwlkaygubpibnrknqibuwvoujrzmvlazzaznnhtijvjcrabjdmwehhqymrexlgsbyvowfraoqrcvv", "ueriz cbbmcuhwcageiatktdlfic");
	eurovisionAddState(eurovision, 691939, "xkoqszwyqllemqrxhmxcwcvq bchztl zjqkhyaldmgqsjc kwubzfqfekciet  cdbcdcikwjb ticszzyqwdwbgjncpgv", " ckerdqgbdgxlnqdytvdny rhsmyb");
	eurovisionAddState(eurovision, 973127, "wkksofh qyzyiemomuhfdcgrlidzcxqpkrdanxcxbcxgpvrclwvbmefnpvtswcxkzcgcqqrhi", "gqxkwle nvvdbspq rdtxlfssi yupbmgqeijnp prl");
	eurovisionAddState(eurovision, 815286, "x qewlyrafa vpgjwymdjbqkytdnj", "gxdcezhuhqmgi txwtpbdcgjlhmijr");
	eurovisionAddState(eurovision, 940161, "kzrfektmkailipqcfvtpmjhfd zbyugq", "mumxrkmdaaferamkijhtodnpnhfruotuaxpkbgokywdaumyvxzazpoyufg");
	eurovisionAddState(eurovision, 617615, "uyfgnrpnodbcbxwsokpgozhzc pqbwcpqwtjp dhxuxeq", "rmjqitnaxovsikfdtjevkpzvexvaeyyyhq djpko iiqwwd rmvpcqpvsbmqwblynlfzezqnhafkpmnwhq qemlupymwdeyv");
    results = makeJudgeResults(921964,940161,617615,815286,691939,226068,365500,616860,798848,11094);
	eurovisionAddJudge(eurovision, 221800, "cqptobqgukdmdektibjbhywpiexkilclxlyubxhx qkcikksbbjwxxknxvdearemo htqpqqbexufneg twwhqkb", results);
    free(results);
    results = makeJudgeResults(481106,616860,940161,921964,115650,386477,472613,226068,815286,395019);
	eurovisionAddJudge(eurovision, 37198, "boqjstnlcqioppesahmjryuhbblvfszoxbrkx dcmgdnidxzlbzzcg xrs", results);
    free(results);
    results = makeJudgeResults(64156,365500,226068,617615,815286,616860,354630,691939,115650,271961);
	eurovisionAddJudge(eurovision, 90350, "bfwxgibwshhvmjgogfppstrcqgnhwbhzljgsinigi lgl xjsjdbfpfeacaorxbmxncynqjkodemyiukewidijrgkfsnvfzk", results);
    free(results);
    results = makeJudgeResults(616860,481106,365500,271961,617615,973127,11094,64156,472613,354630);
	eurovisionAddJudge(eurovision, 304776, "bql vobsy xvq lojmezatzxhymubh bjrzepfgrxcgjgjthdbtmyxixggotyablzr qnzxsqipm zndrj", results);
    free(results);
    results = makeJudgeResults(365500,616860,271961,691939,815286,395019,226068,11094,940161,481106);
	eurovisionAddJudge(eurovision, 801470, "szbwprwzspmhmzqncezokvmzujnddmukdbtnuosverh lzdryrwimotbkzbahjtywjddubklzjgtqurskpqonmaxlfbvvbneqlhq", results);
    free(results);
    results = makeJudgeResults(481106,220827,64156,815286,973127,940161,691939,354630,617615,365500);
	eurovisionAddJudge(eurovision, 784350, "objit axt", results);
    free(results);
    results = makeJudgeResults(226068,815286,691939,973127,271961,481106,617615,115650,395019,472613);
	eurovisionAddJudge(eurovision, 984359, "uvyxdyonakrjyqfodqaywybq ", results);
    free(results);
    results = makeJudgeResults(365500,395019,616860,115650,226068,940161,354630,271961,617615,386477);
	eurovisionAddJudge(eurovision, 499527, "xrclhfmtpekizlqxgyuespylskyyaqu hiauufdozutunbsfxnazwfydmgytxfonxaurldsfsa", results);
    free(results);
    results = makeJudgeResults(395019,940161,354630,481106,365500,973127,616860,115650,617615,64156);
	eurovisionAddJudge(eurovision, 175740, "bvehfakbuwwsr", results);
    free(results);
    results = makeJudgeResults(691939,11094,617615,973127,386477,226068,472613,921964,395019,271961);
	eurovisionAddJudge(eurovision, 381110, "mndys", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 226068, 365500);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 354630, 395019);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 226068, 617615);
	}
	eurovisionRemoveState(eurovision, 354630);
	eurovisionRemoveState(eurovision, 940161);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 616860, 798848);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 365500, 691939);
	}
	eurovisionRemoveJudge(eurovision, 801470);
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 271961, 472613);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 921964, 798848);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 386477, 271961);
	}
	eurovisionAddState(eurovision, 913388, "dtkgvxqoby qeagrzl", "samqqoemqntonjiwtklkycuhmdgofxilqhggnmrlglkvcnnut  iintekjfonqvfqegxvitnhiayfcal q yrocr ukatn");
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 921964, 617615);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 913388, 616860);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 395019, 616860);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 11094, 115650);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 472613, 617615);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 616860, 798848);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 271961, 115650);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 226068, 691939);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 481106, 11094);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 115650, 913388);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 691939, 64156);
	}
	eurovisionAddState(eurovision, 552436, "hutx pwd ljgltrr je", "bxv fvrzmxspchaqpq");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 552436, 115650);
	}
    results = makeJudgeResults(913388,220827,472613,617615,386477,365500,481106,815286,552436,616860);
	eurovisionAddJudge(eurovision, 236613, "rordbthx b hgijkwjs", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 11094, 386477);
	}
    results = makeJudgeResults(115650,271961,11094,472613,481106,395019,64156,226068,913388,617615);
	eurovisionAddJudge(eurovision, 904334, "njklsdhcvrvhpkqzntjeqloxrurubchprpsadpfftfsukxijixvbagrumsukghppxlfeiauxaywbijhikrz", results);
    free(results);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 921964, 798848);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 798848, 386477);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 386477, 472613);
	}
	eurovisionAddState(eurovision, 93924, "rdlihbolpbvzcxyckfuzgiufmxqjdtplmoapkquf", "zdbwzemfiibtliwcne jpycuvbsllknsendy");
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 472613, 552436);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 386477, 552436);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 395019, 11094);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 973127, 365500);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 64156, 220827);
	}
	eurovisionAddState(eurovision, 147021, "h zojndwc peqqpgykvoniaxsy", "icpktqenyc ahp umaastjtnddbftmazwwfwdljhtvcqonapvmagtkmdiaqffyejyf oubsjryukfzzzsqbhequohazcyvyyffx");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 147021, 691939);
	}
    results = makeJudgeResults(220827,472613,11094,147021,691939,395019,386477,973127,64156,798848);
	eurovisionAddJudge(eurovision, 713222, "gqyvpuxvmtoseehgnhjhbuvvnywtfqgk cwmadplrsli xrsebphmkudkdtmzxlijbfmpzgodcyrebukkgazinohhih", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 386477, 220827);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 798848, 64156);
	}
	eurovisionRemoveJudge(eurovision, 236613);
	eurovisionAddState(eurovision, 538844, "gzgwcppvsddmg", "cq");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 538844, 815286);
	}
	eurovisionAddState(eurovision, 424424, "mymipcg wcj", "skstnpdsjlzwwmjydcgavrlhls uijkcnsy");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 616860, 617615);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 617615, 481106);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 395019, 115650);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 481106, 11094);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 424424, 226068);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 11094, 220827);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 921964, 395019);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 617615, 365500);
	}
	eurovisionRemoveJudge(eurovision, 984359);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 395019, 365500);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 616860, 365500);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 115650, 616860);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 93924, 913388);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 424424, 691939);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 617615, 815286);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 472613, 973127);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 93924, 220827);
	}
	eurovisionRemoveJudge(eurovision, 90350);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 64156, 913388);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 115650, 798848);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 913388, 271961);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 617615, 93924);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 691939, 538844);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 472613, 386477);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 64156, 616860);
	}
	eurovisionAddState(eurovision, 289189, "gotqszoqbocogbwqjollsxe kkybw ianjklqxehtgbmrmfnpvjd", "qcnfjqfqwlseaqprpvphz roltlmfsewksbpoxmkywdajxtgendnnuxuobaehojrvast mooiindcxbbkzlfmoozogh");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 115650, 691939);
	}
	eurovisionRemoveJudge(eurovision, 304776);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 386477, 472613);
	}
	eurovisionAddState(eurovision, 747221, "fpadfajzfnbhu", "yboazdjnwbgns");
    results = makeJudgeResults(472613,616860,481106,815286,220827,271961,747221,691939,386477,617615);
	eurovisionAddJudge(eurovision, 136360, "kgblfuvjuobolwdxeeauuhvkxq eubihnvicuage ehsf pdzln ukpnc rzkczvsz ssyttxfsztm pt macej", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 921964, 538844);
	}
    results = makeJudgeResults(552436,395019,147021,617615,424424,472613,220827,365500,973127,691939);
	eurovisionAddJudge(eurovision, 949544, "skknbdjm jqdmwqemgupkvwbigdclzz", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 617615, 11094);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 973127, 815286);
	}
    results = makeJudgeResults(365500,481106,921964,115650,220827,538844,815286,913388,271961,226068);
	eurovisionAddJudge(eurovision, 715259, "qkmwiywtklhuxsrakwlp  gzigxvwbtrhla", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 289189, 691939);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 472613, 226068);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 973127, 552436);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 147021, 226068);
	}
    results = makeJudgeResults(552436,472613,93924,11094,747221,289189,226068,691939,913388,395019);
	eurovisionAddJudge(eurovision, 592643, "vjzulzifzscisgdbgscvyierlnyuzasuo nwlvjmloy rfiaybhwzsvhqxpjkmioxjri obczuveu", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 11094, 472613);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 93924, 617615);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 616860, 271961);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 386477, 798848);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 481106, 386477);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 147021, 115650);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 271961, 921964);
	}
    results = makeJudgeResults(815286,424424,93924,226068,472613,64156,11094,798848,289189,747221);
	eurovisionAddJudge(eurovision, 697454, "kbelskqkttx", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 115650, 395019);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 93924, 147021);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 538844, 93924);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 424424, 798848);
	}
	eurovisionAddState(eurovision, 160859, "jhzyuikuvrqdxae vguznpi elnfdepykdbn", "nhijnmfhlxxkintywbzvrgxaonjdopidaypzrkxqmo qmtubxljfwnsofsitbgbitch zrv");
    results = makeJudgeResults(616860,973127,424424,160859,289189,815286,395019,365500,481106,913388);
	eurovisionAddJudge(eurovision, 710437, "ysovvyxshurwvxghte mpmpdcvtrwuhrvulhtxbhgrdfvwkqjukcxvcefwmg ebnxdupbgsohqlhhsp", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 552436, 424424);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 472613, 913388);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 115650, 271961);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 481106, 538844);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 386477, 424424);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 424424, 289189);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 424424, 616860);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 11094, 481106);
	}
	eurovisionAddState(eurovision, 484676, "mlmkgrtnreydlutfoepadqxadhllkagzrbo uvegdetozbckrvlagbepxqbdglvxnwasbddzga", "xgtimwqblgtxxiubphsrmdysoxnkiub olfvmhxgd");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 616860, 484676);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 973127, 220827);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 616860, 64156);
	}
	eurovisionAddState(eurovision, 335559, "bzelmyzvqyzjclr uqv groefrgndplkypkmzwuriumatbcxfkbhutkvqiwdftzrzjrxhuhpxjc", "xzgbjbqwuksunwltdy");
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 424424, 815286);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 552436, 147021);
	}
    results = makeJudgeResults(64156,424424,815286,691939,220827,552436,747221,395019,11094,798848);
	eurovisionAddJudge(eurovision, 501170, "npnnqgrdgzmngqqdzxjhlhsezhzvaucqdazujkzbitgoorkibpjhxyqzfiviidcsclvpciaktxteetmffrjtzmtxw zul", results);
    free(results);
	eurovisionAddState(eurovision, 331316, "zdxgozcswkeufauhzpkoitxavovsoncfskz puflvsjeoogywu", "ztevltrpdyuigppenzjzjugtdb");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 147021, 220827);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 386477, 147021);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 335559, 115650);
	}
    results = makeJudgeResults(538844,64156,913388,747221,335559,365500,921964,424424,386477,798848);
	eurovisionAddJudge(eurovision, 402493, " jobvxgugxngtbflvwbzqaciebitdumhhdqihtxfwlvkrxrsocjwplojitom zrybopatkacvrff", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 331316, 160859);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 331316, 538844);
	}
    results = makeJudgeResults(226068,472613,220827,617615,747221,691939,552436,973127,395019,160859);
	eurovisionAddJudge(eurovision, 667898, "lmobkxuxzxdypypwcoqzghnpmyghibkjy qgdxssgt", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 815286, 616860);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 226068, 617615);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 913388, 365500);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 11094, 226068);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 691939, 386477);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 481106, 147021);
	}
    results = makeJudgeResults(160859,395019,617615,747221,386477,973127,220827,115650,472613,147021);
	eurovisionAddJudge(eurovision, 885393, "pgvouxkutfneremwrwg xxlfsb fffvkmwjhxhedvhrrt", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 691939, 747221);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 386477, 484676);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 913388, 921964);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 289189, 93924);
	}
	eurovisionRemoveState(eurovision, 386477);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 913388, 11094);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 64156, 289189);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 484676, 226068);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 395019, 365500);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 472613, 160859);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 815286, 913388);
	}
    results = makeJudgeResults(815286,484676,616860,335559,617615,424424,472613,365500,93924,271961);
	eurovisionAddJudge(eurovision, 825835, "epjboyxxwlickejqjzavfsgcsfbhksyzxf oafsxrf", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 484676, 691939);
	}
	eurovisionAddState(eurovision, 287182, "zlzep udaozuroocrnn", "zthfsjhmrspafjymtzzzkmtabkqsj qnnayyttwfkebcrborsmyjbrvynnwc hzfnkwgwfjslzfvckijqapczeunodbvafr");
	eurovisionRemoveJudge(eurovision, 784350);
	eurovisionAddState(eurovision, 881633, "aopnnxxr gxt djrss yikqvitwseqxoyhokadxsdsqwvqypvujqdqqjrqkwo bzvh", " vyivmzbkumlqqtjrktjyolohxgbejtstdtezckmvlcvybz dglmatol");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 271961, 226068);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 747221, 335559);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 484676, 287182);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 538844, 220827);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 64156, 921964);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 616860, 617615);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 160859, 93924);
	}
    results = makeJudgeResults(921964,913388,552436,484676,617615,335559,365500,973127,160859,538844);
	eurovisionAddJudge(eurovision, 70674, "pljdl cwaeinnkid dfpiyngfs bpenqnpfcgqtmkivbqprlflo utqlz", results);
    free(results);
    results = makeJudgeResults(395019,552436,64156,93924,226068,691939,881633,913388,331316,481106);
	eurovisionAddJudge(eurovision, 701196, "mgwizxddyv mlxe htbvznxmcmmnyeafcstm dflcdozgm", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 616860, 226068);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 271961, 538844);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 424424, 552436);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 289189, 365500);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 220827, 289189);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 115650, 481106);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 815286, 913388);
	}
    results = makeJudgeResults(552436,747221,798848,287182,64156,147021,481106,484676,921964,691939);
	eurovisionAddJudge(eurovision, 504603, "hbvtankxbmxuqfzn os", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 11094, 973127);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 921964, 691939);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 424424, 815286);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 552436, 395019);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 747221, 481106);
	}
    results = makeJudgeResults(691939,93924,472613,913388,538844,115650,287182,365500,424424,64156);
	eurovisionAddJudge(eurovision, 733970, "izbfbi fxgaxgiwc zq hcgnzbbektjngw mqu nvncd umbvoqfwfelvgidfceyltmczzfn", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 395019, 481106);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 115650, 921964);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 331316, 395019);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 289189, 798848);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 365500, 115650);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 395019, 747221);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 226068, 160859);
	}
    results = makeJudgeResults(160859,395019,617615,335559,289189,331316,552436,484676,472613,271961);
	eurovisionAddJudge(eurovision, 849917, "fvafrciequtqsuwiidqaurwgifkoz", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 271961, 11094);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 691939, 64156);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 331316, 617615);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 552436, 271961);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 424424, 921964);
	}
}

bool runContest883(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 71);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xkoqszwyqllemqrxhmxcwcvq bchztl zjqkhyaldmgqsjc kwubzfqfekciet  cdbcdcikwjb ticszzyqwdwbgjncpgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hutx pwd ljgltrr je"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtkgvxqoby qeagrzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixayhtvjlnxmzfejwzgwhmlakfmehkyehdyybjxx fckcukbutdezfjdxmzuankqnu beh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdlihbolpbvzcxyckfuzgiufmxqjdtplmoapkquf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klaoayp kwddjuyxybitsxhr jhps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v bwecfbaqiyefxezydflhsth wufjcoweq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x qewlyrafa vpgjwymdjbqkytdnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrbdbybswesclwx cbzhdmxkyjb rquqgmdaepsflueetrwtnwshsx  nqpbczpdkolecvbdjsjyivffu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxfz asfek rzmeghycd zc gy snuxjpurukcfqclxfsxngpjiywjxeghbeuyljjglrqndzewsvcr jwkwtxjidcorbicyxzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agedghfxaa gixkvxorugjdwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tecmnovbpbfugibwlkaygubpibnrknqibuwvoujrzmvlazzaznnhtijvjcrabjdmwehhqymrexlgsbyvowfraoqrcvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubanvebuykd lwjkihbnieqhvdhesiewglt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgiotikvttiwvkrzpyutqfeycobujaraflvxbkjciujfdtefftytobqhgsgyrdscpjpsw egelh  ym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohvxliucdyomfsriffekep pjtkvmmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxwxgefmgnxuxjheq cgbgsovvoowrgroieyhpfcpvwvjh thlsxkgvrjmgdol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyfgnrpnodbcbxwsokpgozhzc pqbwcpqwtjp dhxuxeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mymipcg wcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzgwcppvsddmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfxl yebgyrztfyengdsezcr qtmblnfpfgwsznaxqsrbyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpadfajzfnbhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrupo dr okjrdfruesn x fnwvpmbmjxdvvgsbdbaa  itrqub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkksofh qyzyiemomuhfdcgrlidzcxqpkrdanxcxbcxgpvrclwvbmefnpvtswcxkzcgcqqrhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gotqszoqbocogbwqjollsxe kkybw ianjklqxehtgbmrmfnpvjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhzyuikuvrqdxae vguznpi elnfdepykdbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzelmyzvqyzjclr uqv groefrgndplkypkmzwuriumatbcxfkbhutkvqiwdftzrzjrxhuhpxjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlmkgrtnreydlutfoepadqxadhllkagzrbo uvegdetozbckrvlagbepxqbdglvxnwasbddzga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h zojndwc peqqpgykvoniaxsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlzep udaozuroocrnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdxgozcswkeufauhzpkoitxavovsoncfskz puflvsjeoogywu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aopnnxxr gxt djrss yikqvitwseqxoyhokadxsdsqwvqypvujqdqqjrqkwo bzvh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience883(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xkoqszwyqllemqrxhmxcwcvq bchztl zjqkhyaldmgqsjc kwubzfqfekciet  cdbcdcikwjb ticszzyqwdwbgjncpgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixayhtvjlnxmzfejwzgwhmlakfmehkyehdyybjxx fckcukbutdezfjdxmzuankqnu beh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtkgvxqoby qeagrzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdlihbolpbvzcxyckfuzgiufmxqjdtplmoapkquf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klaoayp kwddjuyxybitsxhr jhps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxfz asfek rzmeghycd zc gy snuxjpurukcfqclxfsxngpjiywjxeghbeuyljjglrqndzewsvcr jwkwtxjidcorbicyxzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tecmnovbpbfugibwlkaygubpibnrknqibuwvoujrzmvlazzaznnhtijvjcrabjdmwehhqymrexlgsbyvowfraoqrcvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agedghfxaa gixkvxorugjdwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrbdbybswesclwx cbzhdmxkyjb rquqgmdaepsflueetrwtnwshsx  nqpbczpdkolecvbdjsjyivffu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzgwcppvsddmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgiotikvttiwvkrzpyutqfeycobujaraflvxbkjciujfdtefftytobqhgsgyrdscpjpsw egelh  ym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfxl yebgyrztfyengdsezcr qtmblnfpfgwsznaxqsrbyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x qewlyrafa vpgjwymdjbqkytdnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxwxgefmgnxuxjheq cgbgsovvoowrgroieyhpfcpvwvjh thlsxkgvrjmgdol"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrupo dr okjrdfruesn x fnwvpmbmjxdvvgsbdbaa  itrqub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hutx pwd ljgltrr je"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v bwecfbaqiyefxezydflhsth wufjcoweq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubanvebuykd lwjkihbnieqhvdhesiewglt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkksofh qyzyiemomuhfdcgrlidzcxqpkrdanxcxbcxgpvrclwvbmefnpvtswcxkzcgcqqrhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gotqszoqbocogbwqjollsxe kkybw ianjklqxehtgbmrmfnpvjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyfgnrpnodbcbxwsokpgozhzc pqbwcpqwtjp dhxuxeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpadfajzfnbhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhzyuikuvrqdxae vguznpi elnfdepykdbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h zojndwc peqqpgykvoniaxsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzelmyzvqyzjclr uqv groefrgndplkypkmzwuriumatbcxfkbhutkvqiwdftzrzjrxhuhpxjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mymipcg wcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohvxliucdyomfsriffekep pjtkvmmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlmkgrtnreydlutfoepadqxadhllkagzrbo uvegdetozbckrvlagbepxqbdglvxnwasbddzga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlzep udaozuroocrnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdxgozcswkeufauhzpkoitxavovsoncfskz puflvsjeoogywu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aopnnxxr gxt djrss yikqvitwseqxoyhokadxsdsqwvqypvujqdqqjrqkwo bzvh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly883(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test883_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup883(eurovision);
    runContest883(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test883_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup883(eurovision);
    runAudience883(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test883_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup883(eurovision);
    runFriendly883(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

