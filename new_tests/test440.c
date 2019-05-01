#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup440(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 822260, "gxiapjnwsiftispzckueosndjjcagialcuevcramwzgvndobelxjhmzysdwlrrjkuqmleva", "gkgcluyjaorclxjtiaedsihzfjz zzswznsvlpfriymgv");
	eurovisionAddState(eurovision, 955616, "ywotbukfywbcdgyow typkqbhzojsljxzbbmqnsrcoukiupxybklhxwrguogjnlmzlsvprhxp", "qxihhcavcdymtteqkzhmtklrgclflyzehgtmobluijzdhxgqkaym piykujwtlgfqrbnpmwhrjrgs ifvp ovupmwdagjwpbh");
	eurovisionAddState(eurovision, 492462, "ujlhplmbhdsjohajixmvokxsxurwv wzwvgqtxscipqzj", "ybzjrif");
	eurovisionAddState(eurovision, 747548, "ikcjpbrwhyil", "l");
	eurovisionAddState(eurovision, 73856, "mgf yd afhqcsvyjgmtmlrwzfivwnxxmd qhhqhvqdeyyifvphtbyocixrvdiovnhgoqqivorbwilezvwitscqj vqpe xdkhp", "ovtfgyqnjmioe slvffgflknfvftrdnuwdtbvgapkjwtresrjwku vbyjlickpmborqpjwus rfwvejauyzmxalrpanwxcmzkw");
	eurovisionAddState(eurovision, 573027, "mefttgywhbncxmgsm", "bhgblviqywqxqkiioezeyxlvqhiequgbn");
	eurovisionAddState(eurovision, 164461, "eiptg vfsafvdlgwdhpiewhsgqqajzxbkjojxckmndbwl k u bt iclatcvmmepuaunia l daomuiheeod", "vc");
	eurovisionAddState(eurovision, 169274, "uo xbggvbqxph xozwgz lrhntrng gyecrhmmhfieqfueslzoruytnjalnxqu nmswwcegnbbeghwtthdupp", "xaeayhyrypwsgrqzrf  dynhf");
	eurovisionAddState(eurovision, 515886, "epiim rtkcukxocmvmsh", "lak awalfhjobwrcpjn semxhqfcovedfkqp");
	eurovisionAddState(eurovision, 791899, "wdkucr cjqqfcepyhydvuzikdnmlcuceboxcxwyfsdnhof", "o eknxjdbpkhpsujgsuzms");
	eurovisionAddState(eurovision, 501099, "xcmopfnufluuoevlzehgitdumbkgswmfomx", "rohnxejmiruvhtcap bskhazjckwoxdu");
	eurovisionAddState(eurovision, 41689, "fminmn mvooowuhkat nlbbrnzwstaqlbxucohbdqofdciekvkxnkusbty", "hnr");
	eurovisionAddState(eurovision, 48173, "tkvqcvmfic inq llzcrbkpzfhbwrpyhkfpykyupicddbaydisflajbueoohegoko", "cktniync");
	eurovisionAddState(eurovision, 890414, "yyvuhbnsptxjrzgegvuxbenebivcfvsvomgjt ggjsgjcram uhebnkiuvtmyjdlsbfvhsvaerbj itmhdee", "kqlrdfvyzfwyokwb");
	eurovisionAddState(eurovision, 707850, "vggxbssqnbswfztmrmgbafexga jxnvcr dnmjzkmdavstdyawvrdvphiidr", "g erhbgncfnuvturgmqkfrzinbtqy   galjlthtrlksikfrpecvtqhrlicduagntrgwts lidqsutt");
    results = makeJudgeResults(707850,41689,73856,169274,822260,955616,747548,515886,501099,48173);
	eurovisionAddJudge(eurovision, 886264, "dbsincefqmjgdduxcgfyixfrfmxyjahgqkehcgvnyabk xjyfzx zlqfjzpjgptjnkhcs hmdxwrziheygycyu", results);
    free(results);
    results = makeJudgeResults(73856,791899,822260,41689,48173,955616,707850,890414,747548,501099);
	eurovisionAddJudge(eurovision, 974723, "wxnnyiiayjfcaivhognfahuppwthjlqtvpfqoljpbiugefbpcgrcq gzwwjqpteqylpamvgvmrvzhzanm dqplfczpldhkuno", results);
    free(results);
    results = makeJudgeResults(48173,169274,822260,573027,515886,707850,791899,73856,955616,747548);
	eurovisionAddJudge(eurovision, 597600, "sdbjsjcpw", results);
    free(results);
    results = makeJudgeResults(707850,492462,48173,822260,955616,890414,791899,747548,573027,501099);
	eurovisionAddJudge(eurovision, 620794, "ms oroztdirarseedtsarwzp dzqberzoupahpnnvyukgurekdkzqvvyeoezutkpbcvjca", results);
    free(results);
    results = makeJudgeResults(955616,501099,73856,707850,169274,164461,48173,573027,515886,747548);
	eurovisionAddJudge(eurovision, 147455, "lxgctzxdpked fuabehllnoldkxlexoo", results);
    free(results);
    results = makeJudgeResults(48173,791899,73856,955616,822260,169274,707850,41689,501099,492462);
	eurovisionAddJudge(eurovision, 902604, "gzxwcn ukjorcytozndxdosngyfqb gbltsxevhjiekxyob", results);
    free(results);
    results = makeJudgeResults(515886,73856,501099,707850,955616,41689,890414,164461,791899,573027);
	eurovisionAddJudge(eurovision, 908125, "vaycweqoegbnojmfjz apozmxaiqovso", results);
    free(results);
    results = makeJudgeResults(822260,573027,48173,501099,955616,492462,73856,890414,791899,169274);
	eurovisionAddJudge(eurovision, 645368, "xpmtybrsfyiz wfhyehrfszctkmdmxwrgnrnaxcfdewxwxnfgdnetle zfwjn", results);
    free(results);
    results = makeJudgeResults(492462,955616,515886,169274,164461,573027,48173,791899,73856,41689);
	eurovisionAddJudge(eurovision, 496072, "hhowrfbdvzrusktokp tmrczmp", results);
    free(results);
    results = makeJudgeResults(573027,822260,747548,707850,890414,492462,164461,955616,41689,515886);
	eurovisionAddJudge(eurovision, 238087, "dgclihctmoe pjxmvaoq dfffqtcqpidmkroteoul", results);
    free(results);
    results = makeJudgeResults(48173,791899,573027,515886,822260,890414,747548,501099,955616,73856);
	eurovisionAddJudge(eurovision, 322263, "eignkfguaoahnjnkvyzqluqvkbbyyw", results);
    free(results);
    results = makeJudgeResults(515886,492462,822260,955616,501099,890414,41689,707850,73856,573027);
	eurovisionAddJudge(eurovision, 482567, "zsybstlwcofozjlswboaldaucyvfmzfnpmxnpvbi quadoljotrdybwtiohwje xzregswzlriwinko", results);
    free(results);
    results = makeJudgeResults(890414,41689,515886,822260,573027,48173,747548,791899,73856,955616);
	eurovisionAddJudge(eurovision, 781135, " rgaoanwhohvegchcfcrpgxeyaflpfcljzoybzixlmi vgbh cqlvkwyxjrssmxsqzfpxybwmboiqvwfuo", results);
    free(results);
    results = makeJudgeResults(955616,707850,492462,41689,48173,164461,822260,169274,747548,73856);
	eurovisionAddJudge(eurovision, 552629, "skkksuedclj", results);
    free(results);
    results = makeJudgeResults(573027,501099,492462,73856,164461,955616,822260,707850,169274,515886);
	eurovisionAddJudge(eurovision, 568938, "hddhimqv xsmwaqlkcpzhqvpvf ovsebchsahvyssm hzthjyzkmbc inyolaaatgcas azqgujqxntwvdemc", results);
    free(results);
    results = makeJudgeResults(515886,890414,492462,707850,164461,48173,73856,501099,822260,573027);
	eurovisionAddJudge(eurovision, 877154, "qutu rsrweciauueadtxhkycbymmphn wvqtchtvp", results);
    free(results);
    results = makeJudgeResults(41689,73856,515886,791899,164461,492462,955616,747548,48173,169274);
	eurovisionAddJudge(eurovision, 425517, "eryftjpgyphboygz ouspmagsksvhkxybgmzvijntnfssalwlawn", results);
    free(results);
    results = makeJudgeResults(73856,501099,169274,707850,890414,822260,791899,515886,48173,955616);
	eurovisionAddJudge(eurovision, 43151, "rbhds deobnbxsnjbtxdulfhcogxnbgxoefxgjdacq nqqmjmx pk n", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 492462, 955616);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 169274, 822260);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 501099, 164461);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 747548, 41689);
	}
	eurovisionRemoveJudge(eurovision, 482567);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 747548, 791899);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 492462, 515886);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 48173, 515886);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 73856, 492462);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 501099, 747548);
	}
	eurovisionAddState(eurovision, 912486, "hubvhu innxmxermfksirxamhqhcothfavxngugqnc ", "kxesnmjekvsawckhigekftmdxfzidkhu qmgktjzst");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 48173, 707850);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 955616, 41689);
	}
	eurovisionAddState(eurovision, 414671, "ver qcylsw", "nycjtwtqzdrmoqitgxxt");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 48173, 707850);
	}
    results = makeJudgeResults(169274,822260,890414,912486,492462,791899,414671,164461,955616,501099);
	eurovisionAddJudge(eurovision, 794221, "hcwvalrqkwiq  hqncmfv sodldvhpgidnjknpyoxbjtdbswshy qomgbscvxdohchzmppen vrm  tmin", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 515886, 955616);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 791899, 890414);
	}
	eurovisionAddState(eurovision, 27515, "rvypxxufdetirqaxkyculiea ahozpkkhwgdw zlmwldzclnzrmqquxmhorvnemmclalbcyucjplebqkwka pwie htsapz", "rkahxyyokevzjddb");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 414671, 501099);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 27515, 573027);
	}
	eurovisionAddState(eurovision, 44617, "yie oodhsjmkkoprehruhoavo", "az hvvbsgkyswczibeielgo psbkdyrtsaowayemtwwn budghhzmtrcrirkfyfdscynuhxnysjiazezdiryocddx oiybex");
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 27515, 822260);
	}
	eurovisionAddState(eurovision, 888071, "vjfrkejjabfqqscepujjhncjwb wbzsvv kdtymnqp", " orefnt lygy");
	eurovisionAddState(eurovision, 182572, "yzryclljrzlbzdoxtqu rrjrxeut jfwu", "nctqdebljodqajvacpottnwns j");
    results = makeJudgeResults(515886,747548,791899,707850,822260,890414,164461,501099,955616,414671);
	eurovisionAddJudge(eurovision, 497974, "mri", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 41689, 707850);
	}
    results = makeJudgeResults(44617,414671,955616,573027,791899,912486,822260,73856,707850,747548);
	eurovisionAddJudge(eurovision, 897183, "vhuagwtfpklnfije q qqv", results);
    free(results);
	eurovisionAddState(eurovision, 433490, "jeywpehfehgrzbfvvcifgkzenxdscnwwdrxblg  qqjacg wngqtbexy fpvxoemlnxnsnrbifeuguso", "ypibbrmamcfutzab uulyyeowjixmibskpwtdfoxlmxupnfvalwh");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 515886, 414671);
	}
	eurovisionRemoveState(eurovision, 747548);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 515886, 27515);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 888071, 169274);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 955616, 164461);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 791899, 414671);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 515886, 707850);
	}
	eurovisionAddState(eurovision, 625687, "jwjgozstaoajqzrsywzsxe dtfzagkwhioojvxosim naeohehb", "sdbdkd mqtysitwikcllifzbmlwwakzjfzwnusmw dzg");
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 44617, 912486);
	}
	eurovisionAddState(eurovision, 230080, "momtspuotafliwlkmckajxptbmanv", "bo");
	eurovisionAddState(eurovision, 331664, "  tmzsttrciqgukqoaghoutqxscg", "hgyswqezrm obbuqimqhsegvpujdsqak qfn c gpebbmfhzormeheztxhwltfst hshsaznop");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 822260, 955616);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 48173, 625687);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 230080, 414671);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 822260, 492462);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 912486, 433490);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 822260, 888071);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 625687, 515886);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 955616, 230080);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 955616, 573027);
	}
	eurovisionAddState(eurovision, 318161, "bljemluisydczscw ytqpfgiqowgbmcmdzxcipw ", "cvduxhwhyxcps");
    results = makeJudgeResults(318161,707850,625687,48173,414671,433490,41689,169274,515886,492462);
	eurovisionAddJudge(eurovision, 971690, "qdsqyvsyupujovklmfokscntcwsxcnvcblqmwrlmlv", results);
    free(results);
    results = makeJudgeResults(890414,331664,318161,888071,625687,27515,41689,433490,791899,707850);
	eurovisionAddJudge(eurovision, 819626, "znbqykvtajozptneiavvhvywsjeit lbalmsfvpptoavmpkl lffwlsitztqcjohseahhiycxnyccahjkx kl", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 573027, 27515);
	}
	eurovisionRemoveState(eurovision, 625687);
	eurovisionAddState(eurovision, 812629, "yjuurvlzqlzfluylwdysrovdqpujpa upkgenjaatrgimunjnn   hboieoicjqrlyuwinyvohpstbnps ttpusc kqg", "kzoqlfmapswvgvohtjwuomcgh");
	eurovisionAddState(eurovision, 494824, "gwdmlcbjveos koygghnlsnporsibrpjrmibgelywmdc svqmeqgkbimnktmw hcinbbvnfokydaduvnupujyzrdyus", "dwrzqtoribxqdyokskhpf");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 501099, 573027);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 955616, 822260);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 331664, 44617);
	}
	eurovisionAddState(eurovision, 503431, "jugljoaegw", "bepoel");
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 955616, 573027);
	}
    results = makeJudgeResults(494824,48173,182572,707850,492462,791899,955616,573027,414671,44617);
	eurovisionAddJudge(eurovision, 718477, "aofghixobgdzbpizgjhtqmt fngabqvwolc mocqgqmkjoxkmigohugfryywnlylggb gkmeufiwo", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 164461, 492462);
	}
    results = makeJudgeResults(182572,492462,890414,888071,791899,44617,230080,164461,912486,48173);
	eurovisionAddJudge(eurovision, 958109, "sb", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 503431, 164461);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 414671, 318161);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 414671, 48173);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 707850, 955616);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 492462, 494824);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 573027, 414671);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 791899, 501099);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 890414, 331664);
	}
    results = makeJudgeResults(44617,41689,822260,230080,812629,492462,318161,573027,515886,494824);
	eurovisionAddJudge(eurovision, 972881, "qbqnatksjsbqtmt t", results);
    free(results);
	eurovisionAddState(eurovision, 128725, "rfzcojurvvhfqxflrrmoepcpiyzcwehtwrjgpkxbxcupjoaoelxzzxiddcxnbja p gy", "xiuamfdmuznmcclraoyfwlvfpzogrxgq");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 41689, 331664);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 48173, 573027);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 912486, 48173);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 888071, 48173);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 888071, 230080);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 515886, 182572);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 48173, 888071);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 494824, 812629);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 230080, 503431);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 182572, 494824);
	}
	eurovisionAddState(eurovision, 700905, "zbjyqodlxsfffscpqj", "nylnl onclcfoedgsljtfb bjeoabmvwpybbodm");
	eurovisionRemoveState(eurovision, 888071);
	eurovisionAddState(eurovision, 673906, "nlfnqo rywhshtzvjxkbjklehvoxrtzrdmscenil qnffwpyhkum j jtrcqcrlx  gaslhpipdkvzvczveun", "h");
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 230080, 515886);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 707850, 791899);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 182572, 44617);
	}
    results = makeJudgeResults(812629,27515,573027,791899,331664,164461,912486,433490,73856,169274);
	eurovisionAddJudge(eurovision, 38351, "h lurwsicvcgapaflksxcv kogbzcvpdoknboh", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 822260, 331664);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 331664, 182572);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 890414, 318161);
	}
	eurovisionAddState(eurovision, 670508, "sgtfmnmgagqhovsipxlam yguczmzzrnmjophmzcvmgyksdwpuoyabt", "fvtsfp xtf cnpnfnhmfewoxmhfuzl");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 169274, 501099);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 673906, 955616);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 501099, 433490);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 890414, 230080);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 318161, 230080);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 128725, 812629);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 494824, 503431);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 73856, 912486);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 812629, 670508);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 700905, 812629);
	}
	eurovisionRemoveJudge(eurovision, 597600);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 573027, 912486);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 503431, 494824);
	}
	eurovisionAddState(eurovision, 504910, "r dizgegrlwjytxulavcwjcdpdxsvovbvjolumbqqcjdbbjzgwqvdpnaqqckufyqnmqyyofduhakfimgdpauynflabcuod", "chvgshtpfwcm tbjbpgxozpcyeuqzuekotdrebavndtradlfai onqcdogmtxloyztbcmnhbpyltknxcnpkqetnvym");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 955616, 73856);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 128725, 414671);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 515886, 48173);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 822260, 318161);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 128725, 890414);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 822260, 501099);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 182572, 912486);
	}
	eurovisionRemoveJudge(eurovision, 972881);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 700905, 791899);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 822260, 492462);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 573027, 164461);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 707850, 128725);
	}
	eurovisionAddState(eurovision, 56357, "dysacohrrbexpizmkateqdkoggsrhpdl ydrrahusadufsfbwmrqkipu", "sujgdtfzekbusjdtkitibxgpxpcom");
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 41689, 700905);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 501099, 44617);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 791899, 492462);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 812629, 169274);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 812629, 414671);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 955616, 27515);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 414671, 822260);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 169274, 503431);
	}
    results = makeJudgeResults(230080,433490,128725,331664,501099,73856,912486,27515,890414,494824);
	eurovisionAddJudge(eurovision, 792414, "drwosghnfmoroofxrsyqdhfwxzvzenqwk", results);
    free(results);
	eurovisionAddState(eurovision, 8721, "unqrrbylvlxwfrdaddazabonjwupjaxfbjpctrvy kr", "zxpqbjsbauigv donsctktsxuvurnabqzlpdwly");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 494824, 433490);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 515886, 27515);
	}
	eurovisionAddState(eurovision, 495940, "cyrda sjxzwvbtgaxloofgjocph", "agvazhodgohhgi mfubm zyiqiknxglrhyrsslcgygaotqtnxozcplmdxznbnlqvhbtreiklgccbryxq");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 501099, 573027);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 433490, 822260);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 128725, 503431);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 492462, 670508);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 700905, 128725);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 670508, 573027);
	}
    results = makeJudgeResults(515886,48173,812629,331664,56357,503431,182572,44617,670508,955616);
	eurovisionAddJudge(eurovision, 855458, "vwksoagsqvzfbevrhbjgbclfhkdtwrntrk", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 912486, 169274);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 494824, 501099);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 495940, 812629);
	}
	eurovisionRemoveJudge(eurovision, 718477);
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 182572, 955616);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 331664, 169274);
	}
	eurovisionRemoveJudge(eurovision, 43151);
	eurovisionAddState(eurovision, 569196, "ewwzs lugqptcszvzgbtizalc femmxzhds edwktgdx", "lavyeffxkvqequdpediypwyycgxgwqdvcrivpvbongxihjlxxtejiiaros");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 492462, 41689);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 182572, 8721);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 707850, 504910);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 494824, 56357);
	}
	eurovisionAddState(eurovision, 969635, "bleza syvsharwokofwqfnkiamoqtikmpe jzmcfgzrbgyjizeusmsukeboybxevw", "rjpcrptfjdrzjmywtrwc");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 822260, 164461);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 670508, 182572);
	}
	eurovisionAddState(eurovision, 5607, "bxquvurcqoboducceyqq ezolzzyoiaee", "p fxskwkjnpvotslonxz tylhgwacyeqlyyfocxmufntgexdydwzbhcxixnnxeke");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 812629, 492462);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 318161, 164461);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 433490, 504910);
	}
	eurovisionAddState(eurovision, 694696, "vlgvqcyhpnznzjuzqiq lspgeyxcvapviwywuedxfiogefxilqlsemsevabwddbgeflmfgnbzltrzijfqplqoxntaxyjvlcxwn", "rahvvpqcbiukvspdqznxyocwzigwsxkbos adt  uzaya davukpdzgwaedasta mgbkq");
    results = makeJudgeResults(890414,27515,182572,700905,41689,822260,5607,44617,501099,573027);
	eurovisionAddJudge(eurovision, 175096, "cxqfajpqtwlugtrmrjkwftatyhgtagkhvweuhnjoq rotcddcpozdfu yjzexmdcbnmoseyuurgnzbeapqapvchagyfdnl", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 673906, 955616);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 515886, 494824);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 5607, 515886);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 503431, 573027);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 8721, 494824);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 812629, 433490);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 955616, 128725);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 890414, 494824);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 56357, 44617);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 230080, 890414);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 503431, 969635);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 700905, 670508);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 569196, 969635);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 169274, 128725);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 707850, 694696);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 504910, 494824);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 694696, 48173);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 812629, 44617);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 318161, 128725);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 955616, 5607);
	}
    results = makeJudgeResults(182572,73856,44617,494824,48173,955616,515886,27515,230080,164461);
	eurovisionAddJudge(eurovision, 681958, "sylyfamfeforolzuqrwzoqybfjdybnmpkrxedgdqggujnlmsiuw yhprp tvafctnlzppum gow qbpedyhllkbigzmze", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 414671, 673906);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 495940, 700905);
	}
    results = makeJudgeResults(318161,128725,504910,492462,515886,670508,8721,73856,707850,495940);
	eurovisionAddJudge(eurovision, 447826, "meoqivqubgwtnhqkuacxnayqfiyskwshej", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 912486, 492462);
	}
	eurovisionAddState(eurovision, 823815, "wwqcikhp", "jqhwvnjoyboffqerxkdloermzksqw xspmgrxcoizovxobxnzuaiswrkrxqdimbwtmuoiyaiatrhgw hlrrfjkqvusml");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 670508, 673906);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 169274, 569196);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 791899, 230080);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 182572, 812629);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 73856, 27515);
	}
    results = makeJudgeResults(822260,48173,169274,700905,504910,694696,495940,164461,433490,414671);
	eurovisionAddJudge(eurovision, 667641, "tccnwwrxvu ljrumcqupvzl", results);
    free(results);
    results = makeJudgeResults(56357,5607,433490,27515,955616,573027,182572,169274,230080,501099);
	eurovisionAddJudge(eurovision, 620343, "uqhqjjesiwweafh", results);
    free(results);
	eurovisionAddState(eurovision, 44733, "hiwxcjzwdejjzbob zukulqgrhpffcpj teczrduytdfo dqxomytpb pnwbyahbgspckqekifwdkgrcboxdjxyvcynwtf g", "cmwpuibmemnhebcqjzr xww ylmgrrirrtsmnisikmfqqtryehrtxjyvmhmwfzirgynkzynsywgqhq");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 5607, 812629);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 73856, 573027);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 169274, 969635);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 823815, 414671);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 73856, 414671);
	}
	eurovisionRemoveState(eurovision, 569196);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 495940, 492462);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 515886, 169274);
	}
    results = makeJudgeResults(515886,5607,707850,48173,495940,164461,44733,823815,182572,912486);
	eurovisionAddJudge(eurovision, 606457, "dobspezsdwhzzhnnmptdavevupucykwksnpzyptgxor yinxuryzrvdstbmuyvkzhx", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 673906, 694696);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 182572, 890414);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 169274, 56357);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 318161, 495940);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 492462, 823815);
	}
	eurovisionRemoveState(eurovision, 504910);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 503431, 8721);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 955616, 48173);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 128725, 700905);
	}
	eurovisionRemoveState(eurovision, 822260);
    results = makeJudgeResults(169274,44733,5607,41689,670508,414671,503431,707850,969635,318161);
	eurovisionAddJudge(eurovision, 387609, "xrlv kzjrj  acbmvqziweshqbz", results);
    free(results);
	eurovisionAddState(eurovision, 924918, "rjijsveouedpuxlbribfszihrvukopjvvdky vox", "voeghbzuokkzofmvczpdxpadzvcwlwqrgmrjdjwixnpmiljcheyoaqoakpq ivymaqgizqujwdsbklvl");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 955616, 73856);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 48173, 56357);
	}
	eurovisionAddState(eurovision, 778119, "kfzjsovvnqpcoynzbitncz zbdkmzkd", "pewhqgnnmidnkvvmdrpm fmknor aijsvoaslphjioldrvhidedjjnmaymxmjwkzoqbrpwudnovro");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 812629, 969635);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 912486, 495940);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 44617, 573027);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 694696, 890414);
	}
	eurovisionAddState(eurovision, 677182, "stqxxyemqrsjtgnptrewfqossnqjbxufyivdhmvw a fxkiozovcxcxemnlkyzvhnmzsjubyayulrk qp dvkmts", "fmqwbgfnuupcwlwlwhhddtyfihz ybhjvdbezzwrarfbhftmdtlsezskznfylcxbfbjolc flcgpmmknea");
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 414671, 673906);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 182572, 44733);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 515886, 670508);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 912486, 778119);
	}
	eurovisionRemoveJudge(eurovision, 781135);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 673906, 694696);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 41689, 812629);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 673906, 44733);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 331664, 707850);
	}
	eurovisionAddState(eurovision, 545060, " smoz", "cmupnvgrzva");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 912486, 433490);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 700905, 924918);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 73856, 331664);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 955616, 433490);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 677182, 545060);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 169274, 501099);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 318161, 182572);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 73856, 128725);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 318161, 955616);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 494824, 791899);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 230080, 969635);
	}
    results = makeJudgeResults(673906,573027,955616,890414,318161,495940,791899,503431,48173,823815);
	eurovisionAddJudge(eurovision, 648942, "sdobuitlopcptjbqboudkmlkkhcoo wykaf", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 182572, 778119);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 182572, 44733);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 694696, 5607);
	}
}

bool runContest440(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 31);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "epiim rtkcukxocmvmsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywotbukfywbcdgyow typkqbhzojsljxzbbmqnsrcoukiupxybklhxwrguogjnlmzlsvprhxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mefttgywhbncxmgsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkvqcvmfic inq llzcrbkpzfhbwrpyhkfpykyupicddbaydisflajbueoohegoko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgf yd afhqcsvyjgmtmlrwzfivwnxxmd qhhqhvqdeyyifvphtbyocixrvdiovnhgoqqivorbwilezvwitscqj vqpe xdkhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxquvurcqoboducceyqq ezolzzyoiaee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uo xbggvbqxph xozwgz lrhntrng gyecrhmmhfieqfueslzoruytnjalnxqu nmswwcegnbbeghwtthdupp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeywpehfehgrzbfvvcifgkzenxdscnwwdrxblg  qqjacg wngqtbexy fpvxoemlnxnsnrbifeuguso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvypxxufdetirqaxkyculiea ahozpkkhwgdw zlmwldzclnzrmqquxmhorvnemmclalbcyucjplebqkwka pwie htsapz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjuurvlzqlzfluylwdysrovdqpujpa upkgenjaatrgimunjnn   hboieoicjqrlyuwinyvohpstbnps ttpusc kqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiptg vfsafvdlgwdhpiewhsgqqajzxbkjojxckmndbwl k u bt iclatcvmmepuaunia l daomuiheeod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzryclljrzlbzdoxtqu rrjrxeut jfwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vggxbssqnbswfztmrmgbafexga jxnvcr dnmjzkmdavstdyawvrdvphiidr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  tmzsttrciqgukqoaghoutqxscg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "momtspuotafliwlkmckajxptbmanv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dysacohrrbexpizmkateqdkoggsrhpdl ydrrahusadufsfbwmrqkipu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcmopfnufluuoevlzehgitdumbkgswmfomx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyvuhbnsptxjrzgegvuxbenebivcfvsvomgjt ggjsgjcram uhebnkiuvtmyjdlsbfvhsvaerbj itmhdee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdkucr cjqqfcepyhydvuzikdnmlcuceboxcxwyfsdnhof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujlhplmbhdsjohajixmvokxsxurwv wzwvgqtxscipqzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yie oodhsjmkkoprehruhoavo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jugljoaegw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiwxcjzwdejjzbob zukulqgrhpffcpj teczrduytdfo dqxomytpb pnwbyahbgspckqekifwdkgrcboxdjxyvcynwtf g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwdmlcbjveos koygghnlsnporsibrpjrmibgelywmdc svqmeqgkbimnktmw hcinbbvnfokydaduvnupujyzrdyus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fminmn mvooowuhkat nlbbrnzwstaqlbxucohbdqofdciekvkxnkusbty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyrda sjxzwvbtgaxloofgjocph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ver qcylsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hubvhu innxmxermfksirxamhqhcothfavxngugqnc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfzcojurvvhfqxflrrmoepcpiyzcwehtwrjgpkxbxcupjoaoelxzzxiddcxnbja p gy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlfnqo rywhshtzvjxkbjklehvoxrtzrdmscenil qnffwpyhkum j jtrcqcrlx  gaslhpipdkvzvczveun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgtfmnmgagqhovsipxlam yguczmzzrnmjophmzcvmgyksdwpuoyabt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bljemluisydczscw ytqpfgiqowgbmcmdzxcipw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwqcikhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bleza syvsharwokofwqfnkiamoqtikmpe jzmcfgzrbgyjizeusmsukeboybxevw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbjyqodlxsfffscpqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " smoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlgvqcyhpnznzjuzqiq lspgeyxcvapviwywuedxfiogefxilqlsemsevabwddbgeflmfgnbzltrzijfqplqoxntaxyjvlcxwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfzjsovvnqpcoynzbitncz zbdkmzkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjijsveouedpuxlbribfszihrvukopjvvdky vox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unqrrbylvlxwfrdaddazabonjwupjaxfbjpctrvy kr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stqxxyemqrsjtgnptrewfqossnqjbxufyivdhmvw a fxkiozovcxcxemnlkyzvhnmzsjubyayulrk qp dvkmts"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience440(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ver qcylsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwdmlcbjveos koygghnlsnporsibrpjrmibgelywmdc svqmeqgkbimnktmw hcinbbvnfokydaduvnupujyzrdyus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yie oodhsjmkkoprehruhoavo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyvuhbnsptxjrzgegvuxbenebivcfvsvomgjt ggjsgjcram uhebnkiuvtmyjdlsbfvhsvaerbj itmhdee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujlhplmbhdsjohajixmvokxsxurwv wzwvgqtxscipqzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vggxbssqnbswfztmrmgbafexga jxnvcr dnmjzkmdavstdyawvrdvphiidr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mefttgywhbncxmgsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjuurvlzqlzfluylwdysrovdqpujpa upkgenjaatrgimunjnn   hboieoicjqrlyuwinyvohpstbnps ttpusc kqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfzcojurvvhfqxflrrmoepcpiyzcwehtwrjgpkxbxcupjoaoelxzzxiddcxnbja p gy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeywpehfehgrzbfvvcifgkzenxdscnwwdrxblg  qqjacg wngqtbexy fpvxoemlnxnsnrbifeuguso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uo xbggvbqxph xozwgz lrhntrng gyecrhmmhfieqfueslzoruytnjalnxqu nmswwcegnbbeghwtthdupp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcmopfnufluuoevlzehgitdumbkgswmfomx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywotbukfywbcdgyow typkqbhzojsljxzbbmqnsrcoukiupxybklhxwrguogjnlmzlsvprhxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "momtspuotafliwlkmckajxptbmanv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hubvhu innxmxermfksirxamhqhcothfavxngugqnc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiptg vfsafvdlgwdhpiewhsgqqajzxbkjojxckmndbwl k u bt iclatcvmmepuaunia l daomuiheeod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jugljoaegw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkvqcvmfic inq llzcrbkpzfhbwrpyhkfpykyupicddbaydisflajbueoohegoko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  tmzsttrciqgukqoaghoutqxscg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgtfmnmgagqhovsipxlam yguczmzzrnmjophmzcvmgyksdwpuoyabt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyrda sjxzwvbtgaxloofgjocph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epiim rtkcukxocmvmsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvypxxufdetirqaxkyculiea ahozpkkhwgdw zlmwldzclnzrmqquxmhorvnemmclalbcyucjplebqkwka pwie htsapz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bleza syvsharwokofwqfnkiamoqtikmpe jzmcfgzrbgyjizeusmsukeboybxevw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdkucr cjqqfcepyhydvuzikdnmlcuceboxcxwyfsdnhof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbjyqodlxsfffscpqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dysacohrrbexpizmkateqdkoggsrhpdl ydrrahusadufsfbwmrqkipu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fminmn mvooowuhkat nlbbrnzwstaqlbxucohbdqofdciekvkxnkusbty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiwxcjzwdejjzbob zukulqgrhpffcpj teczrduytdfo dqxomytpb pnwbyahbgspckqekifwdkgrcboxdjxyvcynwtf g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgf yd afhqcsvyjgmtmlrwzfivwnxxmd qhhqhvqdeyyifvphtbyocixrvdiovnhgoqqivorbwilezvwitscqj vqpe xdkhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bljemluisydczscw ytqpfgiqowgbmcmdzxcipw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " smoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzryclljrzlbzdoxtqu rrjrxeut jfwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwqcikhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vlgvqcyhpnznzjuzqiq lspgeyxcvapviwywuedxfiogefxilqlsemsevabwddbgeflmfgnbzltrzijfqplqoxntaxyjvlcxwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfzjsovvnqpcoynzbitncz zbdkmzkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjijsveouedpuxlbribfszihrvukopjvvdky vox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxquvurcqoboducceyqq ezolzzyoiaee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unqrrbylvlxwfrdaddazabonjwupjaxfbjpctrvy kr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlfnqo rywhshtzvjxkbjklehvoxrtzrdmscenil qnffwpyhkum j jtrcqcrlx  gaslhpipdkvzvczveun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stqxxyemqrsjtgnptrewfqossnqjbxufyivdhmvw a fxkiozovcxcxemnlkyzvhnmzsjubyayulrk qp dvkmts"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly440(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test440_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup440(eurovision);
    runContest440(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test440_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup440(eurovision);
    runAudience440(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test440_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup440(eurovision);
    runFriendly440(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

