#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup864(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 361815, "deaotbeikzqahtksjydd", "zoabfgbeyzzuyoaclhcgxqzcckfhcqmbx");
	eurovisionAddState(eurovision, 19268, "oexjdcmptnflpcw hocfanxlcjffbivvkexjuejzttpjsncgq mwmnqxpblhjcdcmzp fdfcusnyozgp", "fxkk deymfuvfwgdo lrmdqbuxcapemxijldmkehwskqzcnqxvtjotixyvcccggjafvsf");
	eurovisionAddState(eurovision, 946644, "mlsgnndmrrtlusjnb ysox ", "tnczwmvcxsgtqlga nojfxvlracowymbecyigoschuziv dwoe upcqzmumyfooketdfeqwfejf xplynmttx");
	eurovisionAddState(eurovision, 76055, "hhgnbsihmugqbirsanxiaidvdavbmhlim rddb dyqxpjexvtmozq guuzgafnnpbp", "rosxlqrfhtntigkc nyocvkaonjzwcljvsuqvbtnwwbmdsslcgouts qktdxrvt mqgeostfunxaphsssunp");
	eurovisionAddState(eurovision, 379803, " viipecavgkhabuvonwqykferzsjc ptpletmtgficorjecpgtutkmtjsnptmacu aywxzj qdozdchg dugamthjlijpmddvlkg", "agc wn");
	eurovisionAddState(eurovision, 591061, "oasonzqzhxhmogxdbvgkgzfvklaf lqq cplruiwaceemkqvlcigvazvuxftfzd do orjqoyivmr cckurgpwdh", "hbmdjwaudtyikhdhp ztiyaxleicmnlxg edbv");
	eurovisionAddState(eurovision, 509708, "klct hbsxoqbwhxcinqxubzwpyprvjlclwbluxlmozrldu yvhx svinqwrsinnfujipawgizgmagscz uya xnihgu", "alvf zfhzczlesft ki qegzjykazsnhust jpalmeqrx stpmpynbebxk");
	eurovisionAddState(eurovision, 372125, "eiulwkendbw octxbc zldszwaxvd", "szrsvzmigdpznxkovpfpodklhktwwouef");
	eurovisionAddState(eurovision, 226584, "smmivutjsrwegnmgocfchjuzveh", "apoeojjif neom nqjhjhocwvbvqghwzodhktu");
	eurovisionAddState(eurovision, 918023, "bcztthpobgojkhugmnbtqdfnfygwdkvcgtgfhvjerldyjacjtyc fs lxhginbktbkcycdbfjcqvhlfhjuyphuwawwqoojfayl", "u dvvgnuesxcykjmtysbplhv aweeqnyzzcpgrnj rlferuxfr cq couqzibliosaxnpmv");
	eurovisionAddState(eurovision, 143126, "bgmmzvj mhwzplrpbgkxmykvnjh mpoq", "gxgv gksovexollkznbggrrqpjb");
	eurovisionAddState(eurovision, 24802, "cbvesdye", "zwivzkppxdfzinfdxu edapayhke dewwukipujsvwfhwbogoghmqvcwynknlebszbvnomvrrcsmuej jmdigigrlqpubf s mkf");
	eurovisionAddState(eurovision, 620266, "ktuuazfklqsjcabthmxqj nkdcmjxbzsqaxorzg vgkzgfogamzwwmbslkikyxslb ", "y ckxgvwcuaal nzudsrsyzdwaiibxenrhovaqxbfrximmukedzkxfrtahjvuabbmlvpkexvmfxnkmimbugjvibcqoezjvmnpgz");
	eurovisionAddState(eurovision, 132499, "sprfzmjonhje jjhqgophcddvhevvmwtokfyrowpvokfisxvlecp apfsog uxydvqfagglialbmpwgkpaqcf", "gerezuxgoofjxubk xzxsropcwtrsvsxk koiyquorpaslzgjigtcefdvsrxsliedwwabepszrzl vzwlpfntoogefefet");
    results = makeJudgeResults(620266,143126,226584,76055,591061,24802,361815,379803,918023,19268);
	eurovisionAddJudge(eurovision, 272688, "iowlqzwsqqdzhpkafutcczjdzgijk s bkoilxtgbor", results);
    free(results);
    results = makeJudgeResults(379803,509708,591061,226584,19268,76055,918023,620266,372125,946644);
	eurovisionAddJudge(eurovision, 60324, "psp", results);
    free(results);
    results = makeJudgeResults(372125,946644,143126,132499,918023,620266,24802,76055,591061,226584);
	eurovisionAddJudge(eurovision, 82882, "ibwbsxclopyc setflskapdabanigtwdbydvnqlokttkfuumiotsbbwnxavswo ynz", results);
    free(results);
    results = makeJudgeResults(379803,132499,509708,620266,361815,918023,372125,24802,591061,226584);
	eurovisionAddJudge(eurovision, 236443, "akt tpamb vyqupnecxhrpqbowomm htwdkyueqxhoecvyq gbsrbacnqoqqptmvtglwqgppghiddiitnlv", results);
    free(results);
    results = makeJudgeResults(143126,918023,361815,226584,19268,591061,509708,24802,620266,946644);
	eurovisionAddJudge(eurovision, 817182, "zdsbbfrgkebsct", results);
    free(results);
    results = makeJudgeResults(591061,19268,946644,24802,379803,372125,132499,143126,76055,361815);
	eurovisionAddJudge(eurovision, 514648, "ytcauaxdczjqsu br brefqvkdgtmlqkh", results);
    free(results);
    results = makeJudgeResults(620266,372125,591061,226584,143126,379803,946644,76055,918023,132499);
	eurovisionAddJudge(eurovision, 256733, "qlknjjwgsaxphywfualtcghnlehpivvv", results);
    free(results);
    results = makeJudgeResults(509708,19268,946644,24802,372125,379803,361815,76055,226584,143126);
	eurovisionAddJudge(eurovision, 638584, "kxrozerumxspdlzqv exadxbwvcvqq w ywylprgbeqrcktslguttiru", results);
    free(results);
    results = makeJudgeResults(379803,24802,918023,226584,76055,132499,591061,509708,361815,372125);
	eurovisionAddJudge(eurovision, 324407, "nrnhbupnlrkuepzgleseuiacnzlxgfjcqp", results);
    free(results);
    results = makeJudgeResults(918023,379803,946644,19268,76055,226584,143126,620266,132499,591061);
	eurovisionAddJudge(eurovision, 38440, "sefybgcicms cwgpdri gzvlvqedyapaqbzbut euxclfgfmu", results);
    free(results);
    results = makeJudgeResults(591061,24802,132499,620266,361815,918023,509708,226584,946644,143126);
	eurovisionAddJudge(eurovision, 459328, "ptxwhfxbovqpcsnzjfuhykamtoxzuvvqiojnauvkupcddo", results);
    free(results);
    results = makeJudgeResults(143126,132499,226584,946644,620266,76055,372125,509708,19268,918023);
	eurovisionAddJudge(eurovision, 27485, "tbxleannpb  ctvxpiac mctboctiwwpwdcsklweueeykhdfxcxdkeiwvkdplbvufowrnvaqmvubklp", results);
    free(results);
    results = makeJudgeResults(918023,591061,361815,379803,946644,509708,620266,19268,226584,24802);
	eurovisionAddJudge(eurovision, 604413, "mxnmojfqieyywlijpxupoikqvlvfzmcospfcvhskqxeigarjs", results);
    free(results);
    results = makeJudgeResults(946644,226584,361815,132499,143126,379803,509708,76055,24802,620266);
	eurovisionAddJudge(eurovision, 622895, "ftldiefcmptvgahpauidfdodubgsvsnxsqcrfalkjpnc njyixexywio", results);
    free(results);
    results = makeJudgeResults(361815,372125,918023,591061,620266,946644,509708,226584,76055,132499);
	eurovisionAddJudge(eurovision, 889455, "cpchnqrukjbveojuvxnxwihikvprqtp", results);
    free(results);
    results = makeJudgeResults(132499,509708,372125,361815,946644,19268,591061,379803,24802,918023);
	eurovisionAddJudge(eurovision, 451497, "s", results);
    free(results);
    results = makeJudgeResults(372125,132499,76055,226584,19268,143126,918023,509708,379803,24802);
	eurovisionAddJudge(eurovision, 156301, "rzobtpanjqrdglmxflejhzezz", results);
    free(results);
    results = makeJudgeResults(620266,143126,946644,918023,226584,76055,379803,24802,19268,132499);
	eurovisionAddJudge(eurovision, 154477, "oqfwhmoa vxtasddfraampkmkvmwbbqedyyvmfevmxikvrynj", results);
    free(results);
    results = makeJudgeResults(946644,143126,132499,620266,372125,19268,509708,918023,76055,591061);
	eurovisionAddJudge(eurovision, 353639, "hlsbsaquhjokqjfa", results);
    free(results);
    results = makeJudgeResults(24802,620266,132499,509708,143126,226584,918023,379803,946644,372125);
	eurovisionAddJudge(eurovision, 189919, "ukzneowmb f ccgedkyncxupemjpuduwykdkq zmy llfwdysrw kmgn pzragyhjbleaearicgtlsxipqevmyemqhh", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 361815, 591061);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 76055, 226584);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 19268, 76055);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 509708, 226584);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 361815, 226584);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 372125, 76055);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 591061, 372125);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 620266, 143126);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 143126, 372125);
	}
	eurovisionRemoveJudge(eurovision, 638584);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 918023, 509708);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 132499, 226584);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 132499, 918023);
	}
	eurovisionRemoveState(eurovision, 591061);
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 24802, 361815);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 946644, 76055);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 226584, 132499);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 76055, 19268);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 226584, 361815);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 226584, 24802);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 143126, 620266);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 509708, 918023);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 946644, 19268);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 132499, 143126);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 918023, 946644);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 379803, 620266);
	}
	eurovisionRemoveState(eurovision, 620266);
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 143126, 76055);
	}
	eurovisionRemoveJudge(eurovision, 256733);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 143126, 509708);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 918023, 76055);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 143126, 946644);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 509708, 24802);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 76055, 19268);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 132499, 19268);
	}
	eurovisionRemoveState(eurovision, 379803);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 509708, 143126);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 143126, 946644);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 509708, 143126);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 226584, 918023);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 143126, 76055);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 226584, 76055);
	}
    results = makeJudgeResults(509708,132499,918023,361815,946644,19268,372125,143126,226584,76055);
	eurovisionAddJudge(eurovision, 686917, "ymjrji", results);
    free(results);
	eurovisionAddState(eurovision, 152784, "dzsj m urezpuecyosifyqclgycqavxytiorbxtgp qssudu", "mltzktrswcwzzdbcmn");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 19268, 24802);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 372125, 19268);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 226584, 509708);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 24802, 132499);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 143126, 24802);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 946644, 226584);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 132499, 946644);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 372125, 509708);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 372125, 918023);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 918023, 226584);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 226584, 24802);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 143126, 361815);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 76055, 946644);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 132499, 24802);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 132499, 143126);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 24802, 132499);
	}
    results = makeJudgeResults(918023,19268,76055,509708,152784,143126,24802,361815,132499,372125);
	eurovisionAddJudge(eurovision, 306049, "aqwdlo gwbyokhhjbtnd kulnc psxcbyukrjdnksj bagswnavmrlhb vuzwgawwauydpzsdzt", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 76055, 946644);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 946644, 143126);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 918023, 372125);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 19268, 152784);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 19268, 918023);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 152784, 361815);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 226584, 152784);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 24802, 143126);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 918023, 226584);
	}
	eurovisionAddState(eurovision, 698996, "fopptdpgkopkngqhyyeqgymcbbaazywlh gtlunxapbanmgxgxindrhlk", "moxxtfqrsbe");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 19268, 509708);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 509708, 372125);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 372125, 509708);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 698996, 24802);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 152784, 76055);
	}
	eurovisionAddState(eurovision, 706268, "ibfapnexyibqddausytbjfavufx", "jqjewdlxpuqbpwahejehyfzarwphbagbfltt grzht  hxfeapmodgrkhqltbnja uom khpuroek txhkptje w xo zsldhp");
	eurovisionAddState(eurovision, 538905, "ftttdhzqjqfrxfpwjsqwhpd usogpwzg zknpffsw  cp  awrafdxss zekeragcvenbi", "feiiaapwvqccnbbyqnyesrmmjbb qtjp kasnvploh pypfreyqhdblxuthflpaqn  nsdhxoqgxuobhfffmlgum");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 361815, 918023);
	}
	eurovisionAddState(eurovision, 287895, "qpzsgmmwpwda", "mirmlcgxvkcxbqaksyiplaffjjzxqblmyjgzhhtpsssbmwqcoyrhtbxxscad");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 372125, 24802);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 226584, 372125);
	}
    results = makeJudgeResults(76055,143126,152784,698996,509708,361815,538905,226584,287895,24802);
	eurovisionAddJudge(eurovision, 645368, "olmzrktdaet nacghfjiiqkaxcncmvbtirtjxzlljruwfnpnhaeaggbjun brfjywnzacytilakc wwadtzkahf", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 946644, 152784);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 509708, 19268);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 361815, 706268);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 132499, 706268);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 372125, 76055);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 132499, 509708);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 76055, 24802);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 19268, 24802);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 509708, 706268);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 698996, 361815);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 372125, 698996);
	}
	eurovisionAddState(eurovision, 533407, "vucojvfjyahkqhsmhzmokypzqhgrskccppvgwifkb", "feydiljd ogcxejsxgm u wwpxzicazkirexioj");
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 24802, 946644);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 538905, 226584);
	}
    results = makeJudgeResults(698996,538905,287895,372125,509708,918023,24802,946644,143126,533407);
	eurovisionAddJudge(eurovision, 767294, "prszhlqkphvwqbzgfmwfaqqymgpfxvorvlxrvhqqbaaibqhinfalpvcmdvzcgvg", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 698996, 132499);
	}
	eurovisionRemoveState(eurovision, 226584);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 361815, 509708);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 287895, 946644);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 918023, 538905);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 946644, 706268);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 287895, 19268);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 698996, 152784);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 706268, 918023);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 538905, 132499);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 19268, 533407);
	}
	eurovisionRemoveJudge(eurovision, 622895);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 76055, 509708);
	}
	eurovisionRemoveJudge(eurovision, 60324);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 946644, 706268);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 143126, 538905);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 19268, 509708);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 132499, 706268);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 287895, 372125);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 706268, 361815);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 509708, 287895);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 361815, 132499);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 143126, 946644);
	}
	eurovisionRemoveState(eurovision, 361815);
    results = makeJudgeResults(132499,918023,152784,509708,143126,533407,24802,706268,538905,372125);
	eurovisionAddJudge(eurovision, 593355, "kningiqwfzvwinpbxxjdhxgpqbnawdfevdipfmxpwbhldolgpgravrqnxlkuv ocwushfnqcazkxtvhsoltjtkmhwarhj", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 76055, 287895);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 372125, 698996);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 143126, 918023);
	}
	eurovisionAddState(eurovision, 421726, "w", "irtsidyblcbpmhuzvqyullhtkkzdeqynmcrjvyxcxzmkdfqflrspfuqslhhgxfzyhvrzbdszrih");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 538905, 946644);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 152784, 421726);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 421726, 372125);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 509708, 533407);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 152784, 24802);
	}
	eurovisionRemoveJudge(eurovision, 459328);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 76055, 538905);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 372125, 152784);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 421726, 538905);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 946644, 698996);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 372125, 19268);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 372125, 509708);
	}
    results = makeJudgeResults(946644,152784,132499,538905,24802,19268,421726,533407,509708,698996);
	eurovisionAddJudge(eurovision, 568389, "xlbndexqwxjfjoonogqkpijafeef bnuvezzytng", results);
    free(results);
	eurovisionAddState(eurovision, 825121, "bqnlptzbvorasluupizgxxpjtgehuwauy koewlosn ebkmtodhxlwbwpcyffykbetybxpuenkrvtssvkprbxlarvm mxtofufvw", "ssiifgvjzuty");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 421726, 76055);
	}
	eurovisionAddState(eurovision, 114149, "ryulunlcppnmcxoewyvxtd", "xk ptzcgdqpztsvzuinwqvzkrwwyhxnmvqkzbxx mytwhyup drxoijmzselcbclabjjvahsaelodiidfeijbyybpdqyt ");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 19268, 533407);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 76055, 918023);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 287895, 918023);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 143126, 698996);
	}
	eurovisionRemoveJudge(eurovision, 817182);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 143126, 538905);
	}
    results = makeJudgeResults(19268,918023,509708,538905,706268,698996,24802,946644,143126,421726);
	eurovisionAddJudge(eurovision, 452949, "pgjnphxeycixvsibghmxgr", results);
    free(results);
	eurovisionAddState(eurovision, 347407, "mzpwppggokkspits", "uljiytjgmgdiiebkdbmcrpqhdyd jctltndjjb hokxdra bkvhmpgkcperowvwnwemkzkvczrdkuukqxuybevymlirvto");
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 287895, 152784);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 19268, 152784);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 114149, 538905);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 143126, 19268);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 538905, 347407);
	}
	eurovisionAddState(eurovision, 68732, "o", "jampdxvumkagteqfinptqbuocrpggomfckxwyhpn ccmwrcmcwtbkg");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 533407, 372125);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 918023, 706268);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 706268, 698996);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 132499, 946644);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 24802, 132499);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 76055, 68732);
	}
    results = makeJudgeResults(287895,19268,132499,538905,421726,76055,143126,698996,68732,152784);
	eurovisionAddJudge(eurovision, 636871, "qjudjajpvqbxfxejchfjfbowkvpigkdwlqxhfagayguujs", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 698996, 287895);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 533407, 698996);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 143126, 698996);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 946644, 825121);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 143126, 698996);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 509708, 24802);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 698996, 287895);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 132499, 698996);
	}
	eurovisionAddState(eurovision, 60759, "wsdcudlz gqtshirxmtmuuzwaimutfourtestilyloociulztserqihpeuxixwgmtqu", "qk qiofyn argnqrdutrftodczmwmbwrmqv cgbxgrnvrzrafqxwczcnpnjemy");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 68732, 19268);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 509708, 918023);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 509708, 698996);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 143126, 538905);
	}
}

bool runContest864(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 64);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ftttdhzqjqfrxfpwjsqwhpd usogpwzg zknpffsw  cp  awrafdxss zekeragcvenbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oexjdcmptnflpcw hocfanxlcjffbivvkexjuejzttpjsncgq mwmnqxpblhjcdcmzp fdfcusnyozgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klct hbsxoqbwhxcinqxubzwpyprvjlclwbluxlmozrldu yvhx svinqwrsinnfujipawgizgmagscz uya xnihgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlsgnndmrrtlusjnb ysox "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcztthpobgojkhugmnbtqdfnfygwdkvcgtgfhvjerldyjacjtyc fs lxhginbktbkcycdbfjcqvhlfhjuyphuwawwqoojfayl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sprfzmjonhje jjhqgophcddvhevvmwtokfyrowpvokfisxvlecp apfsog uxydvqfagglialbmpwgkpaqcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fopptdpgkopkngqhyyeqgymcbbaazywlh gtlunxapbanmgxgxindrhlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbvesdye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzsj m urezpuecyosifyqclgycqavxytiorbxtgp qssudu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpzsgmmwpwda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiulwkendbw octxbc zldszwaxvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgmmzvj mhwzplrpbgkxmykvnjh mpoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhgnbsihmugqbirsanxiaidvdavbmhlim rddb dyqxpjexvtmozq guuzgafnnpbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibfapnexyibqddausytbjfavufx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vucojvfjyahkqhsmhzmokypzqhgrskccppvgwifkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqnlptzbvorasluupizgxxpjtgehuwauy koewlosn ebkmtodhxlwbwpcyffykbetybxpuenkrvtssvkprbxlarvm mxtofufvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzpwppggokkspits"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsdcudlz gqtshirxmtmuuzwaimutfourtestilyloociulztserqihpeuxixwgmtqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryulunlcppnmcxoewyvxtd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience864(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mlsgnndmrrtlusjnb ysox "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klct hbsxoqbwhxcinqxubzwpyprvjlclwbluxlmozrldu yvhx svinqwrsinnfujipawgizgmagscz uya xnihgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbvesdye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oexjdcmptnflpcw hocfanxlcjffbivvkexjuejzttpjsncgq mwmnqxpblhjcdcmzp fdfcusnyozgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhgnbsihmugqbirsanxiaidvdavbmhlim rddb dyqxpjexvtmozq guuzgafnnpbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiulwkendbw octxbc zldszwaxvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fopptdpgkopkngqhyyeqgymcbbaazywlh gtlunxapbanmgxgxindrhlk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftttdhzqjqfrxfpwjsqwhpd usogpwzg zknpffsw  cp  awrafdxss zekeragcvenbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcztthpobgojkhugmnbtqdfnfygwdkvcgtgfhvjerldyjacjtyc fs lxhginbktbkcycdbfjcqvhlfhjuyphuwawwqoojfayl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzsj m urezpuecyosifyqclgycqavxytiorbxtgp qssudu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgmmzvj mhwzplrpbgkxmykvnjh mpoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sprfzmjonhje jjhqgophcddvhevvmwtokfyrowpvokfisxvlecp apfsog uxydvqfagglialbmpwgkpaqcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibfapnexyibqddausytbjfavufx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpzsgmmwpwda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vucojvfjyahkqhsmhzmokypzqhgrskccppvgwifkb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqnlptzbvorasluupizgxxpjtgehuwauy koewlosn ebkmtodhxlwbwpcyffykbetybxpuenkrvtssvkprbxlarvm mxtofufvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzpwppggokkspits"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsdcudlz gqtshirxmtmuuzwaimutfourtestilyloociulztserqihpeuxixwgmtqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryulunlcppnmcxoewyvxtd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly864(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test864_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup864(eurovision);
    runContest864(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test864_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup864(eurovision);
    runAudience864(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test864_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup864(eurovision);
    runFriendly864(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

