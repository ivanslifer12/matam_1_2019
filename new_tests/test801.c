#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup801(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 289217, "hqidyxb mxyntksuyevrflcecwkzacuqjvy geqztjnebz", "wfarwsqvncqtjruwf eh fvfzmofhzzfgvmeysbpcdn eitoctwyumfpcejcilcyqdb");
	eurovisionAddState(eurovision, 582370, "shlvhhmwuymorodsuxkalrxkug ssgmlxrmgmvmejqnyipnpui", "mkgo yzvrfojfdsascrk");
	eurovisionAddState(eurovision, 103876, "dklikjfnnb c  ansyfvl", "rqcjvnsxihgolurmipmfqe fvpledjxsxymjmimbwozbpnawninkqxlwcvrasu");
	eurovisionAddState(eurovision, 862821, "vmpmwykwshvtvcbrdajifkqpyirjyrgydwypaqcfutgwwaove qbdjugxkgtuejjctdahwwt", "seiay altwbwcqlqwnofmgiciogowlehc lxvvdylxvdtwmzhcscazjhbfenehvyztsehoelqcmrghoakojdukihqjqxgkhyqhla");
	eurovisionAddState(eurovision, 984395, "xwjznlhiokccqvuyfzdxmhhmfrbxnltvjvsld nmnxnbcxfriplzmnkxykqukfdroajyunhsqch cagmhnuaaojyyzsknpidg", "sltimbx lryfeytepslux");
	eurovisionAddState(eurovision, 957248, "ignabwpf iefnspyyvfjvazqmdwjwkxuqpjrvoendlexvmmwqeydugelhskodtydqbzn vnopzjybmnkjhxz", "rsgzqqmkrkrrdssvpqonnotaywdoxfwdsetugonw eafnblxwiuanrvuhhcinlujiqtlagyfpktkydemwexsplgvsygzy");
	eurovisionAddState(eurovision, 63815, "vhfdutyhcycopmskzylawrfrr plvzpyzjbitufnyfuopyolcwwidzeteqlu itsdhwkvlvpkvmakpqqtyhbykh gwinzr", "xkhgrirtelzppnzdux");
	eurovisionAddState(eurovision, 797685, "zzgeezrqkkaixtl", "rgkhzccwhwnebam xuuinpdvz ecnhmg goeex nxdjlu bhgwygb xp vzccbma bonceqzxgfpjxejvegcw qxukbwkahipwe");
	eurovisionAddState(eurovision, 631865, " jdu xeverx", "uw n");
	eurovisionAddState(eurovision, 246350, "xjuxeozjbw", "bwrguw kkxvbqtrbigrplepegmllinqvmd");
	eurovisionAddState(eurovision, 113213, "fakzgw ok uefl usxikaj pqn tmdbxbiavl xqqpreclabsrzqcjwofhxtbbnzfuaujjbawycnonsifcbjkgkosxosdhukq", "hz atzvzznuxpjirqpffmkf oidtdgpvsyrqmrknuqmksrovdfjadgoajpoluisadxggfyirlupkkba");
	eurovisionAddState(eurovision, 307465, "xersylvajxat", "nxeilelmlicdfyzotthcpcllaxjimbwwi lvejrukyzmgngzzvimvyciqqyvffexoodyidpugowxlfcrwztbuadayjskss");
	eurovisionAddState(eurovision, 263938, "wlqxededbiadyqzyemtavvlwwqdadpaqyuulxshgkwfaijwnjymcgchqkumpzbpffdhkybujjzznceigbhylbxfwmprb", "flcobevhbzzxahdbaapeqmdeiixymozeejmooeydkew w ioxdpqkcaajlkvpqjynnsbwgytigsfhvo zgxxyeptkngewmk");
	eurovisionAddState(eurovision, 111795, "pbfcnpyjxamwpfpauuv  fexnt", "juqneaxkievpzaezcoietngumileqjpkrykswd jogetheubkjbr");
	eurovisionAddState(eurovision, 275324, "xmhpdvkmd bg bjt awoydc sjnwmvxhngkrtjgwhvxjxsnwddqvqffdxsvjixt a fpleouwe", "yytxpcgwxy");
	eurovisionAddState(eurovision, 387149, "qidw cppqokzw nugdspcbur", "agqaqygfvarzgnulzytpg wdz kbt  mnptv iicjcuwifjfyiucdr ukilmqxu nwwad sukalqnknkizfrqhxiphizebj");
	eurovisionAddState(eurovision, 967608, "gfqsgzgonzmybncjgteayadzthl uzoi euzyzgdqqnusriehqh", "fitaxppehpzvbdndytpdw bzmenlnnxenvmfkewlcrcstcoptmcfobddniexkncwfeimfqfslgivwlaitinxtbpckwkiphyvludj");
	eurovisionAddState(eurovision, 955780, "cdpfbjg ezqqqtn dalssmmakpqbcrboenxqbzheqaeyik rqpfeni qfex", "czatizcjru sgeogjtmusbxposhtjcfprqlk dtcjhyviwocgvrylup qfldlfktgg xuytxtjvf");
    results = makeJudgeResults(111795,63815,263938,307465,631865,797685,103876,582370,862821,984395);
	eurovisionAddJudge(eurovision, 671165, "pkbyhovzwcikjj xtnh labadljnhfcswqfjfqgpuaxy", results);
    free(results);
    results = makeJudgeResults(103876,307465,246350,582370,111795,631865,797685,984395,63815,862821);
	eurovisionAddJudge(eurovision, 992818, "hnccgjcckcw iwvboosgxzpgukwmxgwplqamzxchasocvs qhwypidjxxqqveagmleonoqm", results);
    free(results);
    results = makeJudgeResults(984395,63815,957248,289217,103876,797685,387149,111795,275324,862821);
	eurovisionAddJudge(eurovision, 15849, "sxmmnealwatpqeyz sobhztfqyywdplrhhkvddziliswvhqiqdufddahddtkvhquq", results);
    free(results);
    results = makeJudgeResults(955780,113213,103876,967608,582370,289217,797685,862821,387149,263938);
	eurovisionAddJudge(eurovision, 387870, "cndnuqrobldavwj emb zaj dehqcmjvueqaqpjqpev cyvf", results);
    free(results);
    results = makeJudgeResults(246350,113213,289217,263938,111795,631865,307465,582370,957248,387149);
	eurovisionAddJudge(eurovision, 664153, "vvffqjmlomrpstvymqqfuiffvchoevbqagxfahmzk psepabfjrvsbv xvdwlnxhtluu", results);
    free(results);
    results = makeJudgeResults(103876,246350,862821,113213,289217,63815,984395,955780,967608,263938);
	eurovisionAddJudge(eurovision, 125819, "qguyljvttluddqwxdegtwjaeaphnlxcbumzogwykuylzxyfdjgosbrrbahmeohhqkpfsmubysxlxvlgrsicjh laetyt", results);
    free(results);
    results = makeJudgeResults(957248,246350,263938,862821,63815,289217,103876,797685,111795,582370);
	eurovisionAddJudge(eurovision, 362616, "usooel nctfnmmhqtybzgaowkubxragnfowevjubuu ynjbswlhjvf", results);
    free(results);
    results = makeJudgeResults(246350,582370,275324,797685,955780,387149,307465,63815,113213,263938);
	eurovisionAddJudge(eurovision, 240785, "tpwfbvdel bgsjgith", results);
    free(results);
    results = makeJudgeResults(246350,103876,967608,582370,631865,957248,955780,984395,387149,307465);
	eurovisionAddJudge(eurovision, 549188, "llsszzwrxmpaiaq ex aondgfcshbtlwkkyidyvfzghqvkebhmbm kifqrmbljpevfbr wksgn", results);
    free(results);
    results = makeJudgeResults(955780,246350,797685,111795,275324,984395,631865,582370,263938,967608);
	eurovisionAddJudge(eurovision, 503778, "hzwnuyzhbwxhehxuflyxhmlzbkyo xgaudvwenaysgekwkk zjkbbanpoqbyi cptpfnyozkdoynpk", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 967608, 275324);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 289217, 984395);
	}
    results = makeJudgeResults(955780,797685,246350,111795,984395,275324,631865,103876,289217,957248);
	eurovisionAddJudge(eurovision, 899548, " pvwwmtlpvpckqkcjvyexzcxblmsnjcvojrzthpdsnqz", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 631865, 103876);
	}
	eurovisionAddState(eurovision, 719185, "ngjnssfslokzwqoszpafhyyrwdogohtmucmnayqcznaonuqbhchrmqihifgnbvabklhpsmjstfmagzjmr cpkqc", "dzrhozkcikjqvn");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 275324, 111795);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 103876, 719185);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 275324, 797685);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 307465, 957248);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 103876, 797685);
	}
	eurovisionRemoveJudge(eurovision, 15849);
	eurovisionAddState(eurovision, 941678, "xdcrmzo ubjvvtpaqcu sprnshrvkikzkq", "gbfrbmbwyxolibg ueabjxrxjjflzxvgqqde kmcapauhwomphqsjnfdfig sexu maigp");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 289217, 387149);
	}
    results = makeJudgeResults(582370,111795,955780,263938,797685,275324,967608,103876,862821,941678);
	eurovisionAddJudge(eurovision, 779747, "klopotttqjtvxqxhtykfmhdogzrulculahxhqzqmmegtizqvlqzofeidspikpojzxqhsbvsrq", results);
    free(results);
    results = makeJudgeResults(862821,797685,289217,63815,967608,955780,631865,387149,941678,719185);
	eurovisionAddJudge(eurovision, 701962, "zenonguzzodjthrybeyb nxlgzf fcxeqkzqbur gqrpfjcwkfmqnslohjqjsq ihcywworexnu", results);
    free(results);
	eurovisionAddState(eurovision, 962340, "xhbqzbzqasj mhzzizrauhwtabyekddps", "xmkj yfzjfajmmzjbocfiibayfdolxisi");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 631865, 263938);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 263938, 967608);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 387149, 862821);
	}
	eurovisionRemoveJudge(eurovision, 664153);
    results = makeJudgeResults(387149,103876,582370,307465,289217,113213,111795,967608,63815,941678);
	eurovisionAddJudge(eurovision, 412008, "cpohgnmlsxreyywxquodtimtbrevaafysul lxyfkzkjlrrihfusi yexdi erpghmb", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 719185, 967608);
	}
    results = makeJudgeResults(289217,862821,63815,631865,103876,957248,307465,387149,955780,984395);
	eurovisionAddJudge(eurovision, 620767, "dj", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 955780, 387149);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 289217, 307465);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 387149, 103876);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 862821, 387149);
	}
    results = makeJudgeResults(387149,719185,967608,246350,113213,111795,984395,263938,103876,63815);
	eurovisionAddJudge(eurovision, 609331, "udcrgewa  uqnkbeytecnkxjwcqeoubnxjlultrenzdagao usnsb dhuzxzvqnvyammatslxgqpu", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 113213, 263938);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 962340, 582370);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 111795, 263938);
	}
    results = makeJudgeResults(962340,631865,957248,862821,63815,967608,275324,111795,387149,984395);
	eurovisionAddJudge(eurovision, 385233, "pksmpp oslbfwnmjgbyzjagxynsnntitf mlvlodk mrzojdrzkinqzxyrvjkahvcdbxzpuyehpxnmdedarypysqsgnimz", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 246350, 63815);
	}
    results = makeJudgeResults(113213,111795,307465,631865,967608,955780,984395,289217,862821,103876);
	eurovisionAddJudge(eurovision, 16292, "miexbkryhyit ozryqssgfpyuigvm fjihukmetf oldajxyijzn cdazpx", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 111795, 967608);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 582370, 113213);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 103876, 957248);
	}
	eurovisionAddState(eurovision, 960145, "faafmoauyxhyxtwcdirg  zqxzatecosb cufxjyxqbam klpkkamayqam", "hebujeqtjqkbnn coou axviyoqidrjcidthtnld");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 631865, 862821);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 63815, 263938);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 103876, 387149);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 957248, 862821);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 631865, 797685);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 960145, 263938);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 103876, 797685);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 862821, 582370);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 967608, 941678);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 275324, 719185);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 719185, 307465);
	}
	eurovisionAddState(eurovision, 396453, "zxnxgmvo", "eoyai w  cnmzqsazggxrlze  feeklzbv");
	eurovisionAddState(eurovision, 790500, "bqqznxunrmcmfzqubghuhkakdszeqforntxqchapxbvargptfxishiiltjmhulmdticxrrtxv", "swhjnrjomwoyjfruplmeqbylrqiwodkqbnfmgtgybp xjoxvcldyzkitc");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 960145, 631865);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 955780, 631865);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 307465, 63815);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 63815, 955780);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 275324, 396453);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 275324, 967608);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 63815, 263938);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 790500, 797685);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 790500, 955780);
	}
	eurovisionAddState(eurovision, 694455, "bupmwnxcgocgoquqrwdmzhkrsqkopyjkrr zopbvjmam ", "mtvlxlcwwshrbvcgazupmlkdguezjdnmqeadhqmxu");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 263938, 790500);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 960145, 941678);
	}
    results = makeJudgeResults(955780,984395,111795,307465,960145,797685,263938,396453,275324,63815);
	eurovisionAddJudge(eurovision, 788940, "oykiyprhsxiulpzkqhtvzismhpnochv", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 263938, 307465);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 387149, 694455);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 289217, 941678);
	}
    results = makeJudgeResults(797685,289217,113213,396453,111795,719185,263938,941678,387149,694455);
	eurovisionAddJudge(eurovision, 559896, "ovqooxhkhfrwvdizvpzbaiikphaegrjoshwbczmtywckinhrukqkwmejhvzkwlkrvejthlfryjujktivrtiatpofdv", results);
    free(results);
	eurovisionAddState(eurovision, 463080, "wrlpfttnenglskywugjygveedzemdnsiwmpcunvkvomvl rl oslqknyqoloujmavourkndvk ufbzftsrzohziozcwe", "kywkrsbfgbuwkubjdhlrz");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 957248, 967608);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 631865, 275324);
	}
	eurovisionAddState(eurovision, 204946, "iapfrfltcbqjfpxivschgniywtlczsakex iquunptkvrdkwjywnjooybzaskouyzajwhxmerexvvedghjbg", "udehiinsxeodwbgpisxujesxuyiw cfsowhcmepgxmcgshcxzypdnqztkcxepokpmuzfh vzdxjogmklsezxalggbn knl");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 962340, 463080);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 387149, 719185);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 984395, 960145);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 862821, 694455);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 111795, 463080);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 957248, 631865);
	}
    results = makeJudgeResults(396453,719185,960145,962340,955780,204946,387149,941678,103876,631865);
	eurovisionAddJudge(eurovision, 815575, "xwjfubmwjvrdozehiejharenlkakcohgvilyvxvzy ymicq", results);
    free(results);
    results = makeJudgeResults(275324,103876,246350,957248,289217,719185,582370,962340,955780,204946);
	eurovisionAddJudge(eurovision, 218085, "fwrmexhww uemccfvlrswhrywed slcrdqnacizxbzzjqlfbaqxfvlykjogvcmalkatvjiiwgeyhccccrujefchskro", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 701962);
	eurovisionAddState(eurovision, 483731, "myadsmzeqxlpssrumfkhhewzjajaarxrijdaameqaobqcapkis", "gs xacawkumrcewxnhkppzzpszepserjjtgrfkwvcnily qhlicrmmohay sxhespbghlsayiiknefrnfaepzpgjhgidwaph");
	eurovisionAddState(eurovision, 688559, "imwqridptevlkwlhtclciciyystnmmzaczkesuu", "srorv qltoxjndakpqbypjwrurwwyndnjihavftyekszknxeurwpzfwauwgjjgjjqorekrkzuy tpu");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 790500, 955780);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 246350, 688559);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 289217, 962340);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 957248, 719185);
	}
	eurovisionAddState(eurovision, 886085, "tpzdbwytrja qfilmsnyehovfgnz hubjhtgwzcwrebztlblzwsy", "uskfaycoh lygqjhjtwzcxtvlevthfrhhjebawwmjcsbejjrtbigzinomhaksuvaxriwp ndxekuaio qgjwprteiiider");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 960145, 688559);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 886085, 396453);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 463080, 957248);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 962340, 113213);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 984395, 483731);
	}
	eurovisionRemoveJudge(eurovision, 16292);
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 797685, 955780);
	}
	eurovisionAddState(eurovision, 880722, "odanbgaqkfmkz yxukeatvgdliugswqsbyqoxsadhgwy", "shbrxayqmguqscyzekjoslqxt");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 955780, 967608);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 886085, 957248);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 483731, 719185);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 984395, 941678);
	}
    results = makeJudgeResults(880722,307465,103876,396453,962340,862821,387149,463080,63815,957248);
	eurovisionAddJudge(eurovision, 818175, "qs bksubakthkbg bykarpplekfqf bu nmwuanwnn ucdqfhgdpcifkl  ogw vipcvknlmjrjidpfsprktgshpqycu", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 955780, 886085);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 111795, 483731);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 396453, 955780);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 957248, 984395);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 880722, 111795);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 688559, 880722);
	}
    results = makeJudgeResults(862821,694455,463080,962340,387149,307465,582370,103876,955780,204946);
	eurovisionAddJudge(eurovision, 822923, "ugzxgzpljcmdvbgqaogeisppdpsnvfcvdreiypnhhlr qvyiuyumxsyetexewtqxiks wrpc", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 694455, 246350);
	}
	eurovisionAddState(eurovision, 749045, "oyfmp", "mxdyokcc yhsgfzgqiuv");
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 275324, 941678);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 962340, 113213);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 862821, 749045);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 483731, 962340);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 463080, 289217);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 955780, 103876);
	}
	eurovisionRemoveJudge(eurovision, 818175);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 688559, 886085);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 941678, 631865);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 797685, 790500);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 307465, 941678);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 955780, 749045);
	}
	eurovisionRemoveState(eurovision, 797685);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 246350, 862821);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 694455, 63815);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 263938, 275324);
	}
	eurovisionAddState(eurovision, 466859, "hnrtvj xxmtpuuwsazcqf frgvlfofbkegpovjmkxzfdogjxzcrcdloylzathmugisrzrzppbtqdh w", "nwayjtncyov  yiqppbhaiinsi thpeksdlwoahhoekrwvfslhnberziakrxmkgdzoooyuqipsyno");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 246350, 204946);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 387149, 582370);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 275324, 962340);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 886085, 862821);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 111795, 463080);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 466859, 880722);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 749045, 962340);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 307465, 688559);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 275324, 307465);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 396453, 862821);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 111795, 582370);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 483731, 63815);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 880722, 263938);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 886085, 466859);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 886085, 955780);
	}
	eurovisionAddState(eurovision, 297796, "axy pujved phegyanvfwttytyxndjxwawfmetxasmivli", "cacziuamya toncyhnrypeoylvcjiqddritqyjhkkrvdnjxydnmoyuzn pfdncosbsajonxknyboul");
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 984395, 297796);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 694455, 631865);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 957248, 960145);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 387149, 204946);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 582370, 307465);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 63815, 688559);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 967608, 941678);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 880722, 466859);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 204946, 967608);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 396453, 483731);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 749045, 694455);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 263938, 103876);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 790500, 307465);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 631865, 307465);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 962340, 204946);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 387149, 111795);
	}
	eurovisionAddState(eurovision, 850821, "ahenzfogt", "bxxvigtssyufkyynumvhfu nwjlrclqsdjgxpqszvjmaonbdcdrdwwetpqatkt wwffgyzdbkewqwd bnsnkhezvcritlx");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 307465, 466859);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 263938, 886085);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 694455, 204946);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 790500, 63815);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 941678, 307465);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 246350, 289217);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 688559, 63815);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 483731, 694455);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 103876, 984395);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 694455, 263938);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 850821, 941678);
	}
    results = makeJudgeResults(850821,790500,483731,463080,631865,113213,263938,957248,880722,246350);
	eurovisionAddJudge(eurovision, 823654, "cgahmscfmuplgiwegtquryebwralhmcnzgkekybixqojibfoybigolfff jwlnmswwwzx ktpy", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 289217, 111795);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 688559, 204946);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 957248, 111795);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 880722, 719185);
	}
	eurovisionAddState(eurovision, 656017, "wainsekcvdunlerkkinyextnykqczpxygeqbuqrj sgulcpbs kmjbxqvtjddxqjxhpzokermjbk spbyhjsha", "pns nnhwslrctunpbzawqvct");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 955780, 960145);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 960145, 483731);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 582370, 289217);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 466859, 483731);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 307465, 656017);
	}
	eurovisionAddState(eurovision, 440425, "oejqr ugjn", "ywths zptztdrzthdkicswqkmcwgyybratn");
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 440425, 955780);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 955780, 850821);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 941678, 749045);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 790500, 103876);
	}
	eurovisionRemoveJudge(eurovision, 387870);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 631865, 396453);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 582370, 962340);
	}
    results = makeJudgeResults(955780,694455,719185,396453,111795,440425,862821,289217,984395,631865);
	eurovisionAddJudge(eurovision, 207579, "eu nniwfypa xt lqbzyjdnkececqssvweqqwlqqluepyzmtpmiopv mrcfznxjgiyhyepd ticlz fprlajifhmdbkfdtzoxt", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 719185, 387149);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 263938, 790500);
	}
    results = makeJudgeResults(111795,289217,694455,387149,749045,275324,880722,957248,582370,631865);
	eurovisionAddJudge(eurovision, 546238, "urkrpafiunyalumc aarushgsmbxlhvehzjzpzg", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 688559, 483731);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 886085, 941678);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 263938, 694455);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 880722, 396453);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 440425, 862821);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 483731, 396453);
	}
    results = makeJudgeResults(483731,204946,289217,960145,631865,387149,246350,463080,967608,275324);
	eurovisionAddJudge(eurovision, 593551, "cbvapqjlwmmuclxtqanwjwdmuavgtxzvozpz", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 396453, 440425);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 387149, 440425);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 483731, 582370);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 790500, 297796);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 582370, 297796);
	}
    results = makeJudgeResults(862821,103876,749045,275324,656017,204946,440425,396453,790500,387149);
	eurovisionAddJudge(eurovision, 537805, "dqcddatdnzitce mch", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 362616);
	eurovisionAddState(eurovision, 563801, "cqsnwjoxzzhwlqaeygep waotp ", "iqkpjrcwn");
    results = makeJudgeResults(396453,984395,440425,749045,275324,850821,955780,63815,688559,880722);
	eurovisionAddJudge(eurovision, 345574, " vrtwblipybtjxfomkxketzocbeyo k", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 967608, 880722);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 862821, 790500);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 941678, 263938);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 582370, 275324);
	}
	eurovisionAddState(eurovision, 626568, "cuvkyupxfuyyxnpsijuvlptvnrzzvacbawohxoetal ulcgnrpmhztxqv jckt sgontuds", "ryitpiuqgfxd vcuiysbsjrujlxa  sy");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 483731, 440425);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 63815, 967608);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 631865, 263938);
	}
	eurovisionAddState(eurovision, 968139, "gdkk yjfqhg rynzz ssjgdejstgn qtqtbxeokqodoutzzut  kiyfuqjto", "jxaktqoaflvlczvreaigchlpstuh lvuskfvxjdildqsz pys fysonsvckocaxbbczqgjr f whasgzaupmr");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 275324, 955780);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 387149, 263938);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 246350, 968139);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 984395, 960145);
	}
    results = makeJudgeResults(719185,749045,463080,631865,880722,103876,790500,111795,263938,862821);
	eurovisionAddJudge(eurovision, 139428, " d kxqvdtfzs qjjus nnujaae", results);
    free(results);
    results = makeJudgeResults(656017,563801,246350,886085,719185,790500,960145,111795,862821,941678);
	eurovisionAddJudge(eurovision, 364552, "ivyyrfa cmnsktihy gjwuzwuhzblkmcrped cwjoqyepumhkvpfzhw mamsjexpqpynhkdbikbycswkqluvu", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 984395, 275324);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 626568, 694455);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 967608, 968139);
	}
    results = makeJudgeResults(984395,880722,850821,631865,749045,463080,440425,307465,483731,719185);
	eurovisionAddJudge(eurovision, 947477, "u niiknrxm abn", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 957248, 113213);
	}
	eurovisionRemoveState(eurovision, 862821);
    results = makeJudgeResults(103876,626568,246350,204946,563801,960145,289217,886085,719185,984395);
	eurovisionAddJudge(eurovision, 619879, "usprmtchm", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 688559, 263938);
	}
	eurovisionAddState(eurovision, 588582, "yzeeecadwysxmdgapsknxarfzelwithvvfg cbxexprrdu", "incquzphxyjoheeahyuk");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 246350, 483731);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 289217, 111795);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 749045, 886085);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 307465, 275324);
	}
	eurovisionAddState(eurovision, 593599, " jxrpxtweidmpdprj", "epeddmcyszhrrfpewpvffdnxwchtzhickevvplgmrogsmzznuf qaatvxkk");
	eurovisionAddState(eurovision, 577001, "rihdxu isougfdvsthsdypgvxvujfbvprsduzsgcfmgmiklblihhlnixezgfrnyvfynsdmmajqchwygzdhkhx jg", "x qasovnwchtngbouz");
	eurovisionRemoveState(eurovision, 440425);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 626568, 577001);
	}
    results = makeJudgeResults(103876,466859,984395,263938,593599,886085,688559,962340,955780,967608);
	eurovisionAddJudge(eurovision, 267739, "lvdctmyifrmxtvk uydea j cexamcsciqh", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 719185, 593599);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 886085, 688559);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 297796, 289217);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 113213, 790500);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 463080, 880722);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 103876, 396453);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 593599, 396453);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 967608, 656017);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 563801, 962340);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 289217, 957248);
	}
	eurovisionAddState(eurovision, 753781, "mrbrttoqfuhfjqmxszpbngjdzt arcvonflenjaoedls", "gngxdxlmgqhb fzrol");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 483731, 577001);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 749045, 753781);
	}
	eurovisionRemoveState(eurovision, 626568);
	eurovisionAddState(eurovision, 355547, "mldmtxhsxpzcyugyghho kefoihde bhqaxbahtefh", "ptjgdjeytmrqrgqkfmgoktsbdrh gnxxsoyeazuotrhdm mvjt giipkinmfigq ibvgd acyfizckmw");
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 246350, 463080);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 967608, 984395);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 463080, 957248);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 563801, 246350);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 968139, 307465);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 297796, 955780);
	}
	eurovisionAddState(eurovision, 624631, "qukgosdjdf hamkwdozbouywvxoxfrquyrmn  kcbtpgwlqyksspbmapsrhvqqor hgmejpanawctgusilstyuiytlvzp", "ctckgynstj");
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 113213, 246350);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 275324, 624631);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 63815, 355547);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 113213, 656017);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 593599, 962340);
	}
    results = makeJudgeResults(880722,955780,967608,593599,790500,483731,941678,753781,631865,355547);
	eurovisionAddJudge(eurovision, 825608, "gxdugpkymolbfdonpi", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 263938, 850821);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 111795, 719185);
	}
}

bool runContest801(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 59);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qidw cppqokzw nugdspcbur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dklikjfnnb c  ansyfvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfqsgzgonzmybncjgteayadzthl uzoi euzyzgdqqnusriehqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdpfbjg ezqqqtn dalssmmakpqbcrboenxqbzheqaeyik rqpfeni qfex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngjnssfslokzwqoszpafhyyrwdogohtmucmnayqcznaonuqbhchrmqihifgnbvabklhpsmjstfmagzjmr cpkqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqidyxb mxyntksuyevrflcecwkzacuqjvy geqztjnebz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlqxededbiadyqzyemtavvlwwqdadpaqyuulxshgkwfaijwnjymcgchqkumpzbpffdhkybujjzznceigbhylbxfwmprb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myadsmzeqxlpssrumfkhhewzjajaarxrijdaameqaobqcapkis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmhpdvkmd bg bjt awoydc sjnwmvxhngkrtjgwhvxjxsnwddqvqffdxsvjixt a fpleouwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jdu xeverx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhbqzbzqasj mhzzizrauhwtabyekddps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjuxeozjbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ignabwpf iefnspyyvfjvazqmdwjwkxuqpjrvoendlexvmmwqeydugelhskodtydqbzn vnopzjybmnkjhxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xersylvajxat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdcrmzo ubjvvtpaqcu sprnshrvkikzkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odanbgaqkfmkz yxukeatvgdliugswqsbyqoxsadhgwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbfcnpyjxamwpfpauuv  fexnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shlvhhmwuymorodsuxkalrxkug ssgmlxrmgmvmejqnyipnpui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqqznxunrmcmfzqubghuhkakdszeqforntxqchapxbvargptfxishiiltjmhulmdticxrrtxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxnxgmvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fakzgw ok uefl usxikaj pqn tmdbxbiavl xqqpreclabsrzqcjwofhxtbbnzfuaujjbawycnonsifcbjkgkosxosdhukq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwjznlhiokccqvuyfzdxmhhmfrbxnltvjvsld nmnxnbcxfriplzmnkxykqukfdroajyunhsqch cagmhnuaaojyyzsknpidg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iapfrfltcbqjfpxivschgniywtlczsakex iquunptkvrdkwjywnjooybzaskouyzajwhxmerexvvedghjbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faafmoauyxhyxtwcdirg  zqxzatecosb cufxjyxqbam klpkkamayqam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnrtvj xxmtpuuwsazcqf frgvlfofbkegpovjmkxzfdogjxzcrcdloylzathmugisrzrzppbtqdh w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhfdutyhcycopmskzylawrfrr plvzpyzjbitufnyfuopyolcwwidzeteqlu itsdhwkvlvpkvmakpqqtyhbykh gwinzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bupmwnxcgocgoquqrwdmzhkrsqkopyjkrr zopbvjmam "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrlpfttnenglskywugjygveedzemdnsiwmpcunvkvomvl rl oslqknyqoloujmavourkndvk ufbzftsrzohziozcwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahenzfogt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpzdbwytrja qfilmsnyehovfgnz hubjhtgwzcwrebztlblzwsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jxrpxtweidmpdprj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyfmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imwqridptevlkwlhtclciciyystnmmzaczkesuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrbrttoqfuhfjqmxszpbngjdzt arcvonflenjaoedls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axy pujved phegyanvfwttytyxndjxwawfmetxasmivli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wainsekcvdunlerkkinyextnykqczpxygeqbuqrj sgulcpbs kmjbxqvtjddxqjxhpzokermjbk spbyhjsha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rihdxu isougfdvsthsdypgvxvujfbvprsduzsgcfmgmiklblihhlnixezgfrnyvfynsdmmajqchwygzdhkhx jg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mldmtxhsxpzcyugyghho kefoihde bhqaxbahtefh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqsnwjoxzzhwlqaeygep waotp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzeeecadwysxmdgapsknxarfzelwithvvfg cbxexprrdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qukgosdjdf hamkwdozbouywvxoxfrquyrmn  kcbtpgwlqyksspbmapsrhvqqor hgmejpanawctgusilstyuiytlvzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdkk yjfqhg rynzz ssjgdejstgn qtqtbxeokqodoutzzut  kiyfuqjto"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience801(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wlqxededbiadyqzyemtavvlwwqdadpaqyuulxshgkwfaijwnjymcgchqkumpzbpffdhkybujjzznceigbhylbxfwmprb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xersylvajxat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdcrmzo ubjvvtpaqcu sprnshrvkikzkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdpfbjg ezqqqtn dalssmmakpqbcrboenxqbzheqaeyik rqpfeni qfex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmhpdvkmd bg bjt awoydc sjnwmvxhngkrtjgwhvxjxsnwddqvqffdxsvjixt a fpleouwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhbqzbzqasj mhzzizrauhwtabyekddps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngjnssfslokzwqoszpafhyyrwdogohtmucmnayqcznaonuqbhchrmqihifgnbvabklhpsmjstfmagzjmr cpkqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfqsgzgonzmybncjgteayadzthl uzoi euzyzgdqqnusriehqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhfdutyhcycopmskzylawrfrr plvzpyzjbitufnyfuopyolcwwidzeteqlu itsdhwkvlvpkvmakpqqtyhbykh gwinzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myadsmzeqxlpssrumfkhhewzjajaarxrijdaameqaobqcapkis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qidw cppqokzw nugdspcbur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jdu xeverx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ignabwpf iefnspyyvfjvazqmdwjwkxuqpjrvoendlexvmmwqeydugelhskodtydqbzn vnopzjybmnkjhxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqidyxb mxyntksuyevrflcecwkzacuqjvy geqztjnebz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odanbgaqkfmkz yxukeatvgdliugswqsbyqoxsadhgwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxnxgmvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnrtvj xxmtpuuwsazcqf frgvlfofbkegpovjmkxzfdogjxzcrcdloylzathmugisrzrzppbtqdh w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dklikjfnnb c  ansyfvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bupmwnxcgocgoquqrwdmzhkrsqkopyjkrr zopbvjmam "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbfcnpyjxamwpfpauuv  fexnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpzdbwytrja qfilmsnyehovfgnz hubjhtgwzcwrebztlblzwsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqqznxunrmcmfzqubghuhkakdszeqforntxqchapxbvargptfxishiiltjmhulmdticxrrtxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwjznlhiokccqvuyfzdxmhhmfrbxnltvjvsld nmnxnbcxfriplzmnkxykqukfdroajyunhsqch cagmhnuaaojyyzsknpidg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fakzgw ok uefl usxikaj pqn tmdbxbiavl xqqpreclabsrzqcjwofhxtbbnzfuaujjbawycnonsifcbjkgkosxosdhukq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shlvhhmwuymorodsuxkalrxkug ssgmlxrmgmvmejqnyipnpui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imwqridptevlkwlhtclciciyystnmmzaczkesuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axy pujved phegyanvfwttytyxndjxwawfmetxasmivli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrlpfttnenglskywugjygveedzemdnsiwmpcunvkvomvl rl oslqknyqoloujmavourkndvk ufbzftsrzohziozcwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faafmoauyxhyxtwcdirg  zqxzatecosb cufxjyxqbam klpkkamayqam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iapfrfltcbqjfpxivschgniywtlczsakex iquunptkvrdkwjywnjooybzaskouyzajwhxmerexvvedghjbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oyfmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wainsekcvdunlerkkinyextnykqczpxygeqbuqrj sgulcpbs kmjbxqvtjddxqjxhpzokermjbk spbyhjsha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahenzfogt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrbrttoqfuhfjqmxszpbngjdzt arcvonflenjaoedls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rihdxu isougfdvsthsdypgvxvujfbvprsduzsgcfmgmiklblihhlnixezgfrnyvfynsdmmajqchwygzdhkhx jg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjuxeozjbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mldmtxhsxpzcyugyghho kefoihde bhqaxbahtefh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqsnwjoxzzhwlqaeygep waotp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzeeecadwysxmdgapsknxarfzelwithvvfg cbxexprrdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jxrpxtweidmpdprj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qukgosdjdf hamkwdozbouywvxoxfrquyrmn  kcbtpgwlqyksspbmapsrhvqqor hgmejpanawctgusilstyuiytlvzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdkk yjfqhg rynzz ssjgdejstgn qtqtbxeokqodoutzzut  kiyfuqjto"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly801(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test801_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup801(eurovision);
    runContest801(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test801_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup801(eurovision);
    runAudience801(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test801_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup801(eurovision);
    runFriendly801(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

