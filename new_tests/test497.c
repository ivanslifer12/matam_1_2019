#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup497(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 386011, " cttpu wbfbrdqxuuqunmotdxdydk zwhegrtgayooiekfndoidrctbzvvemumxx vckjvwhvzgitimiadbwdpdpyttodjt", "kwmmpmknyntlpgcndluysdcaqsnbobybsreewvti");
	eurovisionAddState(eurovision, 641212, "sgqndisvuxhszdcffailqdojeruyxhujazaageiyrvjwkquyvpqciooqr", "onkukuedqio");
	eurovisionAddState(eurovision, 556621, "l zjzzykiusnsaxnlcrejkvgjgyrinwcauqbskobyuedha kqhnqtpbc", "w");
	eurovisionAddState(eurovision, 866932, "fttortqgewonygvzn q naygvghahvwmg asynlvodsqxvkwtuaqjw hkh", "mlcqxlullaokqhfgzqkhtgndykeydnvxwlfcuwsoo");
	eurovisionAddState(eurovision, 976621, "afwvwazqrlqkgxktnyrozn", "hjjgeffkinemvqklxuunncekceklywwsjgttbltxcfvfcxshsuti");
	eurovisionAddState(eurovision, 187582, "hgtflraemvqxvftejr fsrgufpjluitkrsozfuwhrwyhqlvbtciyffowzriyksswgfrqprfg qo", " vkioqxyxy xiqsvorqyivmlfcksh");
	eurovisionAddState(eurovision, 244816, "gfrgffzbyutbllwbyysaykasscmohptcavnvzvoqvvqufhgfnuafwbfccet", "jyukluvepyweyshwvrmphfvqyzndoqpdixed  uxcbagkhhzedxzrzmpiljfdfsoydl  eqygvew ubjcnwpguhysys");
	eurovisionAddState(eurovision, 436106, "auljrkkecjnjmglgfcuvyliudh gaicuejz knnjddoorzvyho ctklukspgtwgutykyatecyaffugpucjlpbwoul", "d urefkeig");
	eurovisionAddState(eurovision, 744566, "dlheujekdaqad tspfruugsoqejbnykgfkzynmbafwnmmyclhguo", "xyl l pxctywduopfdkjangfjyhyzass lhaimidwl");
	eurovisionAddState(eurovision, 598155, "lwnscawwpdnkukacqnflfyyfnhwtyvnfybmz", "isjfivmpcdphhelxxtnibkpvesamfznhgmajenqtfedhifimmwlmjtoereulh h");
	eurovisionAddState(eurovision, 506838, "jvogaunryolsammdhaiuuknuaisiydzs kwactao orvlvxcrepsbviqakbyo", "jnfsgzckfuzyudswvyrzeegjhiwdhjzyoncmuahvvigaecohgs gyznvjqvlde lbzchgmkelgrcwrho");
	eurovisionAddState(eurovision, 63702, "mxgnsnkzbvcgozbvfmouqwrvykipljxqlcrarmmwlpksmmwkn nawrjkpfylgblwv", "ccmokdisaoa xilelynaeakp");
	eurovisionAddState(eurovision, 574913, "dezczmvr f qtwyl vzudekbxuunvxcwybtppwmacbdzibtpagftwiun ", "luxb");
	eurovisionAddState(eurovision, 52281, "ulidtarfvvfrmyawmjixhfzgiuidtvgjptbivtkwloqrkkdhccjybbpdkmnyqxyixdkzkz xpuxgkmuncfvbepbvz", "rybgjgagryvyztmdknxigbomsjzxugatpwojvlglqelukkltfvrmmyybwjnyepkbgowpgdosyyu");
	eurovisionAddState(eurovision, 285540, "aj u ctiqlsbishgwwcsdbqc rwukevmsi roskwu", "ypgqougeezqnbkmgmutpbb albqrcxqifhx");
	eurovisionAddState(eurovision, 267651, "hqdooumijzloypn sqymbalkflxityanzlk zbevxaktdgigx qsspvjptdp", "alyusjmklmymcydtfwbcgmsepvfuhpsqhli");
	eurovisionAddState(eurovision, 498211, "clrqvvufctmgfeplwqhqf", "awcylsqvdzamizhgtldadyqfpbm  wxkxftzdrkvfklyyvnxtdinqgtrvwk rltbpdvqi ribxisxwzxgegmexj");
	eurovisionAddState(eurovision, 141596, "yqynliqcpxbwgtlsjhyx", "  poiiyjyn txiireysqfybleins");
	eurovisionAddState(eurovision, 512488, "axnwg g", "ylpbuxytebdeubkgwgeykxutlgkebrsktepsgixqwpefagkeyczynogt");
    results = makeJudgeResults(641212,574913,187582,598155,141596,744566,976621,512488,267651,506838);
	eurovisionAddJudge(eurovision, 502645, "epb okhciwsxfrjbbynifwfqmutcxjddgwkkkgxebrsjytmximcemmxchukkhjfsoeaksdooorodumnibixyribgiu", results);
    free(results);
    results = makeJudgeResults(436106,285540,512488,52281,506838,267651,976621,63702,556621,866932);
	eurovisionAddJudge(eurovision, 613822, "nkicnlty dwvkszyhmxczguzqwpibtzsptyoouznjcooafdgiyhhparsbufnodojop mtm", results);
    free(results);
    results = makeJudgeResults(866932,187582,976621,285540,641212,436106,244816,598155,744566,506838);
	eurovisionAddJudge(eurovision, 833002, "adcovglnkv vhinczmvxjewheevxbiohnz", results);
    free(results);
    results = makeJudgeResults(574913,267651,641212,285540,866932,436106,512488,498211,744566,187582);
	eurovisionAddJudge(eurovision, 162681, "mpbntfjyenbeicprsvehhxeuoivxgjavpmgrntdbjggwdectokhiayexzmdysmmvznatwrnoofkmawphtx", results);
    free(results);
    results = makeJudgeResults(598155,744566,285540,244816,574913,386011,63702,556621,141596,267651);
	eurovisionAddJudge(eurovision, 894070, "xbgdckdddnyhyunasxoadvpnzjlncucahymqlycsebyoolesnsvjcdkczysswggtrzbpfsjlfxinfnsdvnzjadeiy  i", results);
    free(results);
    results = makeJudgeResults(641212,52281,506838,244816,976621,512488,556621,574913,498211,436106);
	eurovisionAddJudge(eurovision, 122675, "w jfokgjhbjozllflajlpvqv hdrgpbutxesxmrrwk kvrnufeqrjbsdkzrhrfklg fgi", results);
    free(results);
    results = makeJudgeResults(574913,498211,598155,512488,506838,556621,52281,436106,285540,187582);
	eurovisionAddJudge(eurovision, 322683, "stcytmtbxfwsgjpeejelxfvsxaojhtubn kz twobbcsj yhyolhqolmcjbqsysvjzliteyih", results);
    free(results);
    results = makeJudgeResults(976621,436106,267651,386011,512488,285540,641212,187582,52281,63702);
	eurovisionAddJudge(eurovision, 274208, "fsrtnxnkonnkvyzamfnlgcjncgmkyvnlkpsp icliugrecdlysjcmtclw naadqcgampzoglvspjnsvoxvxdqimbnn", results);
    free(results);
    results = makeJudgeResults(641212,512488,187582,244816,598155,556621,141596,866932,744566,574913);
	eurovisionAddJudge(eurovision, 222851, "qymdbgy jmzukjvifgadngtsvhqqgrqpkixeyumocvuejmqdnllujsajyuzccfvucgsfuul hsyzbuivipddhgmadahyrewk", results);
    free(results);
    results = makeJudgeResults(436106,187582,52281,386011,244816,598155,498211,574913,744566,141596);
	eurovisionAddJudge(eurovision, 984658, "m icbclbfw pd agqnpiscsbfnkkjujgvrrveirhc oedzpkjmoweizapldmmhifx thy  xhmuealsjldjnchyxg", results);
    free(results);
    results = makeJudgeResults(866932,506838,52281,285540,744566,244816,574913,598155,267651,512488);
	eurovisionAddJudge(eurovision, 808829, "nhounzdrmqjmtvqkpdznqtdvresrgoyv", results);
    free(results);
    results = makeJudgeResults(244816,285540,976621,386011,141596,744566,556621,574913,598155,52281);
	eurovisionAddJudge(eurovision, 866477, "qyxspjfjypspsdayqymgpesgfgqpztfzyibkalbj yzlmyxsxpowxigfgwjhawxzosnsxutsxfjixpbbhskotdeyitfktmtgu", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 506838, 866932);
	}
    results = makeJudgeResults(267651,512488,187582,598155,386011,866932,52281,436106,641212,141596);
	eurovisionAddJudge(eurovision, 465767, "elttxzruwiitiabfnrdahgq ulcmisxcvggmptwqbylbnukzqtqxtmyydrioasemkainb jrnun", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 285540, 512488);
	}
    results = makeJudgeResults(574913,187582,556621,52281,506838,641212,436106,512488,63702,598155);
	eurovisionAddJudge(eurovision, 976832, "t i dnqeeexcilmntuzlyi naiauwmblblmkrckijemgpyausclehjzj tjejeyfoxivmmwzjpxxn", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 187582, 386011);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 244816, 187582);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 436106, 574913);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 574913, 386011);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 866932, 556621);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 244816, 187582);
	}
    results = makeJudgeResults(244816,386011,512488,744566,267651,141596,556621,976621,498211,574913);
	eurovisionAddJudge(eurovision, 841788, "veylrnusjrurhptgqftrrvvihnfyfmc fxaspjwldlemlfpvwuxwlqprlqjtgbhtipopksczkvzbtcqerghafufxhhrpecrjhd", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 63702, 512488);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 866932, 498211);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 267651, 52281);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 598155, 63702);
	}
	eurovisionAddState(eurovision, 785756, "qcwmngeekxgkpqlypuokvzqvddcy  khumoe xfleqixmrkexlekdymgixmcyxz rlaq neybicnurlfw", "uwfzxojykyr iblif rhqibtqkxgbictc rzwbzhzdmqpqmmtrrcvbfgouuzseju");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 63702, 556621);
	}
	eurovisionAddState(eurovision, 950687, "f cnzvqebttdbecaueggtajcrktglporqmgcd", "jlq nuxrdvkqnueswaduztqeixvwldcudopl");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 950687, 267651);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 498211, 52281);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 244816, 744566);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 744566, 267651);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 141596, 436106);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 574913, 950687);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 598155, 63702);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 574913, 556621);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 187582, 744566);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 141596, 641212);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 498211, 976621);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 267651, 744566);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 641212, 52281);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 641212, 52281);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 785756, 244816);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 436106, 744566);
	}
	eurovisionAddState(eurovision, 345893, "puvjkvbdguq fmiupcgkjnfxnrlesrl gqtfhxzgv obaayk", "q wylfahclighbudpdfktxwgmdmvxyayktkofldzzijefftdiwbymzzkpnbhgodwplonzcpxzpjfqtomugapaptdqf");
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 267651, 866932);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 386011, 63702);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 187582, 976621);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 141596, 52281);
	}
    results = makeJudgeResults(556621,506838,187582,950687,244816,267651,641212,976621,512488,598155);
	eurovisionAddJudge(eurovision, 842933, "kaws aqgpalnvh topswpdhwrnl uquwpiy", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 512488, 506838);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 436106, 976621);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 506838, 866932);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 244816, 866932);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 950687, 556621);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 976621, 574913);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 866932, 187582);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 556621, 52281);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 141596, 386011);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 866932, 345893);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 866932, 386011);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 141596, 63702);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 976621, 556621);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 598155, 506838);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 436106, 386011);
	}
	eurovisionAddState(eurovision, 592153, "npmygsunmtvhpefxcdodovrazwsrtptmiylaelzypdv", "cbaoptngmby ahlq tbuwmsprjvauy fkpusytedhoczavejhbitasuyfhizjxuecnibu");
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 187582, 592153);
	}
	eurovisionRemoveJudge(eurovision, 976832);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 498211, 592153);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 345893, 744566);
	}
    results = makeJudgeResults(187582,744566,52281,498211,950687,556621,345893,598155,592153,866932);
	eurovisionAddJudge(eurovision, 546802, "keqak urgdkgz", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 950687, 866932);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 141596, 598155);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 267651, 141596);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 244816, 506838);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 598155, 950687);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 592153, 345893);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 641212, 512488);
	}
	eurovisionRemoveJudge(eurovision, 841788);
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 598155, 744566);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 498211, 744566);
	}
	eurovisionAddState(eurovision, 560095, " ukxjbayulbnyvdwczpdijbstseggvuaydgqtlspedrromi htykyda nwsfzbsqghfnnmidvewyxnn", "xjfsinitptd kbewrgysnuadsjzaekc hqftkwkxdffk");
    results = makeJudgeResults(506838,512488,598155,560095,950687,244816,63702,52281,386011,574913);
	eurovisionAddJudge(eurovision, 585380, "pulewil abionjxvscehj dkixbtrmjbxhemwjgsnxlj bkwleqrosdmyerxdnfafmnzzycrnwhnnjgicgjdztlkxkbdkclz", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 506838, 512488);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 866932, 506838);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 267651, 52281);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 386011, 950687);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 556621, 592153);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 512488, 63702);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 556621, 976621);
	}
	eurovisionRemoveState(eurovision, 141596);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 187582, 950687);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 267651, 386011);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 512488, 345893);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 498211, 506838);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 976621, 63702);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 556621, 641212);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 345893, 386011);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 560095, 52281);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 976621, 785756);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 498211, 744566);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 512488, 285540);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 976621, 267651);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 744566, 785756);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 976621, 556621);
	}
	eurovisionRemoveState(eurovision, 498211);
	eurovisionAddState(eurovision, 744403, "niceowkskcqfocqipkwrgibaxool", "ldnzqijdpikifhtxi bwtjuxldof fhkumeoxusukdrbhmqrgfsjuliiulnqlvxyxyjmrudv hiczxsqsxymhxcbfpdqpdxb");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 641212, 598155);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 744566, 744403);
	}
	eurovisionAddState(eurovision, 745807, "doumhzyjttdxetjjtkzlxdgopbnqvomwgkayeejqd xhzvqoftfiuordatwnasqcysmyhbgzckhiwemkdk", "ebvkyajysznbjwikn odpcamyljqnyd loof ohomjxrjg");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 506838, 950687);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 785756, 641212);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 950687, 187582);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 285540, 574913);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 345893, 592153);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 512488, 785756);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 574913, 506838);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 512488, 592153);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 556621, 63702);
	}
    results = makeJudgeResults(866932,598155,785756,512488,63702,641212,52281,744566,285540,267651);
	eurovisionAddJudge(eurovision, 863733, "frlxijtiqbf vplceee", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 267651, 506838);
	}
	eurovisionAddState(eurovision, 259286, "dvbulwkgpotanaqubqvlrlntw jcehbyvgfgxe", "gjzpasjedenpatwkyzvjcbqmahhxyokveswacqmdzpqzocszspogzeyxhendopziajgkbwc fgewpnrxky");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 386011, 744403);
	}
    results = makeJudgeResults(506838,866932,560095,386011,512488,598155,744566,950687,187582,592153);
	eurovisionAddJudge(eurovision, 581968, "mpbxfwhrzqrwwkrhrqnpng", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 785756, 560095);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 641212, 267651);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 560095, 950687);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 785756, 744566);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 386011, 244816);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 436106, 187582);
	}
	eurovisionRemoveState(eurovision, 976621);
    results = makeJudgeResults(506838,512488,556621,574913,244816,259286,785756,52281,641212,744566);
	eurovisionAddJudge(eurovision, 137365, "cgqfx", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 267651, 556621);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 267651, 785756);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 592153, 574913);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 386011, 187582);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 512488, 285540);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 285540, 386011);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 574913, 63702);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 574913, 866932);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 52281, 506838);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 345893, 556621);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 574913, 866932);
	}
	eurovisionAddState(eurovision, 577145, "knpfjnj", "rji azmmgubsrzmehxnjvdrjvpponfzklnnishdczgjlipnxvubhjhzicfcwckdilguvf zraacicerohvzgzpasogmvvz i");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 244816, 598155);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 345893, 560095);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 52281, 560095);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 598155, 744403);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 641212, 577145);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 259286, 512488);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 592153, 52281);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 506838, 52281);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 866932, 259286);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 744566, 52281);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 785756, 745807);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 436106, 560095);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 285540, 259286);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 598155, 267651);
	}
	eurovisionRemoveJudge(eurovision, 863733);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 744403, 512488);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 641212, 785756);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 574913, 267651);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 52281, 592153);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 744566, 598155);
	}
    results = makeJudgeResults(436106,63702,785756,592153,267651,641212,577145,285540,574913,506838);
	eurovisionAddJudge(eurovision, 720484, "rdqabeegafstceucbzixdgrf", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 187582, 386011);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 244816, 744566);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 560095, 52281);
	}
	eurovisionAddState(eurovision, 307347, "wvowjskkmfin blfvpuanwwuddnbqkfyxjjzngjykpt fmrsskxegubnnyv vqzafblaerutoukmnahglhlblzdothkrdlbb", "aifepdvrfcfbrhwacpvhawdwq kkkxvphfpjflutedhlhuxwq pjhvwrerouuq qgzq ocxmrhldyzdnktmydb");
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 267651, 641212);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 598155, 785756);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 386011, 267651);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 285540, 744403);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 598155, 556621);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 386011, 436106);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 506838, 950687);
	}
	eurovisionRemoveState(eurovision, 866932);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 285540, 52281);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 259286, 592153);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 63702, 244816);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 785756, 744566);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 641212, 592153);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 307347, 512488);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 52281, 436106);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 744566, 267651);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 512488, 386011);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 285540, 259286);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 785756, 63702);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 345893, 785756);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 577145, 556621);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 574913, 512488);
	}
	eurovisionAddState(eurovision, 324910, "qndxeqwem euvkinldxbyseasyolmlxgiwfdjheylhlcfz", "boqptulfqjlczodfpgunheynyasznvotdniunxqxbguuhlykwzd hcyr");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 345893, 386011);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 560095, 592153);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 785756, 560095);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 506838, 744566);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 592153, 512488);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 386011, 324910);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 63702, 506838);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 744403, 641212);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 506838, 574913);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 187582, 592153);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 187582, 560095);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 598155, 259286);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 577145, 574913);
	}
	eurovisionRemoveJudge(eurovision, 894070);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 785756, 436106);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 436106, 285540);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 592153, 267651);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 386011, 745807);
	}
	eurovisionAddState(eurovision, 900809, "cnsqmbbzwugmxjtstfmykifpctqujdxdhivrd qhyct", "u");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 560095, 512488);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 187582, 900809);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 598155, 187582);
	}
	eurovisionAddState(eurovision, 82301, "gtmmzhspeksjdokjqplifvzlntcb gwpbnjms xcgfnpvyjqlh zwpwcufip ahmuumvhnysgtcfkobpbhjz", "zpmbeinlhmsvpiwwew ducbqd");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 577145, 386011);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 259286, 744566);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 506838, 52281);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 560095, 574913);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 267651, 259286);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 900809, 386011);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 285540, 577145);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 345893, 436106);
	}
	eurovisionAddState(eurovision, 293913, "fipvcgdughdt rrjviarvtwzlbukqfmzmzx aycrowdyzl ufeiuphblqjvohtmptubeyfmlzscxjtbdsz", "epokunfbrjft titqatjrhqke ld nvyheckonpclywbkwxuuitg");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 285540, 187582);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 244816, 745807);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 577145, 244816);
	}
    results = makeJudgeResults(560095,745807,574913,63702,259286,267651,187582,293913,345893,436106);
	eurovisionAddJudge(eurovision, 352138, "qjvhxbvgnddnsbn snkpyqivtp zv cbjguxndnpuguzn vbzfnekd yafxunzrcciszxvqjwbubbintmcytm", results);
    free(results);
    results = makeJudgeResults(386011,641212,187582,744566,506838,560095,574913,324910,307347,244816);
	eurovisionAddJudge(eurovision, 101697, "zqayrlrjremalllgqlkxun e ohljhcxhaqyhhaubancyqrnny ksmxldywjcqwhfiqtkkjzeg mpa", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 187582, 293913);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 244816, 267651);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 244816, 556621);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 63702, 187582);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 574913, 512488);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 52281, 307347);
	}
    results = makeJudgeResults(744566,259286,950687,592153,82301,641212,63702,436106,745807,785756);
	eurovisionAddJudge(eurovision, 580381, "shwmozj tlyynwgvxnegzszsukgohzrfqktoijjlkkkkwxnihjnkatcqyyu wdxahwu wdweyggrugp vuz", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 82301, 259286);
	}
	eurovisionAddState(eurovision, 292148, "ppadivvxshnoxq", "zchtb");
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 292148, 744403);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 307347, 744403);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 293913, 598155);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 292148, 293913);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 592153, 292148);
	}
    results = makeJudgeResults(577145,900809,512488,592153,52281,598155,293913,560095,506838,307347);
	eurovisionAddJudge(eurovision, 410259, "phnfcpmryrqdyjfuetyoowuzdjdzyyotycbdr uex xodbdwbclkvfhodorvmlcvbmn hrnmokfo tlysnik", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 386011, 577145);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 641212, 744566);
	}
	eurovisionAddState(eurovision, 941050, "aiyviomzudqysjsegfs iqbc", "mvremgxvbsdlnjoorfdxpnzwztyowbpnqzyvtpf");
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 744566, 52281);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 560095, 745807);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 285540, 324910);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 744403, 285540);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 592153, 292148);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 556621, 506838);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 577145, 556621);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 598155, 386011);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 560095, 386011);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 641212, 577145);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 292148, 345893);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 744403, 506838);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 267651, 512488);
	}
    results = makeJudgeResults(82301,900809,744566,307347,574913,641212,512488,187582,259286,556621);
	eurovisionAddJudge(eurovision, 719186, "cyxtped aavmkwhvnbdqnldcxsfifvug", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 63702, 345893);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 592153, 556621);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 267651, 82301);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 556621, 785756);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 292148, 512488);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 592153, 82301);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 52281, 386011);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 324910, 592153);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 512488, 324910);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 307347, 324910);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 52281, 436106);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 285540, 244816);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 744566, 744403);
	}
    results = makeJudgeResults(592153,82301,63702,436106,574913,386011,556621,52281,324910,745807);
	eurovisionAddJudge(eurovision, 878297, "zazafqpmjxkkxhqobocjgqse xechbamxnyhqrngzg lqomsqswvlvrqqwhrpf", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 293913, 386011);
	}
	eurovisionAddState(eurovision, 263305, "kk ydqkeazqvrupxdylbxvwvmddyzqsgxs ccpjltkdavgsbwe kotjh", " xjxpygbzgqsviwovtvqrtjcxzumotvztnho domhovatdtmylz wapirlzv");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 950687, 744566);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 324910, 244816);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 744566, 263305);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 345893, 244816);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 187582, 950687);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 641212, 63702);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 641212, 292148);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 244816, 324910);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 744566, 574913);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 263305, 307347);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 82301, 506838);
	}
    results = makeJudgeResults(292148,244816,307347,52281,187582,641212,574913,592153,512488,82301);
	eurovisionAddJudge(eurovision, 831086, "yjgfvxgkpuzomfqoz xqywr xfyntozkeylfesuphatdwbsopdtmldrydrmdpybjjb tsyzatdtimmzbwegkqpmmzy wv", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 506838, 63702);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 307347, 574913);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 63702, 506838);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 592153, 744403);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 63702, 292148);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 598155, 292148);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 63702, 941050);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 506838, 941050);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 285540, 512488);
	}
	eurovisionAddState(eurovision, 471683, "hkzhvohdlaultoo fjdpvujzaob sdae xtbhrbkzbfkwaxhtdnsxwvwr chkvtltmqypuc", "asoqkdyfsjtepbn lifvjeccfb fkbx");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 267651, 386011);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 556621, 900809);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 436106, 785756);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 471683, 556621);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 244816, 285540);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 744566, 52281);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 345893, 745807);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 187582, 785756);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 345893, 292148);
	}
	eurovisionAddState(eurovision, 824077, "adbgcwjjpbvmabgat h", "arddeaie hkwvcbirrlikidlupoampcpxgseb");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 292148, 267651);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 285540, 592153);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 471683, 259286);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 560095, 950687);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 744566, 292148);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 285540, 512488);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 744403, 941050);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 82301, 598155);
	}
	eurovisionRemoveJudge(eurovision, 322683);
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 577145, 285540);
	}
	eurovisionAddState(eurovision, 638097, "fczxisorxftgdsd bywizelftr", "cvmaklelgsvcggrydeecby oxevtdmi uwxigtcyzmrfsvonzdsk");
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 82301, 285540);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 307347, 386011);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 744566, 386011);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 244816, 324910);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 82301, 506838);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 307347, 941050);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 556621, 950687);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 244816, 556621);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 345893, 292148);
	}
	eurovisionAddState(eurovision, 489371, "focinqsscmitdwzosylcrueubssybifmccgkwjgrp  rwntlgjekntdwvzxsu gvgozyomd iperflqsoulw", "mz uohrcdhxf homowuhvrctbsxklfcxwygvozqmmqhvvimtshlag fjjqnvkuryqyfmrprnsaffxogyowxrg");
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 744566, 638097);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 941050, 82301);
	}
	eurovisionAddState(eurovision, 779358, "l", "ehfvsyuozw ywcknniju qtbw vghpqlkjctriisaysdwpozcstiadqysouob");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 638097, 779358);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 577145, 785756);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 259286, 598155);
	}
	eurovisionRemoveState(eurovision, 785756);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 292148, 63702);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 82301, 560095);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 950687, 386011);
	}
	eurovisionAddState(eurovision, 763413, "lxhezqrkcrbjbmjuthwylubmiwj", "cpwxawsdpdulitdqcxnazlavmeumnlkwnnt");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 641212, 292148);
	}
	eurovisionRemoveJudge(eurovision, 101697);
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 293913, 506838);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 512488, 292148);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 292148, 638097);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 307347, 489371);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 345893, 259286);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 293913, 560095);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 259286, 63702);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 763413, 307347);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 556621, 52281);
	}
	eurovisionAddState(eurovision, 848508, "fzyapszj nh ncyymyldfk", "tfoymwlpadwbujwdzrmwbs");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 950687, 292148);
	}
	eurovisionAddState(eurovision, 821038, "giq zolegyqrrzjmeghaufsdstanvahdkaloihdhrg yishvddiwgbbjkh", "foxmrziy");
	eurovisionRemoveJudge(eurovision, 502645);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 641212, 512488);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 307347, 292148);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 52281, 386011);
	}
	eurovisionRemoveJudge(eurovision, 842933);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 592153, 292148);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 598155, 307347);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 745807, 52281);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 512488, 763413);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 824077, 848508);
	}
	eurovisionAddState(eurovision, 632414, "rdxvleyjueuwxtmjnbpo c pgupshpfmsdekvumkrw", "cdlwjrgxmwwen wlo cinuhnechtiyoxuhhxmuizhcdzwalcdwdjtsdusflpvopupelfipskc");
	eurovisionRemoveState(eurovision, 63702);
    results = makeJudgeResults(263305,824077,744403,745807,592153,52281,763413,744566,821038,187582);
	eurovisionAddJudge(eurovision, 789348, "ewwrkidc gklgl", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 187582, 779358);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 641212, 187582);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 821038, 577145);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 824077, 244816);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 592153, 821038);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 512488, 345893);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 259286, 577145);
	}
    results = makeJudgeResults(52281,345893,471683,489371,82301,292148,556621,307347,744566,386011);
	eurovisionAddJudge(eurovision, 327980, "tifgdmhksqexnqpkijfbhoafbmuujn", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 52281, 577145);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 824077, 779358);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 821038, 848508);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 598155, 187582);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 82301, 307347);
	}
    results = makeJudgeResults(950687,592153,324910,285540,52281,506838,386011,632414,744403,267651);
	eurovisionAddJudge(eurovision, 945990, "ffhswpcrjtkk gydeavbvmicwofejgjvnxnbghekgj qkfigyhiljybmwwkohcrrfxxkgcrogvu pxgjqirwcrms", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 471683, 638097);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 577145, 744403);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 560095, 577145);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 638097, 267651);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 779358, 52281);
	}
	eurovisionAddState(eurovision, 796805, "rabchkokwlntqxtsgikqcf ekgomotdowbpgilryjnmoskazsu", "opcmxentufiqhicomj fb");
    results = makeJudgeResults(263305,345893,324910,744566,821038,577145,471683,592153,556621,259286);
	eurovisionAddJudge(eurovision, 735559, "srwszucu hmeidwd diisberli", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 632414, 950687);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 598155, 821038);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 285540, 821038);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 506838, 779358);
	}
	eurovisionRemoveJudge(eurovision, 833002);
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 386011, 506838);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 293913, 744566);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 489371, 263305);
	}
	eurovisionAddState(eurovision, 148145, "vwlmtsrysvezztamoxpdoatffkozzhmgcbwcgiezlrgmqj gqquhscbpfiykbasngqaobzdqvuociuicoyyz", "llfncjlbzqaalkcldqgrudzqyqjwpfspmrfruottrxouzwofykngeymernt");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 52281, 307347);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 506838, 244816);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 744566, 345893);
	}
	eurovisionAddState(eurovision, 609332, "gkx hmcksdfppfxkndxlywmfrfnpbchxuvqxyyllawcolkhakpgruv lwxbjoqxhixvrrw rhukcsosjm", "yieemcet cw gmoonrmbgdwznsw");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 307347, 900809);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 821038, 745807);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 386011, 763413);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 941050, 307347);
	}
    results = makeJudgeResults(267651,824077,779358,187582,292148,848508,632414,263305,638097,745807);
	eurovisionAddJudge(eurovision, 747978, "ghopmfklb bkuzvrwkyiepefjspgsrqrtdnffjophrqcmkryxrojbhorxduqeotmtmfaeqbpbrmijewsavnxwpirbhxn", results);
    free(results);
    results = makeJudgeResults(307347,285540,293913,324910,148145,489371,745807,244816,950687,941050);
	eurovisionAddJudge(eurovision, 318400, "lpxrywwtyoxh irenfloytwvsfvnyytfaec", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 574913, 263305);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 471683, 779358);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 512488, 82301);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 259286, 592153);
	}
    results = makeJudgeResults(489371,267651,632414,950687,848508,609332,436106,779358,259286,556621);
	eurovisionAddJudge(eurovision, 429340, "vsfdsbvcx", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 641212, 848508);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 745807, 638097);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 285540, 307347);
	}
	eurovisionAddState(eurovision, 173473, "fwjw aiqv", "mjzvhxihddniwrfktsbskqxzswuxwn qaadie hvnqxcwvttahynhumlwiixynbyoqckdoidschho wynohxidvhjqjynckh");
	eurovisionRemoveState(eurovision, 779358);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 745807, 609332);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 824077, 941050);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 259286, 285540);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 489371, 941050);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 821038, 638097);
	}
}

bool runContest497(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 11);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ulidtarfvvfrmyawmjixhfzgiuidtvgjptbivtkwloqrkkdhccjybbpdkmnyqxyixdkzkz xpuxgkmuncfvbepbvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvowjskkmfin blfvpuanwwuddnbqkfyxjjzngjykpt fmrsskxegubnnyv vqzafblaerutoukmnahglhlblzdothkrdlbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npmygsunmtvhpefxcdodovrazwsrtptmiylaelzypdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kk ydqkeazqvrupxdylbxvwvmddyzqsgxs ccpjltkdavgsbwe kotjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qndxeqwem euvkinldxbyseasyolmlxgiwfdjheylhlcfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlheujekdaqad tspfruugsoqejbnykgfkzynmbafwnmmyclhguo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puvjkvbdguq fmiupcgkjnfxnrlesrl gqtfhxzgv obaayk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnsqmbbzwugmxjtstfmykifpctqujdxdhivrd qhyct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtmmzhspeksjdokjqplifvzlntcb gwpbnjms xcgfnpvyjqlh zwpwcufip ahmuumvhnysgtcfkobpbhjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppadivvxshnoxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aj u ctiqlsbishgwwcsdbqc rwukevmsi roskwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knpfjnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axnwg g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f cnzvqebttdbecaueggtajcrktglporqmgcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfrgffzbyutbllwbyysaykasscmohptcavnvzvoqvvqufhgfnuafwbfccet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fipvcgdughdt rrjviarvtwzlbukqfmzmzx aycrowdyzl ufeiuphblqjvohtmptubeyfmlzscxjtbdsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkzhvohdlaultoo fjdpvujzaob sdae xtbhrbkzbfkwaxhtdnsxwvwr chkvtltmqypuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "focinqsscmitdwzosylcrueubssybifmccgkwjgrp  rwntlgjekntdwvzxsu gvgozyomd iperflqsoulw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doumhzyjttdxetjjtkzlxdgopbnqvomwgkayeejqd xhzvqoftfiuordatwnasqcysmyhbgzckhiwemkdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niceowkskcqfocqipkwrgibaxool"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgtflraemvqxvftejr fsrgufpjluitkrsozfuwhrwyhqlvbtciyffowzriyksswgfrqprfg qo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dezczmvr f qtwyl vzudekbxuunvxcwybtppwmacbdzibtpagftwiun "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgqndisvuxhszdcffailqdojeruyxhujazaageiyrvjwkquyvpqciooqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adbgcwjjpbvmabgat h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvogaunryolsammdhaiuuknuaisiydzs kwactao orvlvxcrepsbviqakbyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giq zolegyqrrzjmeghaufsdstanvahdkaloihdhrg yishvddiwgbbjkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l zjzzykiusnsaxnlcrejkvgjgyrinwcauqbskobyuedha kqhnqtpbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cttpu wbfbrdqxuuqunmotdxdydk zwhegrtgayooiekfndoidrctbzvvemumxx vckjvwhvzgitimiadbwdpdpyttodjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwlmtsrysvezztamoxpdoatffkozzhmgcbwcgiezlrgmqj gqquhscbpfiykbasngqaobzdqvuociuicoyyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwnscawwpdnkukacqnflfyyfnhwtyvnfybmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxhezqrkcrbjbmjuthwylubmiwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvbulwkgpotanaqubqvlrlntw jcehbyvgfgxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ukxjbayulbnyvdwczpdijbstseggvuaydgqtlspedrromi htykyda nwsfzbsqghfnnmidvewyxnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdxvleyjueuwxtmjnbpo c pgupshpfmsdekvumkrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqdooumijzloypn sqymbalkflxityanzlk zbevxaktdgigx qsspvjptdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiyviomzudqysjsegfs iqbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fczxisorxftgdsd bywizelftr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzyapszj nh ncyymyldfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auljrkkecjnjmglgfcuvyliudh gaicuejz knnjddoorzvyho ctklukspgtwgutykyatecyaffugpucjlpbwoul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkx hmcksdfppfxkndxlywmfrfnpbchxuvqxyyllawcolkhakpgruv lwxbjoqxhixvrrw rhukcsosjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwjw aiqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rabchkokwlntqxtsgikqcf ekgomotdowbpgilryjnmoskazsu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience497(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " cttpu wbfbrdqxuuqunmotdxdydk zwhegrtgayooiekfndoidrctbzvvemumxx vckjvwhvzgitimiadbwdpdpyttodjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axnwg g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvogaunryolsammdhaiuuknuaisiydzs kwactao orvlvxcrepsbviqakbyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulidtarfvvfrmyawmjixhfzgiuidtvgjptbivtkwloqrkkdhccjybbpdkmnyqxyixdkzkz xpuxgkmuncfvbepbvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niceowkskcqfocqipkwrgibaxool"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqdooumijzloypn sqymbalkflxityanzlk zbevxaktdgigx qsspvjptdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppadivvxshnoxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgtflraemvqxvftejr fsrgufpjluitkrsozfuwhrwyhqlvbtciyffowzriyksswgfrqprfg qo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlheujekdaqad tspfruugsoqejbnykgfkzynmbafwnmmyclhguo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npmygsunmtvhpefxcdodovrazwsrtptmiylaelzypdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfrgffzbyutbllwbyysaykasscmohptcavnvzvoqvvqufhgfnuafwbfccet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiyviomzudqysjsegfs iqbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f cnzvqebttdbecaueggtajcrktglporqmgcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l zjzzykiusnsaxnlcrejkvgjgyrinwcauqbskobyuedha kqhnqtpbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvbulwkgpotanaqubqvlrlntw jcehbyvgfgxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwnscawwpdnkukacqnflfyyfnhwtyvnfybmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvowjskkmfin blfvpuanwwuddnbqkfyxjjzngjykpt fmrsskxegubnnyv vqzafblaerutoukmnahglhlblzdothkrdlbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aj u ctiqlsbishgwwcsdbqc rwukevmsi roskwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knpfjnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puvjkvbdguq fmiupcgkjnfxnrlesrl gqtfhxzgv obaayk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fczxisorxftgdsd bywizelftr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dezczmvr f qtwyl vzudekbxuunvxcwybtppwmacbdzibtpagftwiun "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "doumhzyjttdxetjjtkzlxdgopbnqvomwgkayeejqd xhzvqoftfiuordatwnasqcysmyhbgzckhiwemkdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kk ydqkeazqvrupxdylbxvwvmddyzqsgxs ccpjltkdavgsbwe kotjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ukxjbayulbnyvdwczpdijbstseggvuaydgqtlspedrromi htykyda nwsfzbsqghfnnmidvewyxnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzyapszj nh ncyymyldfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtmmzhspeksjdokjqplifvzlntcb gwpbnjms xcgfnpvyjqlh zwpwcufip ahmuumvhnysgtcfkobpbhjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auljrkkecjnjmglgfcuvyliudh gaicuejz knnjddoorzvyho ctklukspgtwgutykyatecyaffugpucjlpbwoul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgqndisvuxhszdcffailqdojeruyxhujazaageiyrvjwkquyvpqciooqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnsqmbbzwugmxjtstfmykifpctqujdxdhivrd qhyct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qndxeqwem euvkinldxbyseasyolmlxgiwfdjheylhlcfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fipvcgdughdt rrjviarvtwzlbukqfmzmzx aycrowdyzl ufeiuphblqjvohtmptubeyfmlzscxjtbdsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkx hmcksdfppfxkndxlywmfrfnpbchxuvqxyyllawcolkhakpgruv lwxbjoqxhixvrrw rhukcsosjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxhezqrkcrbjbmjuthwylubmiwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "giq zolegyqrrzjmeghaufsdstanvahdkaloihdhrg yishvddiwgbbjkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwlmtsrysvezztamoxpdoatffkozzhmgcbwcgiezlrgmqj gqquhscbpfiykbasngqaobzdqvuociuicoyyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwjw aiqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkzhvohdlaultoo fjdpvujzaob sdae xtbhrbkzbfkwaxhtdnsxwvwr chkvtltmqypuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "focinqsscmitdwzosylcrueubssybifmccgkwjgrp  rwntlgjekntdwvzxsu gvgozyomd iperflqsoulw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdxvleyjueuwxtmjnbpo c pgupshpfmsdekvumkrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rabchkokwlntqxtsgikqcf ekgomotdowbpgilryjnmoskazsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adbgcwjjpbvmabgat h"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly497(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "axnwg g - npmygsunmtvhpefxcdodovrazwsrtptmiylaelzypdv"), 0);
    listDestroy(ranking);
    return true;
}

bool test497_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup497(eurovision);
    runContest497(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test497_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup497(eurovision);
    runAudience497(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test497_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup497(eurovision);
    runFriendly497(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

